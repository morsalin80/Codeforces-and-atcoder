#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}
int main()
{
	IOS
    string s;
    while(cin>>s)
    {
        int n = s.size();
        int open = 0,close=0;
        int cnt = 0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='(')
            {
                if(close>0)
                {
                    close--;
                }
                else
                    cnt++;
            }
            else if(s[i]==')'){
                close++;
            }
        }
        cout << n-(cnt + close) << endl;
    }
    return 0;
}

