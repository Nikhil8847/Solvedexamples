#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    long long int sum, finalsum = 0;
    cin >> t;
    long int deduction;
    while(t--)
    {
        deduction = 0;
        sum = 0;
        long int A[4] = {0}, B[4] = {0}, C[4] = {0}, D[4] = {0};
        int n;
        cin >> n;
        while(n--)
        {
            char ch;
            int t1;
            cin >> ch >> t1;
            if(ch == 'A')
            {
                if(t1 == 12)
                    ++A[0];
                else if(t1 == 3)
                    ++A[1];
                else if(t1==6)
                    ++A[2];
                else if(t1== 9)
                    ++A[3];
            }
            if(ch == 'B')
            {
                if(t1 == 12)
                    ++B[0];
                else if(t1 == 3)
                    ++B[1];
                else if(t1==6)
                    ++B[2];
                else if(t1== 9)
                    ++B[3];
            }
            if(ch == 'C')
            {
                if(t1 == 12)
                    ++C[0];
                else if(t1 == 3)
                    ++C[1];
                else if(t1==6)
                    ++C[2];
                else if(t1== 9)
                    ++C[3];
            }
            if(ch == 'D')
            {
                if(t1 == 12)
                    ++D[0];
                else if(t1 == 3)
                    ++D[1];
                else if(t1==6)
                    ++D[2];
                else if(t1== 9)
                    ++D[3];
            }
        }
        int j = 100;
        vector<int> x;
        int am = *max_element(A, A+4);
        int bm = *max_element(B, B+4);
        int cm = *max_element(C, C+4);
        int dm = *max_element(D, D+4);
        if(am == 0)
        {
            x.push_back(0);
            deduction+= 100;
        }
        else
            x.push_back(am);
        fill(A, A + 4, 0);
        if(bm == 0)
        {
            x.push_back(0);
            deduction+= 100;
        }
        else
            x.push_back(bm);
        fill(B, B + 4, 0);
        if(cm == 0)
        {
            x.push_back(0);
            deduction+= 100;
        }
        else
            x.push_back(cm);
        fill(C, C + 4, 0);
        if(dm == 0)
        {
            x.push_back(0);
            deduction += 100;
        }
        else
            x.push_back(dm);
        fill(D, D+ 4, 0);
        sort(x.begin(),x.end(), greater<int>());
        for(int i = 0; i< 4; i++)
        {
            sum += x[i]*j;
            j -= 25;
        }
        sum -= deduction;
        cout << sum  << endl;
        finalsum += sum;
    }
    cout << finalsum;
	return 0;
}
