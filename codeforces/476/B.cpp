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
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int a=0,f=0,q=0;
    for(int i=0;i<s1.size();i++)
    {
        a+=(s1[i]=='+'?1:-1);
    }
    for(int i=0;i<s2.size();i++)
    {
        if(s2[i]=='?') q++;
        else f+= (s2[i]=='+'?1:-1);
    }
    int d = a - f;
    double ans = 0;
    if((d+q)%2!=0 || q<abs(d)) ans =0;
    else
    {
        int m= (q+abs(d))/2;
        int comb=1;
        for(int i=0;i<m;i++){
            comb *= q-i;
        }
        for(int i=2;i<=m;i++)
        {
            comb/=i;
        }
        ans = (double)comb/(1<<q) ;
    }
    cout << fixed << setprecision(12) << ans <<endl;
    return 0;
}
