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
        int arr[n];
        ll odd=0,even=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(i!=0)
            {
                if(i%2==0) even+=arr[i];
                else odd+=arr[i];
            }
        }
        int cnt=0;
        if(even==odd)cnt++;
        for(int i=1;i<n;i++)
        {
            if(i%2==0){
             even-=arr[i];
             even+=arr[i-1];
           }
           else{
             odd-=arr[i];
             odd+=arr[i-1];
           }
           if(odd==even) cnt++;
        }
        cout << cnt <<endl;
    }
    return 0;
}

