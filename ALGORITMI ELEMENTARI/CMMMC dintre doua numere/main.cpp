#include <iostream>

using namespace std;

int a,b,cmmmc,ca,cb;
int main()
{
    cin>>a>>b;
    ca=a;
    cb=b;
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    cmmmc=(ca*cb)/a;
    //cmmmc = (a*b) / cmmdc
    cout<<cmmmc;
    return 0;
}
