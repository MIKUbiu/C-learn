#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
//#include<bits/stdc++.h>
using namespace std;
int main() {
	for (int i = 123; i * 3 <= 987; i++) {
		int x = i* 2; int y = i* 3;
		ostringstream oss;
		oss << i << x << y;
		string s = oss.str();//将oss对象里所保存的值转成字符串型并保存到s
		sort(s.begin(),s.end());
		if (s == "123456789")
			cout << i << x << y << endl;
	}
	return 0;
}
