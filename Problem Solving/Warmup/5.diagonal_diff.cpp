#include<iostream>
using namespace std;

int main()
{
    int n,sum=0,sum2=0,result;

    cin>>n;

    int arr[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        sum = sum+arr[i][i];
        sum2 = sum2+arr[i][n-i-1];   
    }
    
    result = sum - sum2; 

    cout<<abs(result)<<"\n";
}
