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
        vector<string> vec;
        if(n==1) {cout << "0\n"<<s<<endl; continue;}
        string sub;
        int start=0,en;
        for(int i=1;i<s.length();i++){
            if(s[i]!=s[i-1] || i==s.length()-1) {
                //cout << i << " <<i::start>> "<< start <<endl;
                if(i==n-1){
                    if(s[i]!=s[i-1]){
                        sub = s.substr(start,i-start);
                        vec.push_back(sub);
                        sub = s[i];
                        vec.push_back(sub);
                    }
                    else {
                        sub = s.substr(start,n-start);
                        vec.push_back(sub);
                    }
                }
                else{
                    sub = s.substr(start,i-start);
                  //  cout << sub <<endl;
                    start = i;
                    vec.push_back(sub);
                }
            }
        }
        ll ans=0;
        for(int i=0;i<vec.size()-1;i++)
        {
            char next = vec[i+1][0];
            if(vec[i].size()>1){
                char b;
                if(vec[i][0]=='B' && next =='G') b = 'R';
                if(vec[i][0]=='B' && next =='R') b = 'G';
                if(vec[i][0]=='G' && next =='B') b = 'R';
                if(vec[i][0]=='G' && next =='R') b = 'B';
                if(vec[i][0]=='R' && next =='B') b = 'G';
                if(vec[i][0]=='R' && next =='G') b = 'B';
                ans+=vec[i].size()/2;
                for(int j=0;j<vec[i].length();j++)
                {
                    if(j%2!=0) vec[i][j]=b;
                }
            }
        }
        if(vec[vec.size()-1].size()>1){
            char b;
            if(vec[vec.size()-1][0]=='R') b = 'B';
            if(vec[vec.size()-1][0]=='B') b = 'R';
            if(vec[vec.size()-1][0]=='G') b = 'B';
            ans+=vec[vec.size()-1].size()/2;
                for(int j=0;j<vec[vec.size()-1].length();j++)
                {
                    if(j%2!=0) vec[vec.size()-1][j]=b;
                }
        }
        cout << ans << endl;
        for(int i=0;i<vec.size();i++)
            cout << vec[i];
        cout << endl;
     }
    return 0;
}

