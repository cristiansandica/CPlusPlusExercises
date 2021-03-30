#include <iostream>

using namespace std;

int n,c,ok=1;
int main()
{
    cin>>n;
    c=n%10;
    n=n/10;
    while(n)
    {
        if(n%10<=c)
        {
            ok=0;
            break;
        }
        n=n/10;
    }
    if(ok==0)
        cout<<"Nr nu sunt in ordine crescatoare de la dr la stg";
    else
        cout<<"Nr sunt in ordine crescatoare de la dr la stg";


    return 0;
}
