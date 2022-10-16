#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int alpha[26];
		memset(alpha,0,sizeof(alpha));

		for (int i = 0; i < n; ++i)
		{

			int temp[26]={0};
			string str;
			cin>>str;
			int in;
			int aa=str.size();
			for (int j = 0; j < aa; ++j)
			{

				in=str[j]-'a';
				++temp[in];
				
			}
			for (int k = 0; k < 26; ++k)
			{
				if(temp[k]>=1)
				{
					
					alpha[k] +=1;
				}
			}
			
						
		}
		int count=0;
		for (int i = 0; i < 26; ++i)
		{
			if(alpha[i]==n)
				count++;
		}
		cout<<count<<endl;
	}
}