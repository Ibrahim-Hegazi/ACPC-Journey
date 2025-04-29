#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;
typedef long long ll;

void JustDoIt() {
    ll x = 0;
    cin >> x;
    cout << x / 5 + (x % 5 != 0 ? 1 : 0);
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
