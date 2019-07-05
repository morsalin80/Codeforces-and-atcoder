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
    int n = s.size();
    int mini = -1;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            bool batman = true;
            int cnt = 0;
            if(i==0 && s[1]=='0' && j>=2)
            {
                batman = false;
                for(int bal = i+1;bal<n;bal++)
                {
                    if(bal==j) continue;
                    if(s[bal]=='0')
                        cnt++;
                }
            }
            else if(i==0 && j>=1 && s[2]=='0')
            {
                batman = false;
                for(int chal = i+1;chal<n;chal++)
                {
                    if(chal==j) continue;
                    if(s[chal]=='0')
                        cnt++;
                }
            }
            int mal1 = (s[i]-'0')*10 + (s[j]-'0');
            int mal2 = (s[j]-'0')*10 + (s[i]-'0');
            int geche = -1;
            if(mal1%25==0)
                geche = n-i-2 + n-j-1;
            if(geche!=-1)
            {
                if(!batman)
                {
                    geche += cnt;
                }
                if(mini==-1)
                {
                    mini = geche ;
                }
                else
                    mini = min(mini,geche);
            }
            if(mal2%25==0){
                geche = n-i-1 + n-j-1;
                if(n-j-1==-1)
                    geche++;
            }
            if(geche!=-1)
            {
                if(!batman)
                {
                    geche+= cnt;
                }
                if(mini==-1)
                {
                    mini = geche;
                }
                else
                    mini = min(mini,geche);
            }
        }
    }
    cout << mini <<endl;
    return 0;
}
