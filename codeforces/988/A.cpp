#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,s,size;
    bool flag;
    set<int> distinct;
    vector<int>vec;
    while(cin>>n>>k){
        for(int i=0;i<n;i++)
        {
            size = distinct.size();
            cin>>s;
            distinct.insert(s);
            if(size<distinct.size())
                vec.push_back(i);
        }
        //cout << distinct.size();
        if(distinct.size()>=k){
            cout << "YES\n";
            for(int i=0;i<k;i++)
                cout << vec[i]+1 << " ";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
