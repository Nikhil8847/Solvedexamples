/*constraints given are/
1<= n <= 10^5/
1<=q <= 10^5/
similarly k/
i varies from 0 to value of n/
j varies from 0 to value of k*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int n; // n is the constraint given in the problem
  int q; // similarly a constraint
  cin>> n>>  q;
  vector<int> arr[n]; // defining a dynamic array for the storage of our input values
  for( int i = 0; i< n; i++)
  {
    int k; // declaratio of k
    cin>>k; // constraint for the integer j
    int a; // taking any integer
    for(int j = 0; j<k; j++)
    {
      cin >> a;
      arr[i].push_back(a); // i.e. pushing value at a in the array arr[i] 
    }
  }
  int r,s;
  for(int k = 1;  k<= q; k++) // i.e. k is increasing in the constraint q 
  {
    cin>> r>> s;
    cout<< arr[r][s] << endl;  // it is behaving like multidimensional array where r is row and s in column
  }
  return 0;
  
}
