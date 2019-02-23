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
    int x,y,z,t1,t2,t3;
    while(cin>>x>>y>>z>>t1>>t2>>t3){
        int stair = t1 * abs(y-x);
        int ele = (abs(x-z)*t2)+ (abs(y-x)*t2) + 3*t3;
       // cout << stair << " "<< ele <<endl;
        if(ele<=stair) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

