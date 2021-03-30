#include <fstream>
#include <algorithm>

using namespace std;

ifstream fin("masini.in");
ofstream fout("masini.out");

int n,i,a[1001], s=0, T, nr=0;
int main()
{
    fin>>n>>T;
    for(i=1; i<=n; i++)
        fin>>a[i];

    sort(a+1,a+n+1);

    for(i=1; i<=n; i++)
    {
        s+=a[i];
        if(s<=T)
            nr++;
        else
            break;
    }
    fout<<nr;
    return 0;
}
