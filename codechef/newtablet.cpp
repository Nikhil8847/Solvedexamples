#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t, n, budget, res;
	cin >> t;
	while(t--)
	{
		res = 0;
		vector<int> eligible = {};
		int w, h, price;
		cin >> n >> budget;
		for(int i = 0; i < n ; i++)
		{
			cin >> w >> h >> price;
			int temp = w*h;
			if(price <= budget)
			{
				eligible.push_back(temp);
			}
			
		}
        if(eligible.empty())
	    {
		cout << "no tablet" << endl;
		continue;
	    }
	    else
	    {
			res = *max_element(eligible.begin(), eligible.end());
		}
	     cout << res << endl;
	}
   return 0;
}
