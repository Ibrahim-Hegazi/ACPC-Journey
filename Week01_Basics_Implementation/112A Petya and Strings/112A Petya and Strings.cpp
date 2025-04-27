#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;
typedef long long ll;

void JustDoIt() {
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); i++)
    {
        if (tolower(s1[i]) > tolower(s2[i])) {
            cout << 1;
            return;
        }
        else if (tolower(s1[i]) < tolower(s2[i])) {
            cout << -1;
            return;
        }
    }
    cout << 0;
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
