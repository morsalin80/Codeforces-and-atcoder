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
    while(cin>>n)
    {
        string s;
        cin>>s;
        int z=0,e=0,r=0,o=0,n=0;
        for(int i=s.size()-1;i>=0;i--)
        {
           // cout << s[i] <<endl;
            if(s[i]=='z')z++;
            if(s[i]=='e')e++;
            if(s[i]=='r') r++;
            if(s[i]=='o') o++;
            if(s[i]=='n') n++;
        }
       // cout << o << " "<< n << " "<< e << " "<< z <<endl;
        int one,zero;
        one = min(o,min(n,e));
       // cout << one << endl;
        o-=one;
        n-=one;
        e-=one;
        //cout << o << " "<< n << " "<< e << " "<< z <<endl;
        zero = min(z,min(e,min(r,o)));
        for(int i=0;i<one;i++)
            cout << "1 ";
        for(int i=0;i<zero;i++)
            cout << "0 ";
        cout << endl;
    }
    return 0;
}

