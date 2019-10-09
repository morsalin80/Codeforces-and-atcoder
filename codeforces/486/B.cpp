#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
const long long MOD = 1000000007;
template<typename T>inline T Bigmod(T base, T power, T MOD){
    T ret=1;
    while(power)
    {
        if(power & 1)ret=(ret*base)%MOD;
        base=(base*base)%MOD;
        power>>=1;
    }
    return ret;
}

bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}
int main()
{
	IOS
    int m,n;
    while(cin>>m>>n)
    {
       int a[m][n];
       int b[m][n];
       for(int i=0;i<m;i++)
       {
           for(int j=0;j<n;j++)
           {
               a[i][j] = 1;
           }
       }
       for(int i=0;i<m;i++)
       {
           for(int j=0;j<n;j++)
           {
               cin>>b[i][j];
               if(b[i][j]==0)
               {
                   for(int k=0;k<m;k++)
                   {
                       a[k][j] = 0;
                   }
                   for(int t=0;t<n;t++)
                   {
                       a[i][t] = 0;
                   }
               }
           }
       }
       bool ok = true;
       for(int i=0;i<m;i++)
       {
           for(int j=0;j<n;j++)
           {
               if(b[i][j]==0)
               {
                   for(int k=0;k<m;k++)
                   {
                       if(a[k][j]!=0) {
                         ok = false;
                         break;
                       }
                   }
                   for(int t=0;t<n;t++)
                   {
                       if(a[i][t]!=0)
                       {
                           ok = false;
                           break;
                       }
                   }
               }
               else if(b[i][j]==1)
               {
                   bool one=false;
                   for(int k=0;k<m;k++)
                   {
                       if(a[k][j]!=0) {
                         one = true;
                         break;
                       }
                   }
                   for(int t=0;t<n;t++)
                   {
                       if(a[i][t]!=0)
                       {
                           one = true;
                           break;
                       }
                   }
                   if(!one){
                    ok = false;
                    break;
                   }
               }
           }
           if(!ok) break;
       }
       if(!ok) cout << "NO\n";
       else
       {
           cout << "YES\n";
           for(int i=0;i<m;i++)
           {
               for(int j = 0;j<n;j++)
               {
                   cout << a[i][j] << " ";
               }
               cout << endl;
           }
       }
    }
    return 0;
}

