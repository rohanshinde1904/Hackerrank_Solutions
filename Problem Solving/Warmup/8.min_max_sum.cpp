#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    long int sumh=0,suml=0;

    for (int i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<5-1;i++)
    {
        for (int j=i;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }


    for(int i=0;i<4;i++)
    {
        suml = suml+arr[i];
    }

    for(int i=1;i<5;i++)
    {
        sumh = sumh+arr[i];
    }

    cout<<suml<<" "<<sumh;
}

