#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>> T;
	int B;
	int a;
	for(int i = 0; i< T; i++)
	{
		cin >> B;
		
	a =(B/2 * ((B-1)/2))/2;
	if(B <= 3){
		a = 0;
	}
	else{
		    if(B %2 != 0){
				B -= 1;
			a =(B/2 * ((B-1)/2))/2;
		}
		else{
			a =(B/2 * ((B-1)/2))/2;
		}
	  }
	  cout<< a << endl;
	}
	return 0;
}

