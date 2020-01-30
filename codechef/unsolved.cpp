#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		std::vector<int> main;
		for(int i =1 ; i <= n; i++)
		{
			int temp;
			cin >> temp;
			main.push_back(temp);
		}
		sort(main.begin(), main.end());
		cout << main[n-1] << endl;
	}
	return 0;
}
