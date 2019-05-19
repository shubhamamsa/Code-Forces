#include<iostream>

using namespace std;

int main()  {
    int n, count = 0;
    string s;
    cin >> n;
    cin.ignore();
    getline(cin, s);
    for(int i=1;i<n;i++)    {
        if(s[i] == s[i-1])  {
            int j = i-1;
            while(s[j] == s[i]) {
                count++;
                i++;
            }
        }
    }
    cout << count;
    return 0;
}