#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}
int main()
{
	IOS
    int n,m;
    while(cin>>n>>m)
    {
        int arr[n+2];
        arr[n+1] = 0;
        set<int>st;
        int set_size=0;
        int in[n+1];
        in[0] = 0;
        for(int i=1;i<=n;i++)
        {
            cin>>in[i];
        }
        for(int i=n;i>0;i--)
        {
            st.insert(in[i]);
            if(st.size()>set_size)
            {
                arr[i] = arr[i+1]+1;
            }
            else
                arr[i] = arr[i+1];
            set_size = st.size();
        }
        while(m--)
        {
            int x;
            cin>>x;
            cout <<arr[x]<<endl;
        }
    }
    return 0;
}

