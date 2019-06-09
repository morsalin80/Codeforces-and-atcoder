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
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        int x = s[i]-'0';
        //cout << x << " i ";
        if(x%8==0)
        {
            cout <<"YES\n" <<x <<endl;
            return 0;
        }
        x*=10;
        for(int j=i+1;j<s.size();j++)
        {
            int y = s[j]-'0';
            //cout << y << " j ";
            y = x+y;
            if(y%8==0)
            {
                cout <<"YES\n" <<y <<endl;
                return 0;
            }
            y*=10;
            for(int k=j+1;k<s.size();k++)
            {
                int z = s[k] - '0';
               // cout << z <<" k"<<endl;
                z = y+z;
                if(z%8==0)
                {
                    cout <<"YES\n" <<z <<endl;
                    return 0;
                }
            }
        }
    }
    cout << "NO\n";
    return 0;
}

