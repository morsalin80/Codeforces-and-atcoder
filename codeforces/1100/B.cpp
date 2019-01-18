#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int m,n;
    while(cin>>n>>m){
        int mp[n+5];
        memset(mp,0,sizeof(mp));
        int arr[m];
        bool cn[n+5]={0};
        for(int i=0;i<m;i++)cin>>arr[i];
        bool ans[m] = {0};
        int cnt =0;
        for(int i=0;i<m;i++)
        {
            if(!cn[arr[i]]) {cnt++; cn[arr[i]]= 1;}
            mp[arr[i]]++;
            if(cnt==n){
                ans[i] = 1;
                for(int j=1;j<=n;j++){
                    mp[j]--;
                    if(mp[j]==0){ cnt--; cn[j]=0;}
                }

            }
            cout << ans[i];
        }
        cout <<endl;
    }
}
