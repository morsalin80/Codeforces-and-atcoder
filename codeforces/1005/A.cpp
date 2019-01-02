#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int arr[n];
        int one=0;
        vector<int>vec;
        int stair=0;
        bool first=true;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            stair++;
            if(arr[i]==1) {one++;
            if(first){
                first= false;}
            else if(!first){ vec.push_back(stair-1); stair =1;}

        }}
        vec.push_back(stair);
        cout << one <<endl;
        for(int i=0;i<vec.size();i++)
            cout << vec[i] <<" ";
        cout <<endl;
    }
    return 0;
}
