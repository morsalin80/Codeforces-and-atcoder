#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long arr[n];
        long long tote=0,even=0,odd=0,f5=0,maxx=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i%2==0){
                tote+=arr[i];
            }
        }
        maxx=tote;
        for(int i=0;i<n;i++){
            if(i%2==0){
                even+=arr[i];
            }
            else odd+=arr[i];
            if(i%2!=0){
                f5=max(f5,even-odd);
                maxx=max(maxx,tote-even+odd+f5);
            }
        }
        even=0,odd=0,f5=0;
        for(int i=1;i<n;i++){
            if(i%2==0){
                even+=arr[i];
            }
            else{
                odd+=arr[i];
            }
            if(i%2==0){
                f5=max(f5,even-odd);
                maxx=max(maxx,tote-even+odd+f5);
            }
        }
        cout << maxx << endl;
    }
}
