#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;


int main()
{
    string s;cin >> s;
    vector<int>v;
	int temp;

	for (int i = 0; i < s.length(); i++)
	{
		if (i % 2 != 0)
			continue;
		else
		{
			temp = int(s[i])-'0';
			v.push_back(temp);
		}
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
	{
		if (i == v.size() - 1) {
			cout << v[i];
		}
		else
			cout << v[i] << '+';
	}
}
