#include<iostream>

using namespace std;

int main()  {
    
    int n, energy = 0, money = 0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    money = a[0];
    for(int i = 1;i<n;i++)  {
        if(a[i] - a[i-1] - energy > 0)  {
            money += a[i] - a[i-1] - energy;
            energy = 0;
        }
        else
            energy += a[i-1] - a[i];
    }
    cout << money;
    return 0;
}