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
        stack<char> st;
        for(int i=0;i<n;i++)
            st.push(s[i]);
        int c=0,o=0;
        while(!st.empty()){
            if(st.top()=='(')
            {
                if(c>0) c--;
                else
                    o++;
            }
            if(st.top()==')')
            {
                c++;
            }
            st.pop();
        }
        if(c>1 || o>1)
        {
            cout << "No\n";
        }
        else if(c==1 && o==1)
        {
            cout << "Yes\n";
        }
        else if(c==0 && o==0)
        {
            cout << "Yes\n";
        }
        else
            cout << "No\n";
    }
    return 0;
}

