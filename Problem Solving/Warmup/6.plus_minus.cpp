#include<iostream>
using namespace std;

int main()
{
    int n;

    cin>>n;
    int arr[n],pos=0,neg=0,zero=0;

    double respos,resneg,reszero;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            zero++;
        }
        else if(arr[i]>0)
        {
            pos++;
        }
        else if(arr[i]<0)
        {
            neg++;
        }
    }

    respos = double(pos)/double(n);

    resneg = double(neg)/double(n);

    reszero = double(zero)/double(n);

    cout<<respos<<"\n"<<resneg<<"\n"<<reszero<<"\n";
}
