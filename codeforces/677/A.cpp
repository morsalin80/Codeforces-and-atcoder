#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n,h;
    while(cin>>n>>h){
        int w=0,hh;
        for(int i=0;i<n;i++){
            cin>>hh;
            if(hh>h) w++;
            w++;}
        cout << w <<endl;
    }
    return 0;
}

