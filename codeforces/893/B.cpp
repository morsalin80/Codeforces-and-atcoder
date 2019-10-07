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
    vector<int>vec;
    for(int i=1;i<=8;i++)
    {
        string s;
        for(int j=0;j<i;j++)
        {
            s.pb('1');
        }
        for(int j=0;j<i-1;j++)
        {
            s.pb('0');
        }
        int x = stoi(s,nullptr,2);
        vec.pb(x);
    }
    sort(vec.begin(),vec.end(),greater<int>());
    int n;
    while(cin>>n)
    {
        for(int i=0;i<vec.size();i++)
        {
            if(n%vec[i]==0)
            {
                cout << vec[i] << "\n";
                break;
            }
        }

    }
    return 0;
}

