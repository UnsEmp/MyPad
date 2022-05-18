#include <bits/stdc++.h>
using namespace std;

bool f(string s1, string s2) {
	if(s1.size() != s2.size()) return false;
	int n = s2.size();
	int i = 0, j = n - 1;
	while(i < n && j >=0 && s1[i] == s2[j]) {
		i++;
		j--;
	}
	return (i == n) && (j == -1);
}

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	if(f(s1, s2)) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
