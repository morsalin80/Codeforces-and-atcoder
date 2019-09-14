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
    int n,m;
    while(cin>>n>>m)
    {
        int boys[n];
        ms(boys);
        int girl[m];
        ms(girl);
        int b;
        cin>>b;
        for(int i=0;i<b;i++)
        {
            int p;
            cin>>p;
            boys[p] = 1;
        }
        int g;
        cin>>g;
        for(int i=0;i<g;i++)
        {
            int p;
            cin>>p;
            girl[p] = 1;
        }
        for(int i=0;i<(n+m)*n*m;i++)
        {
           if(boys[i%n]==1 || girl[i%m]==1){
                boys[i%n]=1;

                girl[i%m]=1;
                }
            //cout <<" i >> "<< i << " : " << " i%n : "<< i%n << " "<<boys[i%n] << "  i%m : "<< i%m << " "<< girl[i%m]<<endl;
        }
        bool ok = true;
        //cout << "boys: ";
        for(int i=0;i<n;i++)
        {
          //  cout << boys[i] << " ";
            if(boys[i]==0)
            {
                ok = false;
                break;
            }
        }
        //cout << "girls: ";
        for(int i=0;i<m;i++)
        {
          //  cout << girl[i] << " ";
            if(girl[i]==0)
            {
                ok = false;
                break;
            }
        }
        if(ok) cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
