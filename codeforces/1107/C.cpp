#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
    int n,k;
    while(cin>>n>>k)
    {
        long long arr[n+1];
        string s;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        cin>>s;
        long long ara[n+1];
        //vector<int>p;
        char a = s[0];
        int cons=1;
        long long ans=0;
        int tr=1;
        for(int i=1;i<n;i++)
        {
            //cout << cons <<" "<<ans<<endl;
            if(s[i]==a){ cons++;}
            else{
                if(cons<=k){
                    for(int j=0;j<cons;j++,tr++) ans+=arr[tr];
                    a = s[i];}
                    else
                    {

                        for(int j=0;j<cons;j++,tr++) ara[j] = arr[tr];
                        sort(ara,ara+cons,greater<int>());
                        for(int j=0;j<k;j++) ans +=ara[j];
                    }
                    cons=1;a = s[i];
                }

            }
            if(cons<=k){
                    for(int j=0;j<cons;j++,tr++) ans+=arr[tr];
                    }
                    else
                    {

                        for(int j=0;j<cons;j++,tr++) ara[j] = arr[tr];
                        sort(ara,ara+cons,greater<int>());
                        for(int j=0;j<k;j++) ans +=ara[j];
                    }
                   //cout << ans <<":ans:"<<en
       // for(int i=0;i<p.size();i++) cout << p[i] <<endl;
       cout << ans <<endl;
    }
}
