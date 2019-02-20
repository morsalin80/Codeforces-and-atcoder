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
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        bool chk = true;
        for(int i=1;i<n;i++)
        {
            if(arr[i]%arr[0]!=0) chk = false;
        }
        if(chk) cout << arr[0] <<endl;
        else cout <<  "-1\n";
    }
    return 0;
}

