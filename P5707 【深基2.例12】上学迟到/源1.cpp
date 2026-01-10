#include<iostream>
using namespace std;
int main()
{
    int s, v, hh, mm, leavet, t;
    cin >> s >> v;
    if (s % v == 0) { t = s / v + 10; }
    else { t = s / v + 11; }
    if (t >= 1440)
    {
        cout << "08:00" << endl;
        return 0;
    }
    leavet = 1440 - t;
    hh = 8 + leavet / 60;
    if (hh >= 24)
    {
        hh -= 24;
    }
    mm = leavet % 60;
    cout << (hh < 10 ? "0" : "") << hh << ':' << (mm < 10 ? "0" : "") << mm << endl;
}