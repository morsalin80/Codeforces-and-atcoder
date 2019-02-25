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
        vector < pair<int,int> > vec;
        int in;
        for(int i=0;i<2*n;i++){
            cin>>in;
            vec.pb(mp(in,i+1));
        }
        sort(vec.begin(),vec.end());
        ll sum= (vec[0].second - 1) + (vec[1].second -1);
        for(int i=2;i<2*n;i+=2)
        {
            sum+= min((abs(vec[i].second - vec[i-2].second) + abs(vec[i+1].second - vec[i-1].second)),(abs(vec[i].second- vec[i-1].second) + abs(vec[i+1].second - vec[i-2].second)));
        }
        cout << sum <<endl;
    }
    return 0;
}
