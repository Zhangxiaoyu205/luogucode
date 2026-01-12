#include<iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	int flag1 = 0, flag2 = 0;
	if(x%2==0)
	{
		flag1 = 1;
	}
	if (x>4&&x<=12)
	{
		flag2 = 1;
	}
	cout << (flag1 == 1 && flag2 == 1 ? 1 : 0);
	cout << (flag1 == 1 || flag2 == 1 ? 1 : 0);
	cout << (flag1 ^flag2 ==1 ? 1 : 0);
	cout << (flag1 == 0 && flag2 == 0 ? 1 : 0);
}