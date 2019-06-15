#include<iostream>
#include<math.h>

using namespace std;

int main()  {
    int A[5][5], a, b;
    for(int i=0;i<5;i++)    {
        for(int j=0;j<5;j++)    {
            cin >> A[i][j];
            if(A[i][j] != 0)    {
                a=i;b=j;
            }
        }
    }
    cout << fabs(a-2) + fabs(b-2) << endl;
    return 0;
}