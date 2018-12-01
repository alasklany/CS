#include "linked_list.h"
void help()
{
    cout<<"wellcom in our database, press"<<endl;
    cout<<"1-insert"<<endl;
    cout<<"2-serach linear"<<endl;
    cout<<"3-serach binary"<<endl;
    cout<<"4-printall"<<endl;
    cout<<"5-sort"<<endl;
    cout<<"0-exit"<<endl;
}



int main()
{
linked<int> list;
list.insert(50); list.insert(15); list.insert(125); list.insert(3); list.insert(2); 
list.insert(9);list.insert(25);list.insert(205);list.insert(22); 
 int e;
bool z=true;
help();
int polling;
while(z)
{
    cout<<"command: ";
    cin>>polling;
    switch(polling) 
    {
        case 0 :{z=false; break;}
        case 1 :{cout<<"elment=";cin>>e; list.insert(e); break;}
        //case 2 :{cout<<"target=";cin>>e; cout<<list.searchL(e)<<endl; break;}
        //case 3 :{cout<<"target=";cin>>e; cout<<list.searchB(e)<<endl; break;}
        //case 4 :{for(int i=0;i<list.get_no_elem();i++)cout<<list.print(i)<<endl; break; }
        case 4 :{list.printall();break;}
        //case 5 :{list.sortL();break;}
        case 6 :{help();break;}
        default :{cout<<"press 6 for help"<<endl;}
    }
    cout<<"-----------------------------------------------"<<endl;
}

return 0;
}