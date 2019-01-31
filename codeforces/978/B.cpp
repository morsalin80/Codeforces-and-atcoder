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
        string s;
        cin>>s;
        int big = 0;
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='x'){
                    int c = 1,j;
                for( j=i+1;j<s.length();j++){
                    if(s[j]==s[i]) c++;
                    else{break;}
                    }
                    if(c>=3) ans+=(c-2);
                    i = j-1;
            }
        }
        //if(ans<3) cout << "0\n";
        cout <<ans<<endl;
    }
    return 0;
}

