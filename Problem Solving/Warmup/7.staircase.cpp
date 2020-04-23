#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<n+1;i++)
    {  
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");  
        }
        for(int k=i;k>0;k--)
        {
            printf("#");
        }
        printf("\n");

    }

}

