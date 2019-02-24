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
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        bool tri = false;
        for(int i=0;i<n;i++)
        {
        //    cout << arr[arr[arr[i]-1]-1] <<endl;
            if(arr[arr[arr[i]-1]-1]==i+1) {tri = true; break;}
        }
        if(tri) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

