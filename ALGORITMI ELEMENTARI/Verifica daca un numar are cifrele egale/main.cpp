#include <iostream>

using namespace std;

int n,c=0,ok=1;
int main()
{
    cin>>n;
    c=n%10;
    n=n/10;
    while(n)
    {
        if(n%10!=c)
        {
            ok=0;
            break;
        }
        n=n/10;
    }

    if(ok==1)
        cout<<"numarul are toate cifrele egale";
    else
        cout<<"cifrele numarului nu sunt egale";
    return 0;
}
