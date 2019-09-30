#include<bits/stdc++.h>

using namespace std;

const long long MOD = 1000000007;
#define SET(x) memset(x, 0, sizeof(x))
#define SET2d(x,m,n) memset(x, 0, sizeof(x[0][0]) * m * n)
#define SETBOOL(x) memset(x,false,sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define mp make_pair
#define PII pair<int, int>
#define pf printf

#define sf scanf

#define ALL(x) x.begin(),x.end()
#define pb push_back

#define IOS ios::sync_with_stdio(false); cin.tie(0);
#define np std::string::npos
#define for0(i,n) for(int i=0;i<n;i++)
#define forn(i,n) for(int i=n-1;i>=0;i--)
#define highest(x) numeric_limits<x>::max()
#define lowest(x) numeric_limits<x>::min()
#define Inf INFINITY
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define cases(cs,t) for(int cs=1;cs<=t;cs++)
#define PI acos(-1)
typedef long long ll;
int fx[]={0,0,-1,1,+1,-1,-1,+1};
int fy[]={1,-1,0,0,+1,+1,-1,-1};


//this fuction sorts vector pair according to first element in descending order.
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}

long long bigmod ( long long a, long long p, long long m )
{
    long long res = 1;
    long long x = a;

    while ( p )
    {
        if ( p & 1 ) //p is odd
        {
            res = ( res * x ) % m;
        }
        x = ( x * x ) % m;
        p = p >> 1;
    }

    return res;
}
int main()
{
    int h,w;
    while(cin>>h>>w)
    {
        int arr[h][w];
        vector<int>row,col;
        memset(arr,0,sizeof(arr[0][0])*h*w);
        for(int i=0;i<h;i++)
        {
            int x;
            cin>>x;
            row.pb(x);
            if(x==0)
            {
                arr[i][0] = 0;
                continue;
            }
            for(int j=0;j<x;j++)
            {
                arr[i][j] = 1;
            }
        }
       for(int i=0;i<w;i++)
       {
           int x;
           cin>>x;
           col.pb(x);
           if(x==0)
           {
               arr[0][i] = 0;
           }
           for(int j=0;j<x;j++)
           {
               arr[j][i] = 1;
           }
       }
       bool pos = true;
       for(int i=0;i<h;i++)
       {
           int ct=0;
           for(int j=0;j<w;j++)
           {
               if(arr[i][j]==0)
                break;
               ct++;
           }

           //if(row[i]<=w) arr[i][row[i]] = 1;
           if(ct!=row[i]) {pos = false;break;}
       }
        if(!pos) {
            cout << "0\n";
            continue;
        }
        for(int j=0;j<w;j++)
        {
            int ct = 0;
            for(int i=0;i<h;i++)
            {
                if(arr[i][j]==0)
                    break;
                else ct++;
            }

            //if(col[j]<=h) arr[col[j]][j] = 1;
            if(ct!=col[j]){pos = false;break;}
        }
        if(!pos){
            cout << "0\n";
            continue;
        }
        for(int i=0;i<h;i++)
        {
            if(arr[i][0]==0)arr[i][0] = 2;
            if(row[i]<=w && arr[i][row[i]]==0) arr[i][row[i]] = 2;
        }
        for(int i=0;i<w;i++)
        {
            if(arr[0][i]==0) arr[0][i]= 2;
            if(col[i]<=h && arr[col[i]][i]==0) arr[col[i]][i] = 2;
        }
        int cnt=0;
      //  cout << "\n\nFinal grid: \n";
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
             //   cout << arr[i][j] << " ";
                if(arr[i][j]==0) cnt++;
            }
        }
       cout << bigmod(2,cnt,MOD)<<endl;
    }
}
