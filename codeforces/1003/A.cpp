#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int same,maxsame=-1;
        int mini = n+1;
        for(int i=0;i<n;i++){
                same = 0;
            for(int j=0;j<n;j++)
            {
                if(arr[i] == arr[j]){ same++;
                if(same>maxsame) maxsame = same;}
            }
        }
        cout << maxsame <<endl;
    }
}
