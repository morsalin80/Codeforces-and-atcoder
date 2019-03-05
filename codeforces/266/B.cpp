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
    int n,t;
    while(cin>>n>>t){
        string s;
        cin>>s;
        for(int i=0;i<t;i++)
        {
            for(int j=1;j<n;)
            {
                if(s[j]=='G' and s[j-1] == 'B') {
                    s[j] = 'B';
                    s[j-1] = 'G';
                    j+=2;
                }
                else j++;
            }
        }
        cout << s <<endl;
    }
    return 0;
}

