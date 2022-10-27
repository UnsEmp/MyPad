#include <bits/stdc++.h>
using namespace std;
using LL = long long;
const int N = 2 * 1e5 + 10;
vector<LL> tree(N), arr(N), mark(N);
LL n;
void build(LL l, LL r , int q) {
	if(l >= r) {
		tree[q] = arr[l];
		return ;
	}
	LL mid = l + (r - l) / 2;
	build(l, mid, q * 2), build(mid + 1, r, q * 2 + 1);
	tree[q] = tree[q * 2] + tree[q * 2 + 1];	
}

void update(LL l, LL r, LL c, LL s, LL t, LL q) {
	if(s <= l && r <= t) {
		tree[q] += (t - s + 1) * c, mark[q] += c;	
	}
	LL mid = s + (t - s) / 2;
	if(mark[q]) {
		tree[q * 2] += mark[q] * (mid - s + 1), tree[q * 2 + 1] += mark[q] * (t - mid);
	       mark[q * 2] += mark[q], mark[q * 2 + 1] += mark[q];
       mark[q] = 0;	       
	}
	if(mid >= l) update(l, r, c, s, mid, q * 2);
	if(mid <= r) update(l, r, c, mid + 1, t, q * 2 + 1);
	tree[q] = tree[q * 2] + tree[q * 2 + 1];
}

LL getsum(LL l, LL r, LL s, LL t, LL q) {
	if(l <= s && t <= r) {
		return tree[q];
	}
	LL mid = s + (t - s) / 2;
	if(mark[q]) {
		tree[q * 2] += mark[q] * (mid - s + 1), tree[q * 2 + 1] += mark[q] * (t - mid);
		mark[q * 2] += mark[q], mark[q * 2+ 1] += mark[q];
		mark[q] = 0;
	}
	LL sum = 0;
	if(mid >= l) sum += getsum(l, r, s, mid, q * 2);
       if(r >= mid) sum += getsum(l, r, mid + 1, t, q * 2 + 1);
	return sum;       
}


int main() {
	cout << "ok" << "\n";
	return 0;
}
