#include<iostream>

using namespace std;

int main()  {
    int n, sereja=0, dima=0, i, flag = 1;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    i = 0;
    while(i<n)  {
        flag = -1*flag;
        if(flag == -1)  {
            if(a[i]>=a[n-1])    {
                sereja+=a[i];
                i++;
            }
            else    {
                sereja+=a[n-1];
                n--;
            }
        }
        else    {
            if(a[i]>=a[n-1])    {
                dima+=a[i];
                i++;
            }
            else    {
                dima+=a[n-1];
                n--;
            }
        }
    }
    cout << sereja << " " << dima << endl;
    return 0;
}
