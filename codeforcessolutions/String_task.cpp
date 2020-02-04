#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<char> result;
    for(int i =0; i< s.length(); i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i' || s[i] == 'o')
            continue;
        else if(s[i] == 'A' || s[i] == 'E' || s[i] == 'U' || s[i] == 'I' || s[i] == 'O')
             continue;
        else
            result.push_back(tolower(s[i]));
    }
    for(unsigned int i = 0; i< result.size(); i++)
        cout << '.'<<result[i];
    return 0;
}
