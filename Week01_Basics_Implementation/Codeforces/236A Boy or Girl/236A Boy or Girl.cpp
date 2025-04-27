#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;
typedef long long ll;

void JustDoIt() {
    string s;cin >> s;
    map<char, int>mp;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }
    if (mp.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}


int main()
{
    ll testcases = 1;
    //cin >> testcases;
    while (testcases--) {
        JustDoIt();
    }
}
