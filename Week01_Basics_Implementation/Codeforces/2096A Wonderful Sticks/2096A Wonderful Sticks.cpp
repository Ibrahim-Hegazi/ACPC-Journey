#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;
typedef long long ll;

void JustDoIt() {
    ll n;cin >> n;
    string s;cin >> s;
    ll big_cnt = n;
    ll small_cnt = 1;
    vector<ll>ans(n);
    bool start_right = false; // This variable is responsible for adding the last number
    // Finishing the biggest numbers first 
    for (int i = s.length()-1; i >-1; i--)
    {
        if (i == s.length() - 1 && s[i] == '<')
            start_right = true;
        if (s[i] == '>') {
            ans[i] = big_cnt;
            big_cnt--;
        }
        else {
            ans[i] = small_cnt;
            small_cnt++;
        }
    }

    cout << big_cnt << " ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << ans[i]<<" ";
    }
    
    cout << "\n";
    return;
}


int main()
{
    ll testcases = 1;
    cin >> testcases;
    while (testcases--) {
        JustDoIt();
    }
}
