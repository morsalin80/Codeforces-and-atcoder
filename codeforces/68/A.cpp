#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p[4],a,b;
    for(int i=0;i<4;i++)
        cin>>p[i];
    cin>>a>>b;
    sort(p,p+4);
    if(p[0]-a<=0) cout << "0\n";
    else if(p[0]>b) cout << (b-a)+1 <<endl;
    else cout << p[0]-a<<endl;
    return 0;
}
