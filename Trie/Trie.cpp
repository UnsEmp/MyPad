#include <iostream>
using namespace std;
#define N 100010
int son[N][26], cnt[N], idx;

void Insert(string s) {
	int p = 0;
	for(int i = 0;i < s.size();i++) {
		int u = s[i] - 'a';
		if(!son[p][u]) son[p][u] = ++idx;
		p = son[p][u];
	}
	cnt[p]++;
}

int query(string s) {
	int p = 0;
	for(int i = 0;i < s.size();i++) {
		int u = s[i] - 'a';
		if(!son[p][u]) return 0;
		p = son[p][u]; 
	}
	return cnt[p];
}

int main() {
	int _;
	cin >> _;
	while(_--) {
		char ch;
		string s;
		cin >> ch >> s;
		if(ch == 'I') Insert(s);
		else cout << query(s) << endl;
	}
}
