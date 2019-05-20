#include<iostream>

using namespace std;

int main()  {
    
    int n, b, d, count = 0, juicer_size = 0;
    cin >> n >> b >> d;
    int a[n];
    for(int i=0;i<n;i++)    {
        cin >> a[i];
        if(a[i]>b)
            continue;
        juicer_size += a[i];
        if(juicer_size > d) {
            count++;
            juicer_size=0;
        }
    }
    cout << count;
    
    return 0;
}