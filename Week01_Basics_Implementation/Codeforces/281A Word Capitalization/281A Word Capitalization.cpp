#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;
typedef long long ll;

void JustDoIt() {
    string s;cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (i == 0)
            cout << char(toupper(s[0]));
        else
            cout << s[i];
    }
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
