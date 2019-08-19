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
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int arr[4*n];
        for(int i=0;i<4*n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+(4*n));
        int area = arr[0]* arr[(4*n)-1];
      //  cout << area << " area\n";
        bool yes = true;
        for(int i=0;i<n;i++)
        {
            int left = i*2;
            int right = (4*n) - (i*2) - 1;
           // cout << arr[left] << " "<< arr[left+1] << " "<< arr[right] << " "<< arr[right-1] <<endl;
            if(arr[left]!=arr[left+1] || arr[right]!=arr[right-1] || arr[left]*1ll*arr[right] != area)
            {
                yes = false;
                break;
            }
        }
        if(yes) cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

