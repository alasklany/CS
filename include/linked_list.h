#include <iostream>
using namespace std;

template<typename item> 
class linked{
private:
struct node{
    item value;
    node * next;
};
node *head,*tial,*current;
public:
linked();
void insert(item elem);
bool first(item &elem);
bool next(item &elem);
void printall()
{
    item e;
    bool z=first(e);
    while(e)
    {
        cout<<e<<endl;
        z=next(e);
    }
}
};