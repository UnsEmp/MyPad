#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i < n;i++) {
		cin >> a[i];
	}
	int l = 0, r = 1, Max = 1010;
	for(int i = 1;i < n;i++) {
		if(abs(a[i] - a[i - 1]) < Max) {
			l = i - 1;
			r = i;
			Max = abs(a[i] - a[i - 1]);
		}
	}
	if(abs(a[n - 1] - a[0]) < Max) cout << 1 << " " << n << endl;
	else cout << l << " " << r << endl;
}
