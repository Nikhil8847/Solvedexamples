#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t, n;
    cin >> t;
    long int sum;
    while(t--)
    {
        sum = 0;
        long int n, k;
        cin >> n >> k;
        long int arr[n], main[n] = {0};
        long int res = 0;
        for(long int i =0; i< n; i++)
        {
            cin >> arr[i];
        }
        for(long int i = 0 ; i < n ; i++)
        {
            if(k%arr[i] != 0)
                res++;
        }
        if(res == 0)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << " ";
            long int temp = k;
            while(temp >= 0)
            {
                for(long int i = 0; i< n; i++)
                {
                    if(k%arr[i] != 0)
                    {
                        temp-= arr[i];
                        main[i]++;
                    }
                }
            }
            for(long int i =0; i< n; i++)
            {
                cout << main[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
