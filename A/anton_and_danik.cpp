#include<iostream>

using namespace std;

int main()  {
    int n, win=0;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);
    for(int i=0;i<n;i++)    {
        if(s[i]=='A')
            win++;
    }
    if(win>n/2)
        cout << "Anton" << endl;
    else if(n%2==0 && win==n/2)
        cout << "Friendship" << endl;
    else
        cout << "Danik" << endl;
    return 0;
}
