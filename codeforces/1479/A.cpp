/// Bismillahir Rahmanir Rahim
/* Mohammad Morsalin
   Dept of ICE, NSTU
*/
#include<bits/stdc++.h>
using namespace std;
const int maxn=100005;
int arr[maxn];
int n;
///solution
void take(int w){
    if(1<=w && w<=n){
        printf("? %d\n",w);
        fflush(stdout);
        scanf("%d",&arr[w]);
    }
}
void solution(){

   //cin>>n;
    scanf("%d",&n);
    int ans;
    arr[0]=n+1;
    arr[n+1]=n+1;
    int left=1, right=n;
    while(left<right){
        int mid=(left+right)/2;
        take(mid);
        take(mid+1);
        if(arr[mid+1]>arr[mid]){
            right=mid;
        }
        else left=mid+1;
    }
    printf("! %d\n",left);
    fflush(stdout);
}
signed main()
{
    #ifndef ONLINE_JUDGE
        freopen ("input.txt","r",stdin);
        freopen ("output.txt","w",stdout);
    #endif
    int t;
    t=1;
    //cin>>t;
    while(t--){
        solution();
    }
    return 0;
}
///Alhamdulillah
 