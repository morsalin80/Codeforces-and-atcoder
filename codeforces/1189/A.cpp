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
    while(cin>>n)
    {
        string s;
        cin>>s;
        int one = 0,zero = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')one++;
            else zero++;
        }
        if(one!=zero)
        {
            cout << "1\n";
            cout << s <<endl;
        }
        else
        {
            cout << "2\n";
            cout << s[0]<< " ";
            for(int i=1;i<n;i++)
                cout << s[i];
            cout << endl;
        }
    }
    return 0;
}

