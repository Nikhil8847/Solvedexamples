#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int temp;
		cin >> temp;
		int alice[temp];
		int bob[temp];
		int alicesum = 0;
		int bobsum = 0;
		for(int i = 0; i< temp; i++)
		{
			cin >> alice[i];
		}
		for(int i = 0; i< temp; i++)
		{
			cin >> bob[i];
		}
		int maxinalice = *max_element(alice, alice + temp);
		int maxinbob = *max_element(bob , bob + temp);
		for(int i = 0; i< temp; i++)
		{
			if(alice[i] == maxinalice)
			{
				alice[i] = 0;
			}
		}
		for(int i = 0; i< temp; i++)
		{
			if(bob[i] == maxinbob)
			{
				bob[i] = 0;
			}
		}
		for(int i = 0; i < temp; i++)
		{
			alicesum += alice[i];
			bobsum += bob[i];
		}
		if(alicesum < bobsum)
		{
			cout << "Alice" << endl;
		}
		else if(alicesum > bobsum)
		{
			cout << "Bob" << endl;
		}
		else if(alicesum == bobsum)
		{
			cout << "Draw" << endl;
		}
	}
	return 0;
}
