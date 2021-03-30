#include <iostream>

using namespace std;

int n, mini=10;
int main()
{
    cin>>n;
    while(n!=0)
    {
        if(n%10<mini)
            mini=n%10;
        n=n/10;
    }
    cout<<mini<<'\n';
    return 0;
}
