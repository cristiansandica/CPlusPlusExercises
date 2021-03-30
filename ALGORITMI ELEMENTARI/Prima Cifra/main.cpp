#include <iostream>

using namespace std;

int n;
int main()
{
    cin>>n;
    while(n>9){
        n=n/10;
    }
    cout<<n<<'\n';
    return 0;
}
