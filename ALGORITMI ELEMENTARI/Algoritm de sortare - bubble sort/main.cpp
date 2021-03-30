#include <iostream>

using namespace std;

int i,j,n,a[101],sortat;
int main()
{
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }

while(sortat==0){
    sortat = 1;
    for(i=1;i<n;i++){
        if(a[i]>a[i+1])
        {
            swap(a[i],a[i+1]);
            // sau
            // aux = a[i]
            // a[i] = a[i+1]
            // a[i+1] = aux
            sortat = 0;
        }
    }
}
for(i=1;i<=n;i++){
    cout<<a[i]<<" ";
}
    return 0;
}
