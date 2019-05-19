#include<iostream>

using namespace std;

int main()  {
    char str[101], check[100];
    int count = 1, i, j=1, k;
    cin.getline(str, 101);
    check[0] = str[0];
    for(i=1;str[i]!='\0';i++)  {
        for(k=0;k<j;k++)    {
            if(str[i]!=check[k])
                continue;
            else
                break;
        }
        if(k==j)    {
            check[j] = str[i];
            j++;
            count++;
        }    
    }
    if(count%2==0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    
    return 0;
}