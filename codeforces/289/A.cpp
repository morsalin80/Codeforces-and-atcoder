#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int tot=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        tot+= (b-a)+1;
    }
    if(tot%k==0){
        cout << 0 << endl;
    }
    else{
        int val=tot/k;
        val++;
        cout << (val*k)-tot << endl;
    }
    return 0;
}
