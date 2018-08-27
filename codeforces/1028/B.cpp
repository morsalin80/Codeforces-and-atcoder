#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    while(cin>>n>>m)
    {
        vector <int> bala,balb;
        int joga=5,jogb=5;
        bala.push_back(5);
        balb.push_back(5);
        while(1)
        {
            bala.push_back(5);
            balb.push_back(4);
            joga+=5;
            jogb+=4;
            if(joga>=n && jogb>=n)
            {
                break;
            }
        }
        for(int i=bala.size()-1;i>=0;i--)
            cout << bala[i];
        cout << endl;
         for(int i=balb.size()-1;i>=0;i--)
            cout << balb[i];
        cout <<endl;

    }
    return 0;
}
