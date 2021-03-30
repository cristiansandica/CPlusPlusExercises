#include <iostream>

using namespace std;

int n, maxi=-1;
int main()
{
    cin>>n;
    while(n!=0)
    {
        if(n%10>maxi)
            maxi=n%10;
        n=n/10;
    }
    cout<<maxi<<'\n';
    return 0;
}
