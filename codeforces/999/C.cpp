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
        string s;
        cin>>s;
        int arr[26];
        ms(arr);
        for(int i=0;i<n;i++)
        {
            int x = s[i]-97;
            arr[x]++;
        }
        int x = k;
        int j = 0;
        while(x>0)
        {
            if(x<=arr[j])
            {
                arr[j]-=x;
                x = 0;
            }
            else
            {
                x-=arr[j];
                arr[j] = 0;
            }
            j++;
        }
        string ss="";
        for(int i=n-1;i>=0;i--)
        {
            int x = s[i] - 97;
            if(arr[x]>0)
            {
                ss.pb(s[i]);
                arr[x]--;
            }
        }
        reverse(ss.begin(),ss.end());
        cout << ss <<endl;
    }
    return 0;
}

