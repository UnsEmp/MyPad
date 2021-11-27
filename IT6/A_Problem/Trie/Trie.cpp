#include <iostream>
#include <string.h>
using namespace std;
#define N 100010

int son[N][26], cnt[N], idx;

void Insert(char str[]) {
	int p = 0,n = strlen(str);
	for(int i = 0;i < n;i++) {
		int u = str[i] - 'a';
		if(!son[p][u]) son[p][u] = ++idx;
		p = idx;
	}
	cnt[p]++;
}

int query(char str[]) {
	int p = 0;
	for(int i = 0; str[i];i++) {
		int u = str[i] - 'a';
		if(!son[p][u]) return 0;
		p = son[p][u];
	}
	return cnt[p];
}


int main() {
	int _;
	cin >> _;
	while(_--) {
		char op, str[N];
		cin >> op >> str;
		if(op == 'I') Insert(str);
		else cout << query(str) << endl;
	}
	return 0;
}
