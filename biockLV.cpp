#include<iostream>
using namespace std;
int x=5;
main()
{
    int x=12,*p;
    p=&x;
    cout<<"\n"<<x<<","<<::x;
    {
        int x=10;
        cout<<"\n"<<x<<" "<<::x<<","<<*p;
    }
    cout<<"\n"<<x<<","<<::x;
}
