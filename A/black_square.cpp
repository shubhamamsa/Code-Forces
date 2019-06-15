#include<iostream>

using namespace std;

int main()  {
    unsigned int a[4], calorie=0, i=0;
    string s;
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    cin.ignore();
    getline(cin, s);
    while(i<s.size()) {
        calorie+=a[int(s[i]) - 49];
        i++;
    }
    cout << calorie << endl;
    return 0;
}