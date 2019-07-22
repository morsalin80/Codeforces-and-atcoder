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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        bool got = false;
        for(int i=n-2;i>0;i--)
        {
            if(arr[i]>i){
                got = true;
                cout << i <<endl;
                break;
            }
            else if(arr[i]!=1)
            {
                got = true;
                cout << arr[i]-1 << endl;
                break;
            }
        }
        if(!got) cout <<0<<endl;
    }
    return 0;
}

