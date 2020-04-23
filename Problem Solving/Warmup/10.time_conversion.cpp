#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string stamp,h1,m1,s1,s;

    cin>>stamp;

    h1 = stamp.substr(0,2);
    m1 = stamp.substr(3,2);
    s1 = stamp.substr(6,2);
    s = stamp.substr(8,2);
    int h = stoi(h1);

    if(s == "PM" && h!=12)
    {
        h = h+12;
    }
    else if(s == "AM" && h==12){
        h = 0;
    }

    h1 = to_string(h);

    if(h == 0)
    {
        h1 = h1 +"0";
    }
    else if(h<10)
    {
        h1 = "0"+h1;
    }

    cout<<h1<<":"<<m1<<":"<<s1;
}

