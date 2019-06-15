#include<iostream>
#include<ctype.h>

using namespace std;

int main()  {
    char str1[101], str2[101];
    cin.getline(str1, 101);
    cin.getline(str2, 101);
    for(int i=0;str1[i]!='\0';i++)  {
        str1[i] = toupper(str1[i]);
        str2[i] = toupper(str2[i]);
        if(str1[i] > str2[i])   {
            cout << 1 << endl;
            return 0;
        }
        else if(str1[i] < str2[i])  {
            cout << -1 << endl;
            return 0;
        }
        else
            continue;
    }
    cout << 0 << endl;
    return 0;
}