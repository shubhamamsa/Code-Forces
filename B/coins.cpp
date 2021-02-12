#include<iostream>
 
using namespace std;
 
int main()  {
    string s;
    int pos[3], x, y;
    pos[0] = pos[1] = pos[2] = 0;
    for(int i=0;i<3;i++)    {
        getline(cin, s);
        x = int(s[0])-65;
        y = int(s[2])-65;
        if(s[1] == '>')
            pos[x] ++;
        else
            pos[y] ++;
    }
    if(pos[0] == pos[1])
        cout << "Impossible";
    else    {
        for(int i = 0;i<3;i++)  {
            for(int j=0;j<3;j++)    {
                if(pos[j] == i)
                    cout << char(j+65);
            }
        }
    }
}
