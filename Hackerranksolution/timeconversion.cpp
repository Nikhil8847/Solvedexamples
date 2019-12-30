#include<bits/stdc++.h>
using namespace std;
int main()
{
	int h, m, s;
	char ch, AorP;
	cin>> h>> ch>> m>> ch>> s>> AorP >> ch;
	h = (AorP == 'A') ? (h== 12 ? h : 12) : (h== 12? 0 : h+12);
	cout<< setw(2) << setfill('0') << h<< ":" << setw(2) << setfill('0') << m<< ":" << setw(2) << setfill('0') << s<< endl;
	 return 0;
 }
