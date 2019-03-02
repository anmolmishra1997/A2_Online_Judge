#include <bits/stdc++.h>
using namespace std;

int countNum(string str, char ch)
{
	int len = str.length();
	int count = 0;
	for (int i=0; i< len; i++)
		if ( str.at(i) == ch)
			count ++;
	return count;
}
string resultStr(int rep, string ch)
{
	string res = "";
	for (int i=0; i<rep; i++)
	{
		res.append(ch);
		res.append("+");
	}
	return res;
}
int main()
{
	string str;
	string res = "";
	cin >> str;
	res.append(resultStr(countNum(str, '1'),"1"));
	res.append(resultStr(countNum(str, '2'),"2"));
	res.append(resultStr(countNum(str, '3'),"3"));
	cout << res.substr(0,res.length()-1) << endl;
}