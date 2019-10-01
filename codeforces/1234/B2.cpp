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
    int n,k;
    while(cin>>n>>k)
    {
        queue<ll>st;
        map<ll,int>ma;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(ma[x]==0){
                if(st.size()==k)
                {
                    int w = st.front();
                    ma[w] = 0;
                    st.pop();
                }
                st.push(x);ma[x] = 1;}
        }
        vector<int>vec;
        while(!st.empty()){
           // cout << st.front() << " "<<endl;
            vec.pb(st.front());
            st.pop();
        }
        cout << vec.size()<<endl;
        for(int i=vec.size()-1;i>=0;i--)
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
