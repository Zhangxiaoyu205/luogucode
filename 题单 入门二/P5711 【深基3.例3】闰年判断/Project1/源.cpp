#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int flag=0;
	if((n%4==0&&n%100!=0)||n%400==0)
	{
		flag = 1;
	}
	cout << flag;
	return 0;
}