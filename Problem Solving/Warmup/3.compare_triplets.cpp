#include <iostream>
using namespace std;

int main()
{
    int a[3],b[3],out[2]={0,0};

    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<3;i++)
    {
        cin>>b[i];
    }

    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            out[0]++;


        }
        else if(a[i]<b[i])
        {
            out[1]++;

        }
    }

    for(int i=0;i<2;i++)
    {
        cout<<out[i]<<" ";
    }
}
