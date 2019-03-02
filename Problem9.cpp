#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int * arr = new int[n+1];
	int * resarr = new int[n+1];

	for (int i=1; i<=n; i++)
	{
		cin >> arr[i];
		resarr[arr[i]] = i;
	}
	for (int i=1; i<=n; i++)
		cout << resarr[i] << " ";
	cout << endl;
}