#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int k;
    while(cin>>s>>k)
    {
        int c=0;
        int prosno=0;
        bool star=false;
        int stat=0;
        bool som=false;
        int st=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='*' && s[i]!='?') c++;
            if(s[i]=='?') prosno++;
            if(s[i]=='*') {st++; if(!star){star= true;stat=i;}}
        }
      //  cout << c << " "<< prosno <<" " <<stat <<" "<<k << endl;
        if(k>c && !star){
            cout << "Impossible\n";
            //cout << "if1\n";
            continue;
        }
        else if(k>c && star)
        {
            //cout << "else if1\n";
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='*'||s[i]=='?'){}
                else cout << s[i];
                //cout << i<<" :i<<>>stat: "<<stat<<endl;
                if(i==stat){
                        //cout << "chal\n";
                    for(int j=0;j<k-c;j++)
                    {
                        //cout << "bal\n";
                        cout<<s[stat-1];
                    }
                }
            }
        }

        else if(c>=k){
            //cout << "else if2\n";
            if(c-(prosno+st)>k)
                cout << "Impossible\n";
            else{
                //cout << "djh\n";
                int bad = c-k;
                for(int i=0;i<s.size();i++)
                {
                    if(s[i]=='?' || s[i]=='*')continue;
                    if((s[i+1]=='?' || s[i+1]=='*') && i<=s.size()-1 && bad>0){bad--; continue;}
                    else
                        cout << s[i];
                }
            }
        }
        cout << "\n";
    }
    return 0;
}
