#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int sum = (int)sqrt(a * b * c);
	for(int i = 1;i <= sum;i++) {
		for(int j = 1;j <= sum;j++){
			int l = j, r = sum;
			while(l <= r) {
				int mid =(l + r) >> 1;
				long long tmp = i * j * mid * i * j * mid;
				if(tmp > a * b * c) r = mid - 1;
				else if(tmp < a * b * c) l = mid + 1;
				else {
					cout << i << " " << j << " " << mid << endl;
					return 0;
				}
			}
		}
	}
	return 0;
}
