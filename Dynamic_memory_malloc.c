#include<stdio.h>
#include<stdlib.h> // this is is  


int main(){


  int size =0;
  float *Marks=NULL;



  printf(" Emter no. of element  : \n");
  scanf("%d",&size);


  //static memory allocation
  //float Marks[5]; //20 bytes

 // Dynamic memory aallocation 
 Marks = (float * )malloc(size *sizeof(float));



  int i =0; // loop counter 

  printf("Enter Marks : \n");
  //iteration 
  //.    1.     2.     3
  for ( i = 0; i < size; i++)
  {
   scanf("%f",&Marks[i]);  // 4
  }
  
  printf("Enter marks are : \n");

  for ( i = 0; i < size ; i++)
  {
    printf("%f \n",Marks[i]);
  }
  
  free(Marks);

  return 0;
}