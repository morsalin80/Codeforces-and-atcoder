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
	map<string,int> mp1;
	map<string,int>::iterator it;
	map<string,string>mp2;
	map<string,string>::iterator its;
	for(int i=0;i<n;i++){
        string s1,s2;
        cin>>s1>>s2;
        mp1[s1] = 0;
        mp1[s2] = 1;
        bool x = true;
        string s;
        for(its =mp2.begin();its!=mp2.end();++its){
            if(s1==(*its).second)
            {
                x = false;
                s = (*its).first;
                break;
            }
        }
            if(x==false)
            {
                mp2[s] = s2;
            }
            else{
                mp2[s1] = s2;
            }
	}
	int cnt = 0;
	for(it = mp1.begin();it!=mp1.end();it++)
        cnt+= (*it).second;
    cout << cnt <<endl;
	for(its = mp2.begin();its!=mp2.end();++its)
        cout << (*its).first << " " << (*its).second <<endl;
	return 0;
}
