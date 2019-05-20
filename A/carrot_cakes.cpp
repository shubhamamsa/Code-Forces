#include<iostream>

using namespace std;

int main()  {
    int n, t, k, d, batch;
    cin >> n >> t >> k >> d;
    batch = n/k;
    if(n%k!=0)
        batch++;
    if(t*(batch-1) > d)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
        
    return 0;
}