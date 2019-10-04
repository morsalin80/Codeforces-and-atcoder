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
        string temp;
        int onecnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]!='1') temp.pb(s[i]);
            else
                onecnt++;
        }
        int start = 0;
        for(;start<temp.size();start++)
        {
            if(temp[start]=='2') break;
            cout << temp[start];
        }
        for(int i=0;i<onecnt;i++)
            cout << '1';
        for(;start<temp.size();start++)
        {
            cout << temp[start];
        }
        cout << endl;

    }
    return 0;
}

