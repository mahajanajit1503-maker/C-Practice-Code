#include<stdio.h>
int main (){

char cArr[4]= {'a','b','c','d'};
int iArr[4]={10,20,30,40};
float fArr[4]={3.23f,44.5f,90.7f,60.8f};
double darr[4]={10.0,20.0,30.0,40.0};


printf(" size of character array :%lu \n",sizeof(cArr));
printf(" size of integer array :%lu \n",sizeof(iArr));
printf(" size of float array :%lu \n",sizeof(fArr));
printf(" size of double array :%lu \n",sizeof(darr));



  return 0 ;
}