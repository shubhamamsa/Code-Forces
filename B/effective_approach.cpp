#include<iostream>
 
using namespace std;
 
int main()  {
    long n;
    long long vasya = 0, petya = 0;
    cin >> n;
    long a[n], c[n];
    for(long i = 0;i<n;i++)
        cin >> a[i];
    for(long i = 0;i<n;i++)
        c[a[i]-1] = i;
    long m;
    cin >> m;
    long b[m];
    for(long i=0;i<m;i++)    {
        cin >> b[i];
        vasya += c[b[i]-1] + 1;
        petya += n-c[b[i]-1];
    }
    cout << vasya << " "<< petya;
    return 0;
}
