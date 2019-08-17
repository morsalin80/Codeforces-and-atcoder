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
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n<=3) {cout << "YES\n";continue;}
        bool pos = true;
        for(int i=0;i<n;i++)
        {
            int x,y;
            x = i-1;
            y = i+1;
            if(x<0) x = n-1;
            if(y>n-1) y = 0;
            int xval,yval;
            xval = arr[x];
            yval = arr[y];
            if(arr[i]==1){
                if((xval!=n && yval!=n) || (xval!=arr[i]+1 && yval!=arr[i]+1)){
                    pos = false;
                    break;
                }
            }
            else if(arr[i]==n)
            {
                if((xval!=1 && yval!=1) || (xval!=arr[i]-1 && yval!=arr[i]-1)){
                    pos = false;
                    break;
                }
            }
            else
            {
                if((xval!=arr[i]-1 && yval !=arr[i]-1)|| (xval!=arr[i]+1 && yval!=arr[i]+1))
                {
                    pos = false;
                    break;
                }
            }
        }
        if(pos) cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

