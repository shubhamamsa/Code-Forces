#include<iostream>

using namespace std;

int main()  {
    char str[101];
    cin.getline(str, 101);   
    int lower=0, upper = 0;
    for(int i=0;str[i]!='\0';i++)   {
        if(isupper(str[i]))
            upper++;
        else if(islower(str[i]))
            lower++;
    }
    if(lower>=upper)
        for(int i=0;str[i]!='\0';i++)
            str[i] = tolower(str[i]);
    else
        for(int i=0;str[i]!='\0';i++)
            str[i] = toupper(str[i]);
    cout << str;
    return 0;
}
