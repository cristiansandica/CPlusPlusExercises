//f(n)=f(n-1)+f(n-2)

#include <iostream>

using namespace std;

int i,n,a,b,c;
int main()
{
    cin>>n;

    if(n==1)
        cout<<1;
    else
    {
        a=1;
        b=1;
        c=a+b;
        while(c<=n)
        {
            a=b;
            b=c;
            c=a+b;
        }
        cout<<c-a;
    }


    return 0;
}
