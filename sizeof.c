#include<stdio.h>
int main (){

char ch ='A';
int i = 11;
float f =99.99f;
double d = 78.67890;

 printf(" sizeof all  variabl \n");

printf("%lu \n ", sizeof(ch)); // 1 byte ->8 bit 
printf("%lu \n", sizeof(i)); //4
printf("%lu \n",sizeof(f));  //4
printf("%lu \n",sizeof(d));   //8 



// char ach = 'A';
// int aj = 20;
// float shr = 22.15;
// double sh = 22.22222244444;


// printf("%f\n",shr);
// printf("%lu \n",sizeof(ach));
// printf("%d \n",sizeof(aj));
// printf("%lu \n",sizeof(shr));
// printf("%lu \n",sizeof(sh));

  return 0 ;
}