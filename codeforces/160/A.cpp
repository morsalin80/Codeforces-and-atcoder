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
        int  arr[n];
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+= arr[i];
        }
        sort(arr,arr+n);
        int an=0;
        int cnt =0;
        for(int i=n-1;i>=0;i--)
            {
                an+= arr[i];
                cnt++;
                if(an>(sum/2)) {cout << cnt <<endl; break;}
            }
    }
    return 0;
}

