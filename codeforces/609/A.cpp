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
    int n,m;
    while(cin>>n>>m)
    {
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n,greater<int>());
        int k;
        int sum = 0;
        for(k=0;k<n;k++)
        {
            sum+= arr[k];
            if(sum>=m) {cout << k+1 <<endl; break;}
        }
    }
    return 0;
}

