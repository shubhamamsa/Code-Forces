#include<iostream>

using namespace std;

int main()  {
    int n, m, x, y;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    cin >> m;
    for(int i=0;i<m;i++)    {
        cin >> x >> y;
        x--;
        if(x == n-1)    {
            a[x-1] += (y-1);
            a[x] = 0;
        }
        else if(x == 0) {
            a[x+1] += (a[x] - y);
            a[x] = 0;
        }
        else    {
            a[x+1] += (a[x] - y);
            a[x-1] += (y - 1);
            a[x] = 0;
        }
    }
    for(int i=0;i<n;i++)
        cout << a[i] << endl;

    return 0;
}