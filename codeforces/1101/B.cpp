#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        bool firstbr=false,secbr=false,firstcol=false,secc=false;
        int khara=0;
        int first=0,last=0;
        int lastbr;
        for(int i=s.length()-1;i>=0;i--)
        if(s[i]==']'){ lastbr =  i; break;}
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='[' && !secbr &&!firstbr) firstbr=true;
            if(s[i]==']' && firstbr && firstcol && secc) secbr = true;
            if(s[i]==':' && firstbr && i<lastbr) {if(firstcol){ secc = true; last = i;}
            else {firstcol = true; first=i;}}

        }
        for(int i=first;i<=last;i++)
        {
            if(s[i]=='|') khara++;

        }
        //cout << khara <<endl;
        if(firstbr&&firstcol&&secbr&&secc) cout << 4+khara<<endl;
        else
            cout << "-1\n";
    }
    return 0;
}
