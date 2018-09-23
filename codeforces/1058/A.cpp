#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    bool hard = false;
    for(int i=0;i<n;i++){
        cin>>m;
        if(m==1)
            hard = true;
    }
    if(hard)
        cout << "HARD\n";
    else
        cout << "EASY\n";
    return 0;
}
