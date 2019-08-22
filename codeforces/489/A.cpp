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
    int n;
    while(cin>>n)
    {
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout << n << endl;
        for(int i=0;i<n;i++)
        {
            int k = i;
            for(int j=i;j<n;j++)
            {
                if(arr[k]>arr[j]) k = j;
            }
            cout << i << " " << k << endl;
            swap(arr[i],arr[k]);
        }

    }
    return 0;
}

