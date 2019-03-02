#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin >> str;
	for (char c : str)
	{
		if ( c>= 'A' && c <= 'Z')
			c+= 'a' - 'A';
		if ( c != 'a' and c !='e' and c != 'i' and c!= 'o' and c!= 'u' and c!= 'y')
			cout << '.' << c;
	}
	cout << endl;
}