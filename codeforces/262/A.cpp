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
    int n,k;
    while(cin>>n>>k)
    {
        string s;
        int luc = 0;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            int cnt=0;
            for(int j=0;j<s.size();j++)
            {
                if(s[j]=='4'||s[j]=='7') cnt++;
            }
            if(cnt<=k) luc++;
        }
        cout << luc <<endl;
    }
    return 0;
}

