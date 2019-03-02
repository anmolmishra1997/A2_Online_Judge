#include <bits/stdc++.h>
using namespace std;

void updatescore(long long int a, long long int b, long long int& scorea, long long int& scoreb)
{
	if (a==b)
		return;
	else if (a==1 && b==2)
		scoreb += 1;
	else if (a==1 && b==3)
		scorea += 1;
	else if (a==2 && b==1)
		scorea += 1;
	else if (a==2 && b==3)
		scoreb += 1;
	else if (a==3 && b==1)
		scoreb += 1;
	else if (a==3 && b==2)
		scorea += 1;
}
void update(long long int& i, long long int& j, long long int newi, long long int newj)
{
	i = newi;
	j = newj;
}
int main()
{
	long long int k, a, b;
	long long int A[3][3];
	long long int B[3][3];
	long long int C[3][3];
	cin >> k >> a >> b;
	for (long long int i=0; i<3; i++)
		for (long long int j=0; j<3; j++)
		{
			cin >> A[i][j];
			C[i][j] = 0;
		}
	for (long long int i=0; i<3; i++)
		for (long long int j=0; j<3; j++)
			cin >> B[i][j];

	long long int initial = 0;
	long long int i = a, j = b;
	long long int scorea = 0, scoreb = 0;
	long long int maxiter = k;
	while ( C[i - 1][j - 1] == 0 && maxiter > 0)
	{
		initial++;
		updatescore(i,j,scorea,scoreb);
		C[i-1][j-1] = 1;
		update(i,j,A[i-1][j-1], B[i-1][j-1]);
		maxiter--;
	}
	long long int loopa = i, loopb = j;
	long long int loopscorea = 0, loopscoreb = 0;
	long long int cyclesize = 0;
	do
	{
		cyclesize++;
		updatescore(i,j,loopscorea,loopscoreb);
		update(i,j,A[i-1][j-1], B[i-1][j-1]);
	}
	while ( i != loopa || j != loopb);

	long long int cycles = (k - initial)/cyclesize;
	long long int terminal = (k - initial)%cyclesize;

	scorea += cycles * loopscorea;
	scoreb += cycles * loopscoreb;

	for (long long int m=0; m<terminal && maxiter>0; m++)
	{
		updatescore(i,j,scorea,scoreb);
		update(i,j,A[i-1][j-1], B[i-1][j-1]);
		maxiter--;
	}
	cout << scorea << " " << scoreb << endl;
}