#include "linear_list.h"

int main()
{
    linear_list list;
    linear_list *p;
    int v=9;
    int *l;

    p=&list;
    l=&v;

    cout<<*l<<endl;
    p->sortL();
    return 0;
}