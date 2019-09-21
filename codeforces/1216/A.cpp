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
        int a=0,b=0,cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a')
                a++;
            if(s[i]=='b')
                b++;
            if(i%2!=0)
            {
                if(a!=b)
                {
                    if(a>b)
                    {
                        s[i] = 'b';
                        a--;
                        b++;
                        cnt++;
                    }
                    if(b>a)
                    {
                        s[i] = 'a';
                        a++;
                        b--;
                        cnt++;
                    }
                }
            }
        }
        cout << cnt << endl;
        cout << s << endl;
    }
    return 0;
}

