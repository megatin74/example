#include<stdio.h>
#include"hello.h"
#include"add.h"
int main()
{
      int data;
      hello();
      hellogenivi();   
      
      data = add(3,4);

      printf("Result is %d",data);

      return 0;
}
