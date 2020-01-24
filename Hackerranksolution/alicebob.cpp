#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int a[3] , b[3];
	int alice= 0 , bob = 0;
	for(int i = 0; i< 3; i++)
	{
		cin >> a[i];
	}
	for(int i = 0; i< 3; i++)
	{
		cin >> b[i];
	}
	for(int i = 0; i< 3; i++)
	{
		if(a[i] > b[i])
		{
			alice += 1;
		}
		else if(a[i] < b[i])
		{
			bob += 1;
		}
		else
		{
			continue;
		}
	}
	cout << alice << " " << bob << endl;
	return 0;
}
