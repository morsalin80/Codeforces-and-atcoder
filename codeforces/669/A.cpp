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
        if(n<3) cout << "1\n";
        else {
            int l = n/3;
            if(l*3<n) cout << (l*2)+1<<endl;
            else cout << l*2 <<endl;
        }
    }
    return 0;
}

