#include <stdio.h>
#include <stdlib.h>
void sayHi(char name[],int age ){
    printf("hello %s you are %d years old\n",name,age);
}
int main()
{
   sayHi("Barbra",40);
   sayHi("Maria",23);
   sayHi("Patience",10);
    return 0;
}

