#include<iostream>
#include<math.h>

using namespace std;

int main()  {
    int rotations = 0, a = int('a'), first, last;
    string s;
    getline(cin, s);
    for(int i=0;i<s.size();i++) {
        first = fabs(int(s[i]) - a);
        last = 26-first;
        if(first < last)
            rotations+=first;
        else 
            rotations+=last;
        a = int(s[i]);
    }
    cout << rotations << endl;
    return 0;
}