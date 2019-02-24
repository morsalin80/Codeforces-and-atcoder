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
    int n;
    while(cin>>n)
    {
        int vp=0,vm=0;
        int in;
        for(int i=0;i<n;i++)
        {
            cin>>in;
            if(in>=0) vp+=in;
            else vm+=in;
        }
        cout << vp - vm <<endl;
    }
    return 0;
}

