#include<iostream>

using namespace std;

int main()  {
    int n, count = 1;
    cin >> n;
    int a[n];
    cin >> a[0];
    for(int i=1; i< n; i++) {
        cin >> a[i];
        if(a[i] != a[i-1])
            count++;
    }
    cout << count << endl;
    return 0;
}