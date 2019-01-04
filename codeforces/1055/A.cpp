#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    while(cin>>n>>s)
    {
        int a[n],b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        if(a[0]==0){
            cout << "NO\n";
            continue;
        }
        if(a[s-1]==1){
            cout << "YES\n";
            continue;
        }
        bool dhurr= false;
        if(a[s-1]==0 && b[s-1]==1)
        {
          //  cout << "kahini\n";
            for(int i=s;i<n;i++){
                if(a[i]==b[i]){
                    if(a[i]==1){
                    cout << "YES\n";
                    dhurr = true;
                    break;
                    }
                }
            }
            if(!dhurr) cout << "NO\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}
