#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n;
    while(cin>>n)
    {
        string s[n];
        for(int i=0;i<n;i++)
            cin>>s[i];
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(s[i][j]=='C'){
                    for(int k=i+1;k<n;k++)
                    {
                        if(s[k][j]=='C') cnt++;
                    }
                    for(int k = j+1;k<n;k++)
                    {
                        if(s[i][k]=='C') cnt++;
                    }
                }
            }
        }
        cout << cnt <<endl;
    }
    return 0;
}

