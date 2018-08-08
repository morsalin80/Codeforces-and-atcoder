#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        vector<int> vec;
        int tot,marks,tot1,maxi=0;
        for(int i=0;i<n;i++)
        {
            tot =0;
            {
                for(int j=0;j<4;j++)
                {
                    cin>>marks;
                    tot+=marks;
                }
                if(i==0)tot1 = tot;
                vec.push_back(tot);
            }
        }
        int pos;
        //cout << tot1 <<endl;
        sort(vec.begin(),vec.end(),greater<int>());
        for(int i=0;i<vec.size();i++)
        {
           // cout << vec[i] <<endl;
            if(vec[i]==tot1){ pos=i+1; break;}
        }
        cout << pos<<endl;
    }
    return 0;
}

