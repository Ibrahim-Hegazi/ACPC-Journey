#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;
typedef long long ll;

void JustDoIt() {
    ll l{ 0 }, b{ 0 };
    cin >> l >> b;
    ll ans{ 0 };
    while (l <= b) {
        l *= 3;
        b *= 2;
        ans++;
    }
    cout << ans;
    return;
}


int main()
{
    ll testcases = 1;
    //cin >> testcases;
    while (testcases--) {
        JustDoIt();
    }
}
