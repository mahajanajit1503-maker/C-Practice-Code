#include<stdio.h>

int no =11;  //global varable (DATA)

void fun(){ 
 int i =71; // local variable (stack)
 printf(" inside fun :%d\n",i); //71
 printf(" inside fun :%d\n",no); //11

}

int main (){

  int i =21; // local variable

 printf(" inside main :%d\n",i); //21
 printf(" inside main :%d\n",no); //11

 fun();

  return 0 ;
}
