#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n = 5;
	int arr[n+1][n+1];

	int resi, resj;
	for ( int i =1; i<=n; i++)
		for ( int j =1; j<=n; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 1)
			{
				resi = i;
				resj = j;
			}
		}
		cout << abs((n+1)/2 - resi) + abs((n+1)/2 - resj) << endl;
}