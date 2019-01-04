#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,ans;
    while(cin>>n>>k){
        long long ordhek = n/2*1ll;
        if(ordhek*2<n) ordhek++;
         //cout << ordhek <<endl;
        if(k<=ordhek) ans=(k*2*1ll) - 1;
        else{
            if((k%ordhek)!=0)
             ans=(k%ordhek)*2*1ll;
            else ans = k;
        }
        cout << ans<<endl;
    }
    return 0;
}
