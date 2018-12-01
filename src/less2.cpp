#include <iostream>
using namespace std;
int main()
{
    int x1, y2;
    char s1;

    cin>> x1 >> s1 >> y2;
    
    if (s1=='+')
    {
        cout<< x1+y2<< endl;
    }else if (s1=='-')
    {
        cout << x1-y2 << endl;
    }else if (s1=='*')
    {
        cout << x1*y2 << endl;
    }else if (s1=='/')
    {
        cout << (float)x1/y2 << endl;
    }else cout<<"syntex error"<<endl;
}