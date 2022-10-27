#include <iostream>
using namespace std;
#define MAX 100010
int a[MAX];

void quick_sort(int a[], int l, int r) {
	
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++) cin >> a[i];
	quick_sort(a, 0, n - 1);
	for(int i = 0;i < n;i++) cout << a[i] << " ";
	return 0;	
}
