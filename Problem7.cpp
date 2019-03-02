#include <bits/stdc++.h>
using namespace std;

int main()
{
	string r = "hello";
	string s;
	cin >> s;

	int slen = s.length();
	int rlen = r.length();
	int i,j;

	for ( i=0, j=0; i<slen && j < rlen; i++)
		if (s[i] == r[j])
			j++;
	if (j == rlen)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}