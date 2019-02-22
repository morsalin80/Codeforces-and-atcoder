#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    string s;
    while(cin>>s)
    {
        int cnt = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='Q')
            {
                for(int j=i+1;j<s.size();j++)
                {
                    if(s[j]=='A'){
                        for(int k = j+1;k<s.size();k++)
                        {
                            if(s[k]=='Q') cnt++;
                        }
                    }
                }
            }
        }
        cout << cnt <<endl;
    }
    return 0;
}

