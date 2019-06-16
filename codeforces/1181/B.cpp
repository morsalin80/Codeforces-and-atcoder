#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
string sum(string str1,string str2)
{
    int carry = 0;
    string str = "";
    //cout << str1 << " "<< str2 <<endl;
    int mi = min(str1.size(),str2.size());
    int ma = max(str1.size(),str2.size());
    for (int i=0; i<mi; i++)
    {
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');

        carry = sum/10;
    }
    if(ma==str1.size())
    for (int i=mi; i<ma; i++)
    {
        int sum = ((str1[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    else{
        for (int i=mi; i<ma; i++)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    }
    if (carry)
        str.push_back(carry+'0');
    reverse(str.begin(), str.end());
    return str;
}
int main()
{
	IOS
    int l;
    while(cin>>l)
    {
        string s;
        cin>>s;
        int mid=l/2;
        vector<string>vs;
        if(s[mid]!='0'){
        string str1= s.substr(0,mid);
        string str2 = s.substr(mid,l-mid);
      //  cout << str1 << " "<< str2 <<endl;
        reverse(str1.begin(),str1.end());
        reverse(str2.begin(),str2.end());
        vs.pb(sum(str1,str2));
        if(l%2!=0 && s[mid+1]!=0)
        {
        string str1= s.substr(0,mid+1);
        string str2 = s.substr(mid+1,l-mid+1);
      //  cout << str1 << " "<< str2 <<endl;
        reverse(str1.begin(),str1.end());
        reverse(str2.begin(),str2.end());
        vs.pb(sum(str1,str2));
        }
        }
        else if(s[mid]=='0')
        {
        //    cout<< "gotcha\n";
            for(int i=mid+1;i<l;i++)
            {
                if(s[i]!='0')
                {
                    string str1= s.substr(0,i);
                    string str2 = s.substr(i,l-i);
                //cout << str1 << " kk "<< str2 <<endl;
                    reverse(str1.begin(),str1.end());
                    reverse(str2.begin(),str2.end());
                    vs.pb(sum(str1,str2));
                    break;
                }
            } for(int i=mid-1;i>0;i--)
            {
                if(s[i]!='0')
                {
                    string str1= s.substr(0,i);
                    string str2 = s.substr(i,l-i);
                  //  cout << str1 << " jj"<< str2 <<endl;
                    reverse(str1.begin(),str1.end());
                    reverse(str2.begin(),str2.end());
                    vs.pb(sum(str1,str2));
                    break;
                }
            }
        }
        vector<pair<int,string> >vp;
        for(int i=0;i<vs.size();i++)
            vp.pb(mp(vs[i].size(),vs[i]));
        sort(vp.begin(),vp.end());
        cout << vp[0].second <<endl;
    }
    return 0;
}

