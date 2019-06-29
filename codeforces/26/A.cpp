#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
bool Prime(int n)
{
    //cout << n <<endl;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
	IOS
    int n;
    while(cin>>n)
    {
        ll cnt=0;
        for(int j=6;j<=n;j++){
        set<int>st;
        for(int i=2;i<=j/2;i++)
        {
            if(j%i==0 && Prime(i))
                st.ins(i);
        }
        //cout << st.size()<< " <<size\n";
        if(st.size()==2)
            cnt++;
        }
        cout << cnt <<endl;
    }
    return 0;
}

