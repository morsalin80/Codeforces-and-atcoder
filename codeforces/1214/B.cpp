#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int b,g,n;
    while(cin>>b>>g>>n)
    {
        int brr[n+1];
        int grr[n+1];
        int bg=-1,gg=-1;
        for(int i=0;i<=n;i++){
            brr[i] = i;
            grr[i] = n-i;
        }
        for(int i=0;i<=n;i++)
        {
            if(brr[i]>b) {
                bg = i-1;
                break;
            }
        }
        if(bg==-1) bg = n;
        for(int i=n;i>=0;i--)
        {
            if(grr[i]>g)
            {
                gg = i+1;
                break;
            }
        }
        if(gg==-1) gg = 0;
        //cout << bg << " "<<gg << endl;
        cout << (bg-gg)+1<<endl;
    }
    return 0;
}

