#include<iostream>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        long long rem =0;
        int day;
        int pr;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>> arr[i];
        for(int i=0;i<n;i++)
        {
            //cout << rem <<endl;
            rem+=arr[i];
            if(rem<m)
                cout << "0 ";
            else if(rem>=m)
            {
                pr =rem/m;
                cout << pr <<" ";
                rem = rem%m;
            }
        }
        cout <<endl;
    }

}
