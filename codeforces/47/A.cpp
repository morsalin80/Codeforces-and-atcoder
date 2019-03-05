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
    vector <int> vec;
    for(int i=0;;i++)
    {
        int bb = (i*(i+1))/2;
        if(bb>500) break;
        else vec.pb(bb);
    }
    int n;
    while(cin>>n){
    bool got = false;
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]==n){got = true; break;}
    }
    if(got) cout <<  "YES\n";
    else cout << "NO\n";
    }
    return 0;
}

