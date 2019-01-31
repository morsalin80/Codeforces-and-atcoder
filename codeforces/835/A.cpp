#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
	int s,v1,v2,t1,t2;
	while(cin>>s>>v1>>v2>>t1>>t2)
    {
        int one,two;
        one = (s*v1)+(t1*2);
        two = (s*v2)+(t2*2);
        if(one<two) cout << "First\n";
        else if(one>two) cout << "Second\n";
        else cout << "Friendship\n";
    }

    return 0;
}

