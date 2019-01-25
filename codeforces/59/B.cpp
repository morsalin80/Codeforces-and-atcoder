#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int arr[n];
        int smalodd=110;
        int smallev=0;
        int tot=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2!=0) {if(arr[i]<smalodd)smalodd=arr[i];}
            tot+= arr[i];
        }
        if(tot%2==0){
            if(smalodd!=110)
            cout << tot-smalodd<<endl;
            else
            cout << "0\n";
        }
        else
            cout << tot <<endl;
    }
    return 0;
}
