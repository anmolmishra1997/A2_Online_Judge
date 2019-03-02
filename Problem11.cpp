#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, max = 0, min = 101, maxi = 0, mini=0;
	cin >> n;
	int arr[n];
	for (int i =0; i<n; i++)
	{
		cin >> arr[i];
		if ( arr[i] > max)
		{
			maxi = i;
			max = arr[i];
		}
		if ( arr[i] <= min)
		{
			mini = i;
			min = arr[i];
		}
	}
	if ( mini > maxi)
		cout << maxi + (n-1-mini);
	else
		cout << maxi + (n-1-mini) - 1;
	cout << endl;
}