#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

int main() {
	ofstream out("Text.txt", ios::out);
	for(int i = 1;i <= 99999;i++) {
		string s = "str\\\\";
		string ans = to_string(i);
		for(int i = 0;i < 5 - ans.size();i++) s += '0';
		s += ans;
		s += ".png";
		out << s << endl;
	}
	return 0;
}
