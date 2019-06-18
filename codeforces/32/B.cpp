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
    string s;
    while(cin>>s)
    {
        int n = s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.') cout << "0";
            if(s[i]=='-' && i+1<n)
            {
                if(s[i+1]=='.') cout << "1";
                else if(s[i+1]=='-') cout << "2";
                i++;
            }
        }
        cout << endl;
    }
    return 0;
}

