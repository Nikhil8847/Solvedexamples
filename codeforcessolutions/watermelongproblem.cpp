// In this video we will solve the watermelong codeforces problem in the simples way
#include<iostream>
using namespace std;
int main()
{
  // we need some variables let's define them
  int a, b;
  // now we need to define the weight. note that weight can't be negative therefore we use usinged
  unsigned int weight;
  cout<< "Enter the value of weight of the watermelon: ";
  cin >> weight;

  if( weight%2 == 0) // if remainder is 0 than
  {
    int half = weight/2;
    if( half%2 == 0)
    {
      a = weight/2; // if half is also divisible by 2 and remainder is 0 we can write it as half
      b =a;
      cout<< "The part that the first get is: "<< a<< endl;
      cout<< "The part that the second get is: "<< b<< endl;
    }
    else
    {
      a = half - 1; // i.e. if half is not totally diviible by 2 than we give first person 1 less than the b
      b = weight -a;
      cout<< "The part that first get is: "<< a<< endl;
      cout<< "The part that second get is: "<< b<< endl;
    }
  }
  else {
    cout<< "NO partition"<<endl;
  }
  return 0;
  // let's run our program
}

