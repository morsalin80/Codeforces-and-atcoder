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
        int arr[n];
        set<int>st;
        int mark[101];
        ms(mark);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mark[arr[i]] = 2;
            st.ins(arr[i]);
        }
        int cnt=0;
        for(auto it = st.begin();it!=st.end();it++)
        {
            if(mark[*it]==1) continue;
            cnt++;
            mark[*it] = 1;
            //cout << cnt << endl;
            for(auto itt=st.begin();itt!=st.end();itt++){
                if((*itt)%(*it)==0)
                    mark[*itt]=1;
            }
            //cout << "bal \n";
            bool all=true;
            for(int i=0;i<=100;i++)
            {
             //   if(mark[i]==1 || mark[i]==2) cout << mark[i] << " ";
                if(mark[i]==2)
                {
                    all = false; break;
                }
            }
            //cout << endl;
            if(all){ cout << cnt << "\n"; break;}
        }

    }
    return 0;
}

