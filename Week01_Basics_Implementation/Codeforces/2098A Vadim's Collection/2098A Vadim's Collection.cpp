#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
using namespace std;
typedef long long ll;

void JustDoIt() {
    string s;cin >> s;
    map<int, int>mp;

    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]-'0']++;
    }
    
    string out_s;
    
    for (int i = 1; i <= 10; i++)
    {
        auto itr = mp.end();
        itr--;
        while (itr->first > (10 - i) && mp.size()>1 && itr->first!=mp.begin()->first) {
            itr--;
        }
        if (itr->first < 10 - i)
            itr++;
        out_s+=char(itr->first)+'0';
        itr->second--;
        if (itr->second == 0)
            mp.erase(itr->first);
        
    }

    cout << out_s << "\n";
}


int main()
{
    ll testcases = 1;
    cin >> testcases;
    while (testcases--) {
        JustDoIt();
    }
}
