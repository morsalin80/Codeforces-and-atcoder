#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n;
    while(cin>>n)
    {
        int tab[n][n];
        for(int i=0;i<n;i++){
            tab[i][0]=1;
            tab[0][i]=1;
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<n;j++)
            {
                tab[i][j] = tab[i-1][j]+tab[i][j-1];
            }
        }
        cout << tab[n-1][n-1] <<endl;
    }
    return 0;
}

