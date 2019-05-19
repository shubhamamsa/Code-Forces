#include<iostream>

using namespace std;

int main()  {
    unsigned int a[4];
    short int count = 0;
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    for(int i=0; i<4; i++)  {
        if(a[i]==0)
            continue;
        for(int j=0;j<4;j++)    {
            if(j!=i && a[i] == a[j] && a[j]!=0) {
                a[j] = 0;
                count++;
            }
        }
    }
    cout << count;
    return 0;
}