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
        map<int,int> m;
        map<int,int>::iterator it;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            m[x]++;
        }
        multiset<int> muls;
        for(it= m.begin();it!=m.end();++it)
        {
            muls.insert((*it).second);
        }
        ll sum = 0;
        ll pre;
        for(auto it=muls.rbegin();it!=muls.rend();++it)
        {
            if(it == muls.rbegin())
            {
                sum+=(*it);
                pre = (*it);
                continue;
            }
            if((*it)<pre)
            {
                sum+= (*it);
                pre = (*it);
                continue;
            }
            if(pre==0) break;
            sum+= pre-1;
            pre--;
        }
        cout << sum <<endl;
    }
    return 0;
}
