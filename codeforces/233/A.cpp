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
        if(n%2==0)
        {
            for(int i=1;i<=n;i++)
            {
                if(i%2==0) cout << i-1 << " ";
                else cout << i+1 <<" ";
            }
            cout << endl;
        }
        else
            cout << "-1\n";
    }
    return 0;
}

