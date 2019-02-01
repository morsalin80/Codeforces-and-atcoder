#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n,m;
    while(cin>>n>>m){
        int c = 0;
        int light[n][2*m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<2*m;j++)
            {
                cin>>light[i][j];
                if(j%2==0&&light[i][j]==1) c++;
                else if(j%2!=0 && light[i][j]==1 && light[i][j-1]!=1) c++;
            }
        }
        cout << c <<endl;
    }
    return 0;
}

