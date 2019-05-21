#include<iostream>

using namespace std;

int main()  {
    string s;
    char temp;
    int i, j;
    getline(cin, s);
    for(i=2;i<s.size();i+=2) {
        j=i;
        temp = s[i];
        while(j>0)  {
            if(s[j-2]>temp)
                s[j] = s[j-2];
            else
                break;
            j-=2;
        }
        s[j]=temp;
    }
    cout << s << endl;
    
    return 0;
}