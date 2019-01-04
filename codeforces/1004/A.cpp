#include<iostream>
using namespace std;
int main()
{
    int n,d;
    while(cin>>n>>d){
        int arr[n],hotels=2;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        if(n==1){ cout << hotels <<endl; continue;}
        if(arr[0]+d<=arr[1]-d){//cout<<arr[0]+d <<endl;
                hotels++;}
        if(arr[n-1]-d>arr[n-2]+d){//cout<<arr[n-1]-d<<endl;
                hotels++;}
        for(int i=1;i<n-1;i++){
                if(arr[i]+d<=arr[i+1]-d){//cout<<arr[i]+d<<endl;
                        hotels++;}
                if(arr[i]-d>arr[i-1]+d){//cout<<arr[i]-d<<endl;
                     hotels++;}
                }
        cout << hotels <<endl;
    }
}
