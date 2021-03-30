#include <fstream>

using namespace std;

ifstream fin("proiecte.in");
ofstream fout("proiecte.out");


int n,i,j,a[1001],p[1001];
int main()
{
    fin>>n;
    for(i=1; i<=n; i++)
    {
        p[i]=i;
        fin>>a[i];
    }
    for(i=1; i<n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(a[i]>a[j])
            {
                swap(a[i],a[j]);
                swap(p[i],p[j]);
            }
        }
    }
    for(i=1; i<=n; i++)
        fout<<p[i]<<" ";
    return 0;
}
