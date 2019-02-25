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
    int n;
    while(cin>>n)
    {
        int x = ceil((double)n/2);
        int zero=0,pos =0,neg = 0;
        int in;
        for(int i=0;i<n;i++)
            {
                cin>>in;
                if(in>0) pos++;
                else if(in<0) neg++;
                else zero++;
            }
        if(pos>=x) cout << "1" <<endl;
        else if(neg>=x) cout << "-1" <<endl;

        else cout << "0\n";
    }
    return 0;
}

