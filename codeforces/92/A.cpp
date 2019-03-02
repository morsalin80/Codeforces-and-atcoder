#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n,m;
    while(cin>>n>>m)
    {
        for(int i=1;;i++)
        {
            int x = i%n;
            if(x==0) x = n;
            //cout << x << " ";
            if(m-x>=0) m-=x;
            else break;
            //cout << m <<endl;
        }
        cout << m <<endl;
    }
    return 0;
}

