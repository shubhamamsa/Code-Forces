#include<iostream>
 
using namespace std;
 
int main()  {
    unsigned int n, k, i, j;
    cin >> n >> k;
    int a[n];
    for(i = 0;i<n;i++)
        cin >> a[i];
    unsigned int sum = 0, min = 0, val = 0;
    for(i=0;i<k;i++)
        sum+=a[i];
    //cout << sum << endl;
    min = sum;
    for(i = k;i<n;i++)  {
        sum += a[i] - a[i-k];
        if(min>sum) {
            min = sum;
            val = i-k+1;
        }
    }
    //cout << min << endl;
    cout << val+1;
    return 0;
}
