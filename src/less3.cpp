#include <iostream>
using namespace std;
int main()
{
    int x1, y2;
    char s1;

    cin>> x1 >> s1 >> y2;
    switch(s1)
    {
        case '+':{cout<< x1+y2<< endl; break;}
        case '-':{cout<< x1-y2<< endl; break;}
        case '*':{cout<< x1*y2<< endl; break;}
        case '/':{cout<< x1/y2<< endl; break;}
        default :{ cout<<"syntex error"<<endl;}
    } 
    
}
    
  