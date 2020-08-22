    #include<bits/stdc++.h>
    using namespace std;
    int main(){
      int n,x,t;
      cin>>n>>x>>t;
      int w=n/x;
      if(w*x!=n)w++;
      cout << w*t << endl;
      return 0;
    }