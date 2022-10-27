#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using VI = vector<int>;
using VII = vector<vector<int>>;

int main() {
	string s;
	bool flag = true;
	cin >> s;
	int n = s.size();
	for(int i = 0;i < n;i++) {
		if(s[i] == '1' || s[i] == '4') {
			if(s[i] == '4') {
				flag = false;
				break;
			}
			int j = i + 1;
			while(j < n && s[j] == '4' && j - i < 3) {
				j++;
			}
			i = j - 1;
			if(j - i >= 3) {
				flag = false;
				break;
			}	
		}
		else {
			flag = false;
			break;
		}
	}
	if(flag) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}

