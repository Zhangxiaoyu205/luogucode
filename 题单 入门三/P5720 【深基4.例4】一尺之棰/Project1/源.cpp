#include<iostream>
using namespace std;
int main()
{
	int a,i=1;
	cin >> a;
	while(a!=0)
	{
		
		if(a==1)
		{
			cout << i;
			break;
		}
		a /= 2;
		i++;
	}
	return 0;
}