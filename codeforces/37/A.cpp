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
    int arr[1002];
    ms(arr);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int l;
        cin>>l;
        arr[l]++;
    }
    sort(arr,arr+1002,greater<int>());
    cout << arr[0] <<" ";
    int cnt = 0;
    for(int i=0;i<1002;i++)
    {
        if(arr[i]==0) break;
        cnt++;
    }
    cout << cnt <<endl;
    return 0;
}

