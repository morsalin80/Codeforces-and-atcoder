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
        int con=0;
        vector <int> vc;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B'){ con++;}
            else {
                if(con!=0) vc.pb(con);
                con=0;
            }
            if(i==n-1 && con!=0) vc.pb(con);
        }
        cout << vc.size()<<endl;
        for(int i=0;i<vc.size();i++) cout << vc[i] << " ";
        cout << endl;
    }
    return 0;
}

