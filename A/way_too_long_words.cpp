#include<iostream>

using namespace std;

int main()  {
    int n;
    string s;
    cin >> n;
    cin.ignore();
    for(int i=0;i<n;i++)    {
        getline(cin, s);
        if(s.size()>10)
            cout << s[0]<<s.size()-2<<s[s.size()-1] << endl;
        else
            cout << s << endl;
        
    }
    
    return 0;
}