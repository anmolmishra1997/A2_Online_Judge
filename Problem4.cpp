#include <bits/stdc++.h>
using namespace std;

char toLowerCase(char ch)
{
	if ( ch >= 'A' && ch <= 'Z')
		return ch + 'a' - 'A';
	return ch;
}
int compare(string str1, string str2)
{
	int len = str1.length();
	for (int i=0; i< len; i++)
	{
		char ch1 = toLowerCase(str1.at(i));
		char ch2 = toLowerCase(str2.at(i));
		if ( ch1 == ch2)
			continue;
		else if ( ch1 > ch2 )
			return 1;
		else if ( ch1 < ch2 )
			return -1;
	}
	return 0;
}
int main()
{
	string str1, str2;
	cin >> str1 >> str2;
	cout << compare (str1, str2) << endl;
}