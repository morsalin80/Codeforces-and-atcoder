#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    while(cin>>s1>>s2>>s3)
    {
        if(s1.length()+s2.length()!=s3.length()){
            cout << "NO\n";
            continue;
        }
        int got =0;
        bool found,ans=true;
        for(int i=0;i<s3.length();i++)
        {
            found = false;
            for(int j=0;j<s1.length();j++)
            {
                if(s3.at(i)==s1.at(j)){
                    found= true;
                    s1.at(j) = '.';
                    got++;
                    break;
                }
            }
            if(found) continue;
            for(int j=0;j<s2.length();j++)
            {
                if(s3.at(i)==s2.at(j)){
                    found = true;
                    s2.at(j) = '.';
                    got++;
                    break;
                }
            }
            if(!found)
            {
                ans = false;
                break;
            }
        }
        if(!ans)
            cout << "NO\n";
        else
        {
            if(got!=s1.length()+s2.length())
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
    return 0;
}
