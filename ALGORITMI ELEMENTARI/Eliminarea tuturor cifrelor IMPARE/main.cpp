#include <iostream>

using namespace std;

int n,nr,p=1;
int main()
{
    cin>>n;
    while(n!=0)
    {
        if(n%2==0)
        {
            nr=(n%10)*p+nr;
            p=p*10;
        }
        n=n/10;
    }
    cout<<nr;;

}
