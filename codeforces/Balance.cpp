/*************************************************************************
	> File Name: Balance.cpp
	> Author: unsemp
	> Mail: 1324847965@qq.com 
	> Created Time: Thu Oct 27 02:55:30 2022
 ************************************************************************/

#include<iostream>
#include <set>
using namespace std;
int q;

int main() {
	cin >> q;
	set<long long> st;
	while(q--) {
		char ch;
		long long num;
		cin >> ch >> num;
		if(ch == '+') st.insert(num);
		else {
			long long sum = num;
			while(st.find(sum) != st.end()) {
				sum += num;
			}
			cout << sum << "\n";
		}
	}
}
