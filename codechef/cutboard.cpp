#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> n;
	vector<int> m;
	int testcase;
	cin>> testcase;
	for(int i = 0; i< testcase; i++)
	{
		int a,b;
		cin>> a >> b;
		if(a >=0 && a<= 8 && b<= 8 && b>= 0)
			n.push_back(a);
		    m.push_back(b);
	}
	for(int i = 0; i<n.size(); i++)
	{
		for(int j = 0; j< m.size(); j++)
		{
			if(n[i]!= 0 && m[i]!= 0)
				cout<< (n[i] -1)* (m[i] - 1)<< endl;
			break;
		}
	}
	return 0;
}
