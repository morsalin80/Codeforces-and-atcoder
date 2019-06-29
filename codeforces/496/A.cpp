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
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector<int> minimum;
        for(int i=1;i<n-1;i++)
        {
            vector<int>vec;
            for(int j=1;j<n;j++)
            {
                if(j==i){ vec.pb(abs(arr[j-1]-arr[j+1])) ;j++; continue;}
                vec.pb(abs(arr[j]-arr[j-1]));
            }
            sort(vec.begin(),vec.end(),greater<int>());
            minimum.pb(vec[0]);
        }
        sort(minimum.begin(),minimum.end());
        cout << minimum[0]<<endl;
    }
    return 0;
}

