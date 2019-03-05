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
    int n;
    while(cin>>n)
    {
        int arr[3];
        int maxc = 0;
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        bool zos = false;
        int maxx = 0;
        int cnt;
        for(int i=0;i<=n/arr[2];i++)
        {
            for(int j=0;j<=n/arr[1];j++)
            {
                for(int k=0;k<=n/arr[0];k++)
                {
                    if((arr[0]*k) + (arr[1]*j) +(arr[2]*i) == n){cnt=(i+j+k);zos = true; break;}
                }
                if(zos) break;
            }
            maxx = max(cnt,maxx);
        }
        cout << maxx <<endl;
    }
    return 0;
}
