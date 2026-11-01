#include<stdio.h>
int Addition(int no1, int no2)
{ int Ans =0;
  Ans = no1+no2;
 
   return Ans;
}
int main (){
  
//1 
int a=11,  b=33;
int ret=0;
ret = Addition(a,b);
printf(" addition is : %d \n ", ret);


// 2 
int shr=0;
shr = Addition(40,60);

printf(" addition is : %d \n ", shr);

  return 0;
}