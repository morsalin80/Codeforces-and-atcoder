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
    string str;
    while(cin>>str)
    {
        int B=0,u=0,b=0,l=0,a=0,r=0,s=0,i=0;
        for(i=0;i<str.size();i++)
        {
            if(str[i]=='B')B++;
            if(str[i]=='u') u++;
            if(str[i]=='b') b++;
            if(str[i]=='l') l++;
            if(str[i]=='a') a++;
            if(str[i]=='r') r++;
            if(str[i]=='s') s++;
        }
        //cout << B << " "<< u << " "<<l << " "<< b << " "<< a << " "<< s << " "<< r <<endl;
        u/=2;a/=2;
        cout << min(B,min(u,min(l,min(b,min(a,min(s,r)))))) <<endl;
    }
    return 0;
}

