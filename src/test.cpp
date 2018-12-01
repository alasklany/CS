/***************************** memory_calloc.cpp *******************************/

// Include memory allocation functions #define STRING_LENGTH 20
#include<iostream>
#include<malloc/malloc.h>
using namespace std;
#define STRING_LENGTH 20
int main () 
{
char * c = (char*) calloc(STRING_LENGTH,sizeof(char)); 
printf ("calloc address of c:%p\n",c); 
printf ("malloc_size(c):%lu\n",malloc_size(c));
printf ("malloc_good_size(STRING_LENGTH):%lu\n",malloc_good_size(STRING_LENGTH));
free (c);
return 0;
}