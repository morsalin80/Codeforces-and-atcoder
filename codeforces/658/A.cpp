#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
    int n,c;
    while(cin>>n>>c){
        int p[n];
        int t[n];
        for(int i=0;i<n;i++)cin>>p[i];
        for(int i=0;i<n;i++)cin>>t[i];
        int x=0;
        int limak=0,rad=0;
        for(int i=0;i<n;i++){
            x +=t[i];
            limak += max(0,(p[i]-c*x));
        }
        x=0;
        for(int i=n-1;i>=0;i--)
        {
            x+=t[i];
            rad+=max(0,(p[i]-c*x));
        }
        if(limak>rad) cout << "Limak\n";
        else if(limak<rad) cout << "Radewoosh\n";
        else cout << "Tie\n";
    }
    return 0;
}

