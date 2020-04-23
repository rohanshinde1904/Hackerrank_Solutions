#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n],high,temp=0;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            high = arr[i];
        }
        else
        {
            if(arr[i]>high)
            {
                high =arr[i];

            }
            
        }
        
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==high)
        {
            temp++;
        }
    }
    cout<<temp;
}

