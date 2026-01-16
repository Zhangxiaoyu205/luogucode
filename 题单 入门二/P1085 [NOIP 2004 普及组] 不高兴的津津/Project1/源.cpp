#include<iostream>
using namespace std;
int main()
{
	int day[7],day1[7];
	int s, c;
	for(int d=0;d<7;d++)
	{
		cin >> s >> c;
		day[d] = s + c;
		day1[d] = s + c;
	}
	int temp;
	for(int i=0;i<7;i++)
	{
		for (int j = 1;j<7-i;j++)
		{if(day[j-1]>day[j])
		{
			temp = day[j - 1];
			day[j - 1] = day[j];
			day[j] = temp;
		}
		}
	}
	if(day[6]<=8)
	{
		cout << 0;
		return 0;
	}
	for (int p = 0; p < 7; p++)
	{
		if (day1[p] == day[6])
		{
			cout << p + 1;
			return 0;
		}
	}
	
}