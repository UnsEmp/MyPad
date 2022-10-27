/*************************************************************************
	> File Name: Balance.cpp
	> Author: unsemp
	> Mail: 1324847965@qq.com 
	> Created Time: Thu Oct 27 02:55:30 2022
 ************************************************************************/

#include<iostream>
#include <set>
#include <map>
using namespace std;
int q;

int main() {
	cin >> q;
	set<long long> st;
	map<long long, int> mp;
	while(q--) {
		char ch;
		long long num;
		cin >> ch >> num;
		if(ch == '+') st.insert(num);
		else {
			long long sum = 1;
			if(mp.count(sum)) sum = mp[sum];
			

			
			while(st.find(sum * num) != st.end()) {
				sum ++;
			}
			mp[sum * num] = sum;
			cout << sum * num << "\n";
		}
	}
}
