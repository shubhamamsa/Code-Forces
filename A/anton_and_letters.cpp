#include<iostream>
#include<string.h>
using namespace std;

int main()  {
    char s[1001];
    cin.getline(s, 1001);
    int count=0;
    int len = strlen(s);
    for(int i=1;i<len;i+=3) {
        if((s[i]>='a' && s[i]<='z')) {
            count++;
            for(int j=i+3;j<len;j+=3) {
                if(s[i] == s[j])
                    s[j] = '#';
            }
        }
    }
    cout << count;
    return 0;
}