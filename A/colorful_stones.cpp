#include<iostream>

using namespace std;

int main()  {
    
    string s, t;
    getline(cin, s);
    getline(cin, t);
    int k=0;
    for(int i=0;i<t.size();i++) {
        if(t[i] == s[k])
            k++;
    }
    cout << k+1 << endl;
    return 0;
}