#include "linked_list.h"

template<typename item> linked<item>::linked()
{
   head=0; tail=0; current=0;
}
template<typename item> void linked<item>::insert(item elem)
{
 node *p=new node;
  p->value=elem;
  p->next=0;
  if(head==0)
  {
      head=p;
  }
  else {
      tail->next=p;
  }
  tail=p;

}
template<typename item> bool linked<item>::first(item &elm)
{
    if(head==0) return false;
    elm=head->value;
    current=head;
    return true;

}
template<typename item> bool linked<item>::next(item &elm)
{
    if(head==0 || cureent==tial) return false;
    current=current->next;
    elem=current->value;
}