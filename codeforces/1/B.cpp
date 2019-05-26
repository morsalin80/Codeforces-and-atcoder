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
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int row=0,col=0;
        int base=0;
        int lastC;
        bool gotc=0;
        if(s[0]=='R' && s[1]<='9' && s[1]>='0'){
                for(int i=2;i<s.size();i++)
                {
                    if(s[i]=='C') {gotc=true;break;}
                }
        }
         if(gotc){   for(int i=s.size()-1;i>=0;i--)
            {
                if(s[i]=='C') {lastC=i;break;}
               row+=(s[i]-48)*ceil(pow(10.0,(double)base));
               base++;
            }
            base =0;
            for(int i=lastC-1;i>=0;i--)
            {
                if(s[i]=='R'){break;}
                col+= (s[i]-48)*ceil(pow(10.0,(double)base));
                base++;
            }
            string on;
            while(row>0)
            {
                int g = row%26;
                if(g==0) g = 26;
                char c = 64+g;
               //cout << g <<endl;
                on.pb(c);
                row/=26;
                if(g==26) row--;
            }
           for(int i=on.size()-1;i>=0;i--)cout << on[i];
           cout << col<<endl;
        }
        else{
            cout << 'R';
            for(int i=s.size()-1;i>=0;i--)
            {
                if(s[i]>'9') {lastC=i;break;}
               row+=(s[i]-48)*ceil(pow(10.0,(double)base));
               base++;
            }
            cout << row;
            base =0;
            for(int i=lastC;i>=0;i--)
            {
                int gal;
                int g = s[i]-64;
                gal= (g*ceil(pow(26.0,(double)base)));
                col += gal;
                base++;
                //cout << "col: "<< col <<endl;
            }
            cout << 'C';
            cout << col <<endl;
        }
    }
    return 0;
}
