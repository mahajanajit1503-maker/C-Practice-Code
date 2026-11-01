#include<stdio.h>
int Addition(int no1, int no2)
{ int Ans =0;
  Ans = no1+no2;
 
   return Ans;
}
int main (){
  
//1 
int a=0,  b=0;
int ret=0;

printf(" ENTER FIRST NO.");
scanf("%d",&a);

printf(" ENTER SECOND NO.");
scanf("%d",&b);

ret = Addition(a,b);
printf(" addition is : %d \n ", ret);




  return 0;
}