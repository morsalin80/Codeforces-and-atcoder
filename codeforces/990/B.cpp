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
    int n,k;
    while(cin>>n>>k)
    {
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int same=0;
        int cnt = 1;
        for(int i=0;i<n-1;)
        {
            if(arr[i]<arr[i+1])
            {
                if(arr[i]+k>= arr[i+1])
                {
                    i++;
                    same=0;
                    continue;
                }
                else{
                    i++;
                    cnt+=same+1;
                    same = 0;
                    continue;
                }
            }
            if(arr[i]==arr[i+1])
            {
                same++;
                i++;
            }
        }
        if(same!=0)
            cnt+=same;
        cout <<cnt<<endl;
    }
    return 0;
}

