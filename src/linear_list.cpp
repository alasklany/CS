#include "linear_list.h"
bool linear_list::first(T &elm)
 {
     if(n==0)return false ;
     current =0;
     elm=data[0];
     return true;
 }

 bool linear_list::Next(T &elm)
  {
      if(n==0 || (++current==n)) return false;
      elm=data[current];
      return true;
  }


  void linear_list::insert(T elem)          //insert function with input elem
 {
   if(n==MAX_SIZE) {cout<<"list FULL";return;}
    data[n]=elem;
    n++;
    cout<<"inserted succefully"<<endl;
 }
 void linear_list::swap(int i,int j)
 {
     T c;
     c=data[i];
     data[i]=data[j];
     data[j]=c;
 }
 int linear_list::max(int l)
 {
     int m=0;
     for(int i=1;i<l;i++)
     {
         if(data[m]<data[i])
           m=i;
     }
     return m;
  }
  T linear_list::print(int i)
  {
      return data[i];
  }
  int linear_list::get_no_elem()
  {
      return n;
  }
  int linear_list::searchL(T target)
  {
      for(int i=0;i<n;i++)
      if(data[i]==target) return i;
      return -1;
  }
void linear_list::sortL()
{
    int vn=n;
    for(int i=0;i<n-1;i++)
    {
        int m=this->max(vn);
        this->swap(m,vn-1);
        vn--;
    }
    cout<<"sorted successfully"<<endl;
}
int linear_list::searchB(T target)
{
    int F=0,L=n-1,M;
        while(L>=F)
        {
            M=(F+L)/2;
            if(target==data[M]) return M;
            else if(target< data[M]) L=M-1;
            else F=M+1;
        }
        return -1;
}