#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	int a, b, n;
	cin >> a >> b >> n;
	bool flag = false;
	string ans = to_string(a);
	for(int i = 0;i < 10;i++) {
		int tmp = a * 10 + i;
		if(tmp % b == 0) {
			ans += '0' + i;
			flag = true;
			break;
		}
	}
	if(flag) {
		for(int i = 0;i < n - 1;i++) {
			ans += '0';
		}
		cout << ans << endl;
	}
	else cout << "-1" << endl;
	return 0;
}
