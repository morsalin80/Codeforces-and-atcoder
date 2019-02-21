#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n,k;
    while(cin>>n>>k)
    {
        int got;
        vector<int>vec;
        for(int i=2;i*i<=n;i++)
            {
                while(n%i==0){
                    vec.pb(i);
                    n/=i;
                }
            }
        if(n>1) vec.pb(n);
        if(vec.size()<k) cout << "-1\n";
        else{
        for(int i=0;i<k-1;i++) cout << vec[i] << " ";
        int ans=1;
        for(int i=k-1;i<vec.size();i++)
            ans*=vec[i];
        cout << ans <<endl;
        }
    }
    return 0;
}
