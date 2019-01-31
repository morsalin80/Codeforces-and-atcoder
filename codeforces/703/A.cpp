#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n;
    while(cin>>n)
    {
        int m[n],c[n];
        int mi=0,ci=0;
        for(int i=0;i<n;i++)
        {
            cin>>m[i]>>c[i];
            if(m[i]>c[i]) mi++;
            else if(m[i]<c[i])ci++;
        }
        if(mi>ci) cout << "Mishka\n";
        else if(mi<ci) cout << "Chris\n";
        else cout << "Friendship is magic!^^\n";
    }
    return 0;
}
