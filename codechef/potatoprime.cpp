#include<bits/stdc++.h>
using namespace std;
bool potatoprime(int c)
{
	for(int i = 2 ; i< c; i++)
	    if(c%i == 0)
	      return false;
        return true;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a , b;
		cin >> a >> b;
		int c = 1;
		while(a && b)
		{
			if(potatoprime(a + b + c))
			{
				break;
			}
			c++;
		}
		cout << c << endl;
    }
	return 0;
}
