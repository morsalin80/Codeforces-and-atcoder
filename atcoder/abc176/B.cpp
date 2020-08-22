#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  long long tot=0;
  for(int i=0;i<(int)s.size();i++){
    tot+=s[i]-'0';
  }
  if(tot%9==0){
    cout << "Yes\n";
  }
  else cout << "No\n";
  return 0;
}