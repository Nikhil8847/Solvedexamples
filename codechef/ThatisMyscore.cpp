using namespace std;
int main()
{
	int T, i, j, c= 0, b= 0;
	cin >> T;
	if(T<= 10 && T>= 1)
	{
		for(i = 0; i< T; i++)
		{
			int n;
			cin >> n;
			int p[n], s[n];
			if( n >= 1 && n <= 1000)
			{
				for(j = 0; j < n; j++)
				{
					cin >> p[i] >> s[i];
				}
				for(j = i+1; j< n; j++)
				{
					if(p[i] < 9)
					{
						if(p[i] == p[j])
						{
							c += max(s[i], s[j]);
						}
						else{
							b += s[i];
						}
						break;
					}
				}
			}
		}
	}
	cout<< c + b << endl;
	return 0;
}
							
