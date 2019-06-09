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
	cin>>n;
    string s;
    cin>>s;
    vector<int>vec;
    for(int i=0;i<n;i++)
    {
        int x = s[i]-'0';
        //cout << x << endl;
        if(x==2|| x==3 || x==5 || x==7)
            vec.pb(x);
        else if(x==4){
            vec.pb(3);
            vec.pb(2);
            vec.pb(2);
        }
        else if(x==6)
        {
            vec.pb(5);
            vec.pb(3);
        }
        else if(x==8)
        {
            vec.pb(7);
            vec.pb(2);
            vec.pb(2);
            vec.pb(2);
        }
        else if(x==9)
        {
            vec.pb(7);
            vec.pb(3);
            vec.pb(3);
            vec.pb(2);
        }
    }
    sort(vec.begin(),vec.end(),greater<int>());
    for(int i=0;i<vec.size();i++)
        cout << vec[i];
    cout << endl;
    return 0;
}

