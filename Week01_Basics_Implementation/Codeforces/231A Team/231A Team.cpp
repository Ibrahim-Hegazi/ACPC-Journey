#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

void JustDoIt() {
    ll n;cin >> n;
    ll cnt = 0;
    while (n--) {
        ll tempcnt{ 0 }, a{ 0 }, b{ 0 }, c{ 0 };
        cin >> a >> b >> c;
        if (a == 1)tempcnt++;
        if (b == 1)tempcnt++;
        if (c == 1)tempcnt++;
        if (tempcnt >= 2)cnt++;
    }
    cout << cnt;
}


int main()
{
    ll testcases = 1;
    //cin >> testcases;
    while (testcases--) {
        JustDoIt();
    }
}
