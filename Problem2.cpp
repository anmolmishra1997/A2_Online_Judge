#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string str;
	for ( int i =0; i<n; i++)
	{
		cin >> str;
		int len = str.length();
		if (len > 10)
			cout << str.at(0) << len - 2 << str.at(len-1) << endl;
		else
			cout << str << endl;
	}
}