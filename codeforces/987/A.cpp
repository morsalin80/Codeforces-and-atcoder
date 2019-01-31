#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof x)
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    map <string,string > mp;
    map <string,string>::iterator it;
    mp["orange"] = "Soul";
    mp["purple"] = "Power";
    mp["green"] = "Time";
    mp["blue"] = "Space";
    mp["red"] = "Reality";
    mp["yellow"] = "Mind";
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    bool arr[6]={0};
    ms(arr);
  //  for(int i=0;i<6;i++) cout << arr[i] << " ";cout <<endl;
    for(int i=0;i<n;i++){
    if(s[i]=="orange") arr[2] = 1;
    if(s[i]=="purple") arr[3] = 1;
    if(s[i]=="green") arr[1] = 1;
    if(s[i]=="blue") arr[0] = 1;
    if(s[i]=="red") arr[4] = 1;
    if(s[i]=="yellow") arr[5] = 1;
}
//for(int i=0;i<6;i++) cout << arr[i] << " ";cout <<endl;
    int i=0;
    cout << 6-n <<endl;
    for(it=mp.begin();it!=mp.end();++it,i++)
    {
        //cout << it->first << " ";
        if(arr[i]==0) cout << it->second<<endl;
    }
    return 0;
}

