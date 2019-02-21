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
    int n,c;
    while(cin>>n>>c)
    {
        int cnt = 1;
        int arr[n];
        cin>>arr[0];
        for(int i=1;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]- arr[i-1]>c) cnt=1;
            else cnt++;
        }
        cout << cnt <<endl;
    }
    return 0;
}

