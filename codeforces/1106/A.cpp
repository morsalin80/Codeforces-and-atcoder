#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n;
    while(cin>>n)
    {
        string s[n];
        for(int i=0;i<n;i++) cin>>s[i];
        if(n<3) {cout << "0\n";continue;}
        int c=0;
        for(int i=1;i<n-1;i++)
        {
            for(int j=1;j<n-1;j++)
            {
                if(s[i][j]=='X')
                    if(s[i-1][j-1]=='X' &&s[i+1][j-1]=='X'&&s[i-1][j+1]=='X'&&s[i+1][j+1]=='X')c++;
            }
        }
        cout << c <<endl;
    }
    return 0;
}
