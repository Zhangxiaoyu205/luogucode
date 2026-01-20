#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int sum=0,num[10],x=0;
	string a;
	cin >> a;
	for(int i=0;i<13;i++)
	{
		if (a[i] == '-')continue;
		if (a[i] == 'X')num[x++] = 10;
		else	num[x++] = a[i] - '0';

	}
	for(int j=0;j<9;j++)
	{
		sum += num[j] * (j + 1);
	}
	int n=sum%11;
	if(num[9]==n)
	{
		cout << "Right";
		return 0;
	}
	else
	{
		for (int j = 0; j < 9; j++)
		{
			if (j == 1 || j == 4 )
			{
				cout<<'-';
			}
			cout <<num[j];
			
		}
		if (n != 10)cout << '-' << n;
		else cout << "-X";
		return 0;
	}
}