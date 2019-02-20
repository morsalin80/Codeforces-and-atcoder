#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
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
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n,greater<int>());
        bool got = false;
        for(int i=0;i<n-2;i++){
            if(arr[i]<arr[i+1]+arr[i+2]){got = true; cout<< "YES\n"; break;}
        }
        if(!got) cout << "NO\n";
    }
    return 0;
}

