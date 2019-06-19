#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n;
    cin>>n;
    while(n--)
    {
        string s,t;
        cin>>s>>t;
        int i=1,j=1;
        if(s.size()>t.size()){cout << "NO\n";continue;}
        bool yes = true;
        if(s[0]!=t[0]){cout << "NO\n";continue;}
        for(;j<t.size();)
        {
            //cout << s[i] << " "<<t[j] <<endl;
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else if(s[i]!=t[j] && t[j]==t[j-1])
            {
                j++;
            }
            else
            {
                yes = false;
                break;
            }
        }
        if(i<s.size()) yes = false;
        if(yes)cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

