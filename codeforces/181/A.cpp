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
        int x[3],y[3];
        bool x1[3]={0},y1[3]={0};
        int in = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                char c;
                cin>>c;
                if(c=='*') {x[in]=i;y[in]=j;in++;}
            }
        }
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(i==j) continue;
                if(x[i]==x[j]){
                    x1[i] = 1;
                    x1[j] = 1;
                }
                if(y[i]==y[j])
                {
                    y1[j] = 1;
                    y1[i] = 1;
                }
            }
        }
        for(int i=0;i<3;i++)
        {
            if(x1[i]!=1) cout << x[i]+1 << " ";
           // if(y1[i]!=1) cout << y[i]+1 << " ";
        }
        for(int i=0;i<3;i++)
        {
            //if(x1[i]!=1) cout << x[i]+1 << " ";
            if(y1[i]!=1) cout << y[i]+1 << " ";
        }
        cout << endl;
    }
    return 0;
}

