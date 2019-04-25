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
    int k;
    int arr[12];
    while(cin>>k)
    {
        int sum = 0;
        for(int i=0;i<12;i++){
            cin>>arr[i];
            sum+= arr[i];
        }
        if(sum<k) {cout << "-1\n";continue;}
        int take=0;
        sort(arr,arr+12);
        int cnt=0;
        for(int i=11;i>=0;i--)
        {
            if(take>=k){break;}
            take+=arr[i];
            cnt++;
        }
        cout << cnt <<endl;
    }
    return 0;
}

