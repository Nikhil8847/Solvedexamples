#include<bits/stdc++.h>
using namespace std;
int main()
{

	int n;
	cin >>n;
	int scores[n];
	vector<int> highest;
	vector<int> lowest;
	int cnt1 = 0, cnt2 =0;
	for( int i = 0; i< n; i++)
	{
		cin>> scores[i];
	}
	for( int i = 0; i< n; i++)
	{
		if( i == 0)
		{
			highest.push_back(scores[i]);
			lowest.push_back(scores[i]);
		}
		else{
			int a = max(highest[i-1] , scores[i]);
			highest.push_back(a);
			int b = min(lowest[i-1] , scores[i]);
		    lowest.push_back(b);
		}
	}
	for( int i = 1; i<n;i++){
		if(highest[i] > highest[i-1])
		{
			cnt1++;
		}
		else if(lowest[i] < lowest[i-1])
		{
			cnt2++;
		}
	}
	cout<< cnt1 << " " << cnt2 << endl;
}
