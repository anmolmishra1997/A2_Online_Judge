#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	int count[101];
	for (int i=0; i<n; i++)
		cin >> arr[i];
	for (int i=0; i<101; i++)
		count[i] = 0;
	for (int i=0; i<n; i++)
	{
		count[arr[i]]++;
	}
	int total = 0;
	for (int i=0; i<101; i++)
	{
		if (count[i] > 0)
			total++;
	}
	if (total!=2)
		cout << "NO";
	else
	{
		cout << "YES" << endl;
		for (int i=0; i<101; i++)
		{
			if (count[i] > 0)
				cout << i << " ";
		}
	}
	cout << endl;

}