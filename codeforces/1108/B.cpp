#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int same;
         for(int i=1;i<n;i++)
        {
            if(arr[i]==arr[i-1]) {same=arr[i];}
        }
        //cout << same <<endl;
        for(int i=n-2;i>=0;i--)
        {
            if(arr[n-1]%arr[i]==0){if(arr[i]==same)continue;
            arr[i] = 0;
            }
                else break;
            //cout << arr[i] <<endl;
        }
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]!=0) {cout << arr[n-1] << " " << arr[i]<<endl;break;}
        }

    }
}
