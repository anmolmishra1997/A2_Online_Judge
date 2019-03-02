#include <bits/stdc++.h>
using namespace std;

bool lucky(int n)
{
	while (n!=0)
	{
		int d = n%10;
		if ( d!=4 && d!=7)
			return false;
		n = n/10;
	}
	return true;
}
int main()
{
	int n;
	cin >> n;
	int rootn = sqrt(n);
	int i;
	for (i=1; i<=rootn; i++)
	{
		if (n%i == 0)
		{
			int q = n/i;
			if ( lucky(q) || lucky(i))
				break;
		}
	}
	if (i > rootn)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
}