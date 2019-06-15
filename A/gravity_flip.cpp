#include<iostream>

using namespace std;

int main()  {
    int n, i, temp, j;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    for(i=1;i<n;i++)    {
        temp = a[i];
        j = i;
        while(j>0)  {
            if(temp<a[j-1])
                a[j] = a[j-1];
            else
                break;
            j--;
        }
        a[j] = temp;
    }
    for(i=0;i<n;i++)
        cout << a[i] <<" ";
    cout << endl;
    return 0;
}
