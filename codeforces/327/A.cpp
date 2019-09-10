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
        f0(n) cin>>arr[i];
        int maxx = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                int one = 0;
                for(int k=0;k<n;k++)
                {
                    if(k>=i && k<=j)
                        one+= 1-arr[k];
                    else
                        one+=arr[k];
                }
                maxx = max(one,maxx);
            }
        }
        cout << maxx << endl;
    }
    return 0;
}

