#include<iostream>

using namespace std;

int main()  {
    unsigned short int n, h, totalwidth=0;
    cin >> n >> h;
    unsigned short int a[n];
    for(unsigned short int i=0;i<n;i++)    {
        cin >> a[i];
        if(a[i]>h)
            totalwidth+=2;
        else
            totalwidth++;
    }
    cout << totalwidth << endl;
    return 0;
}
