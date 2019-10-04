#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}
int main()
{
	IOS
    int n;
    while(cin>>n)
    {
        int x = sqrt(n);
        int y;
        if(x*x==n){ cout << x << " "<< x << endl; continue;}
        else y = x+1;
        for(int i=y;i>=1;i--)
        {
            if(n%i==0){

                cout << min(i,n/i) << " "<< max(i,n/i) <<endl;
                break;
            }
        }
    }
    return 0;
}

