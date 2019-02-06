#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
    int n;
    while(cin>>n){
    if(n%2==0) cout << "8 "<< n-8 <<endl;
    else cout << "9 "<<n-9<<endl;
    }
    return 0;
}

