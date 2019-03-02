#include <bits/stdc++.h>
using namespace std;

bool palindrome(long long int n)
{
	long long int temp = n;
	long long int num2 = 0;
	while (n!=0)
	{
		long long int d = n%10;
		num2 = num2*10 + d;
		n = n/10;
	}
	if (temp == num2)
		return true;
	else 
		return false;
}
int main()
{
	long long int n;
	cin >> n;
	
	while(n%10 == 0)
		n = n/10;
	if ( palindrome(n))
		cout << "YES";
	else
		cout << "NO";
	cout << endl;
}