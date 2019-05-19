#include<iostream>

using namespace std;

int main()  {
    unsigned int n, untreated = 0, police_officer = 0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(unsigned int i = 0; i<n; i++) {
        if(a[i] == -1 && police_officer > 0)
            police_officer--;
        else if(a[i] == -1 && police_officer == 0)
            untreated++;
        else
            police_officer += a[i];
    }
    cout << untreated << endl;
    return 0;
}