#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int l=0,r=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]-arr[l]<=5) ans=max(ans,i-l+1);
            else l++;
        }
        cout << ans << endl;
    }
}
