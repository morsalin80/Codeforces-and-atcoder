#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int n,m;
    while(cin>>n>>m)
    {
        long long ai,totalA=0,bi,totalB=0,differ[n];
        for(int i=0;i<n;i++)
        {
            cin>>ai>>bi;
            totalA+=ai;
            totalB+=bi;
            differ[i] = ai-bi;
        }
        if(totalA <=m){cout << "0\n";continue;}
        if(totalB > m) {cout << "-1\n";continue;}
        //cout << totalA << " "<<totalB <<endl;
        sort(differ,differ+n,greater<int>());
        int counter=0;
        for(int i=0;i<n;i++)
        {
            if(totalA<=m) break;
            totalA-=differ[i];
            counter++;
        }
        cout << counter <<endl;
    }
}
