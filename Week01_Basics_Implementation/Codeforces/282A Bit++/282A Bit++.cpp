#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

void JustDoIt() {
    ll n;cin >> n;
    string s;
    ll cnt{ 0 };
    while (n--) {
        cin >> s;
        if (s[1] == '-')
            cnt--;
        else
            cnt++;
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
