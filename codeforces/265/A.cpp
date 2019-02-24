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
    string s,t;
    while(cin>>s>>t)
    {
        int i;
        for(i=0;i<s.size();)
        {
            for(int j = 0;j<t.size();j++)
            {
                if(s[i]==t[j]) i++;
            }
            break;
        }
        cout << i+1 <<endl;
    }
    return 0;
}

