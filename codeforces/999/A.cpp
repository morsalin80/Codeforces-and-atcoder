#include<iostream>
using namespace std;
int main()
{
    int n,k;
    while(cin>>n>>k){
        int arr[n];
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        int start=0,end = n-1,counter=0;
        while(arr[start]<=k || arr[end]<=k ){
            if(start>end)break;
            if(arr[start]<=k)
            {
                start++;
                counter++;
            }
            else if(arr[end]<=k)
            {
                end--;
                counter++;
            }
        }
        cout << counter<<endl;
    }
    return 0;
}
