#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;


int main()
{
    int n, k;
    cin >> n >> k;
    vector<int>v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int counter = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] >= v[k - 1] && v[i]>0)
            counter++;
    }

    cout << counter;
}
