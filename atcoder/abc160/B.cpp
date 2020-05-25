#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int x,ans=0;
  cin>>x;
  long long int rem=x%500;
  ans+= (x/500)*1000;
  ans+= (rem/5)*5;
  cout << ans << endl;
}