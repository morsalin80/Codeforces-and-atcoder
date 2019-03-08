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
    int n,m;
    while(cin>>n>>m)
    {
        string s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                char c;
                if(i%2==0) { if(j%2==0) c = 'W'; else c = 'B'; }
                else {if(j%2==0) c='B'; else c = 'W';}
                if(s[i][j]=='.') cout << c;
                else cout << '-';
            }
            cout <<endl;
        }
    }
    return 0;
}

