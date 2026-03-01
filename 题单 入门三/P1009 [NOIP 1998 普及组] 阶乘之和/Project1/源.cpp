#include<iostream>
#include<cstring>
using namespace std;
int s1[100], s2[100], s3[100], s4[100], len1 = 1, len2 = 1, len3 = 1, m = 0;
int main()
{

	int lenp = 1;
	int n;
	cin >> n;
	s2[0] = 1;
	for (int i = 1; i <= n; i++)
	{
		len1 = 0;
		int p = i;
		while (p > 0)
		{
			s1[len1++] = p % 10;
			p /= 10;
		}
		for (int j = 0; j < len1; j++)
			for (int k = 0; k <= len2; k++)
			{
				s3[j + k] += s1[j] * s2[k];
			}
		for (int j = 0; j < len3; j++)
		{
			if (s3[j] > 9) {
				s3[j + 1] += s3[j] / 10;
				s3[j] %= 10;
			}
		}
		if (s3[len3])len3++;
		lenp = len2;
		len2 = len3;
		m = max(m, len3);
		for (int j = len3 - 1; j >= 0; j--)
		{
			s2[j] = s3[j];
		}
		len3 = len1 + lenp;
		memset(s3, 0, sizeof(s3));
		for (int j = 0; j < m; j++)
		{
			s4[j] += s2[j];
			if (s4[j] > 9)
			{
				s4[j + 1] += s4[j] / 10;
				s4[j] %= 10;
			}
		}
	}
	while (!s4[m] && m > 0)m--;
	for (int i = m; i >= 0; i--)
		cout << s4[i];
	return 0;

}