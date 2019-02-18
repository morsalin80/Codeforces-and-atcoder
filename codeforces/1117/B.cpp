#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n,m,k;
    while(cin>>n>>m>>k)
    {
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll choto=(m/(k+1));
        //cout << choto << endl;

        ll boro = m-choto;
        //cout << boro <<endl;
        ll ans = (boro*arr[n-1])+ (choto*arr[n-2]);
        cout << ans <<endl;
    }
    return 0;
}

