//f(n)=f(n-1)+f(n-2)

#include <iostream>

using namespace std;

int i,n,a,b,c;
int main()
{
    cin>>n;

    if(n==1)
        cout<<1;
    else if(n==2)
        cout<<1<<" "<<1;
    else
    {
        a=1;
        b=1;
        for(i=3; i<=n; i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        cout<<c;
    }


    return 0;
}
