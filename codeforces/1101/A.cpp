#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int l,r,d;
        cin>>l>>r>>d;
        if(d<l) cout << d <<endl;
        else if(d>r) cout << d <<endl;
        else {
            int vag = r/d;
            vag++;
            cout << vag*d <<endl;
        }

    }
    return 0;
}
