/*************************************************************************
	> File Name: LCA.cpp
	> Author: unsemp
	> Mail: 1324847965@qq.com 
	> Created Time: Tue Nov  1 02:22:39 2022
 ************************************************************************/
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<queue>
#include<math.h>
using namespace std;
const int N = 5e5 + 10;
const int M = log(N) / log(2) + 1;
int n, m, s;
int h[N], ver[2 * N], ne[2 * N], idx;
//const int t = log(N) / log(2) + 1;
int f[N][M];
bool st[N];

void init() {
	memset(h, 0, sizeof h);
	idx = 0;
}

void add(int a, int b) {
	ver[++idx] = b, ne[idx] = h[a], h[a] = idx;
}

void bfs(int s) {
	memset(st, 0, sizeof st);
	queue<int> q;
	q.push(s);
	st[s] = true;
	int cnt = 0;
	while(q.size()) {
		int len = q.size();
		for(int i = 0;i < len;++i) {
			auto t = q.front();
			q.pop();
			cnt ++;

			for(int j = h[t];j;j = ne[j]) {
				int y = ver[j];
				if(st[y]) continue;
				st[y] = true;
				q.push(y);
				f[y][0] = t;
			//	printf("f[%d][%d] = %d ", y, 0, t);
				for(int k = 1;(1 << k) < N;++k) {
				
					f[y][k] = f[f[y][k - 1]][k - 1];
			//		printf("f[%d][%d] = %d ", y, k, f[y][k]);
				}
			//	printf("\n");
			}
		}
	}

}

int LCA(int a, int b) {
	if(a > b) 
	return 0;
}

int main() {
	init();
	cin >> n >> m >> s;
	for(int i = 1;i <= n - 1;++i) {
		int a, b;
		cin >> a >> b;
		add(a, b);
		add(b, a);
	}

	bfs(s);


	for(int i = 1;i <= m;++i) {
		int a, b;
		cin >> a >> b;
		cout << LCA(a, b);
	}
	return 0;
}
