#include<iostream>
using namespace std;
struct pencil
{
	int num;
	int price;
};
int main()
{
	int n;
	cin >> n;
	pencil pen[3];
	for(int i=0;i<3;i++)
	{
		cin >> pen[i].num;
		cin >> pen[i].price;
	}
	int min=0,psum=0,qsum=0,rsum=0,p,q,r;
	for( p=0;p*pen[0].num<n;p++)
	{ }
	psum += p * pen[0].price;
	min = psum;
	for (q = 0; q * pen[1].num < n; q++)
	{
	}
	qsum += q * pen[1].price;
	if(qsum<min)
	{
		min = qsum;
	}
	for (r = 0; r* pen[2].num < n; r++)
	{
	}
	rsum += r* pen[2].price;
	if (rsum < min)
	{
		min = rsum;
	}
	cout << min << endl;
	return 0;
}