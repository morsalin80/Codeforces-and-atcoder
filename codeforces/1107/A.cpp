#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int ln;
        cin>>ln;
        string s;
        cin>>s;
        if(ln>2){
            string ss = s.substr(1,ln-1);
            cout <<"YES\n2\n"<< s.at(0) << " " <<ss<<endl;
        }
        else{
            int l=s.at(0)- 48;
            int r = s.at(1)-48;
            //cout << l << " "<<r <<endl;
            if(l<r) cout<<"YES\n2\n" << l << " " << r<<endl;
            else cout << "NO\n";
        }
    }
    return 0;
}
