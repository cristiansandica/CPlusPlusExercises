#include <iostream>

using namespace std;

int n,m;
int main()
{
    cin>>n;
    while(n!=0)
    {
       m=m*10+n%10;
       n=n/10;
    }
    cout<<m<<'\n';
    return 0;
}
