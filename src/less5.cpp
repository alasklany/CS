#include <iostream>
using namespace std;
int main()
{
int x=9,y=6,z;
int *px,*py,*pz;
px=&x;
py=&y;
pz=&z;
*pz= *px + *py ;
px=(int *)10;
cout<<*pz<<endl;
cout<<px<<endl;

    return 0;
}