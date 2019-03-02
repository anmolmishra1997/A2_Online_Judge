#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int * arr;
	arr = new int[n];

	int sum = 0;
	for (int i =0; i<n; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}

	sort(arr, arr+n);
	int revsum = 0;
	int i =0;
	for ( i = 1; i<=n; i++)
	{
		revsum+= arr[n-i];
		if ( revsum > sum/2)
			break;
	}
	cout << i << endl;
}