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
        int arr[n];
        ll sum =0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum += arr[i];
        }
        sort(arr,arr+n);
        int m;
        //cout << sum <<endl;
        cin>>m;
        for(int i=0;i<m;i++)
        {
            int q;
            cin>>q;
            cout << sum-arr[n-q] <<endl;
        }
    }
    return 0;
}

