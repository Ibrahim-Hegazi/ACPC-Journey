#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll w;
    cin >> w;
    if (w % 2 == 0 && w != 2)
        cout << "YES";
    else
        cout << "NO";
}

