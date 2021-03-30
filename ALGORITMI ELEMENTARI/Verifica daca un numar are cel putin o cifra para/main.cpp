#include <iostream>

using namespace std;

int n,c=0,ok=0;
int main()
{
    cin>>n;
    c=n%10;
    n=n/10;
    while(n)
    {
        if(n%10%2==0)
        {
            ok=1;
            break;
        }
        n=n/10;
    }
    if(ok==1);
    cout<<"Are cel putin o cifra para";
    else
        cout<<"Nu are cifra para";

    return 0;
}
