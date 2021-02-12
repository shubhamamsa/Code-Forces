#include<bits/stdc++.h>
 
using namespace std;
 
int main()  {
    
    long long n, x;
    cin >> n >> x;
    long long a[n];
    for(long long i=0;i<n;i++)
        cin >> a[i];
    sort(a, a+n);
    long long sum = 0;
    for(long long i=0;i<n;i++) {
        sum += x*a[i];
        if(x>1)
            x--;
    }
    cout << sum;
    return 0;
}
