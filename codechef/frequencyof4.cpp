#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>> T;
	for(int i = 0; i< T; i++){
		int count = 0;
		int a;
		cin >> a; // a is the number in which we have to find the frequency of 4
		while( a> 0)
		{
			int x = a%10;
			if( x == 4)
			{
				count++;
			}
			a = a/10;
		}
		cout << count<< endl;
	}
	return 0;
}
