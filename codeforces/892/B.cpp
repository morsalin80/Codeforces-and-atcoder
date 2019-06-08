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
    int n;
    while(cin>>n)
    {
        int l[n];
        for(int i=0;i<n;i++)
            cin>>l[i];
        bool mara[n]={0};
        int f = l[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(f>0)
            {
                mara[i] = 1;
                f--;
            }
            if(f<=l[i])
            {
                f = l[i];
            }
        }
        int cnt =0;
        for(int i=0;i<n;i++){
           // cout << mara[i] << " ";
            if(!mara[i]) cnt++;
        }
        //cout <<endl;
        cout << cnt <<endl;
    }
    return 0;
}

