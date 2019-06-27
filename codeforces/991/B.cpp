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
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum += arr[i];
        }
        int cnt = 0;
        double x = (double)sum/(double)n;
        if(x>=4.5)
        {
            cout << "0\n";
            continue;
        }
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            sum+= (5-arr[i]);
            x = (double)sum/(double)n;
            if(x>=4.5)
            {
                cout << i+1 <<endl;
                break;
            }
        }
    }
    return 0;
}

