#include <iostream>

using namespace std;

int n,nr,p=1,k;
int main()
{
    cin>>n;
    while(n!=0)
    {
        if(n%10!=k)
        {
            nr=(n%10)*p+nr;
            p=p*10;
        }
        n=n/10;
    }
    cout<<nr;;

}
