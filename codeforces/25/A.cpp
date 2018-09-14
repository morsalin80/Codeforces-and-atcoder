#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int arr[n];
        int jor = 0, jormone,bejor=0,bejormone;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                jor++;
                jormone = i;
            }
            else{
                bejor++;
                bejormone = i;
            }
        }
        if(jor==1)
            cout << jormone+1 <<endl;
        else
            cout << bejormone+1 <<endl;
    }
    return 0;
}
