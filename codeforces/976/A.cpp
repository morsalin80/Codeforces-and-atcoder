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
        string s;
        cin>>s;
        int one=0,zero=0;
        for(int i=0;i<n;i++)
            {
                if(s[i]=='1') one++;
                else zero++;
            }
       // cout << one << " "<< zero <<endl;
        if(one>0) cout << "1";
        if(zero>0) for(int i=0;i<zero;i++) cout <<"0";
        cout << endl;
    }
    return 0;
}

