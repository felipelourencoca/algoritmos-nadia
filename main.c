#include "stdio.h";
#include "stdlib.h";



int main(int argc, char const *argv[])
{
    /* code */
    int *p;
    p = malloc(sizeof(int) * 4 );
  
    printf("%p %n", p , *p);
    
    return 0;
}
