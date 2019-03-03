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
        int arr[n][n];
        memset(arr,0,sizeof(arr[0][0])*n*n);
        for(int i=0;i<n;i++)for(int j=0;j<n;j++) if(i==j) arr[i][j]=k;
        for(int i=0;i<n;i++){for(int j=0;j<n;j++){ cout << arr[i][j] <<" ";} cout << endl;}
    }
    return 0;
}

