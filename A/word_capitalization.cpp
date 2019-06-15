#include<iostream>
using namespace std;

int main()  {
    char ch[1001];
    cin.getline(ch, 1001);
    ch[0] = toupper(ch[0]);
    cout << ch;
    return 0;
}