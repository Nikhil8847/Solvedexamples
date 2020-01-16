#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main()
{
	int t;
	cin  >> t;
	while(t--)
	{
		long int n;
		cin >> n;
		int last = n%10, first = 0;
		while(n > 0)
		{
			n /= 10;
			if(n/10 == 0)
			{
				first = n%10;
				break;
			}
		}
		cout << first + last << endl;
	}
	return 0;
}
