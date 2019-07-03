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
        ll cnt = 0;
        for(int i=0;i<s.size();i++){
            int man = s[i]-'0';
            if(man%4==0)
                cnt++;
            if(i>0)
            {
                man = (s[i-1]-'0')*10 + (s[i]-'0');
                if(man%4==0)
                    cnt+=i;
            }
        }
        cout << cnt<<endl;
    }
    return 0;
}

