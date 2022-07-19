#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
int main()
{
    double n,m,a;
    cin>>n>>m>>a;
    ll b, c;
    b = ceil(n/a) ;
    c= ceil(m/a);
    cout<< b* c;
}
