#include<stdio.h>         // 1
int main(){

  printf(" Jay Ganesh");

  return 0;
}

#include<stdio.h>         //2
int main(){

char aj ='A';
int i = 11;
float ma=2.22f;
double d = 12.2222222222;

printf(" size of all variable \n");
printf(" size of character %lu \n",sizeof(aj));
printf("size of integaer %lu \n ",sizeof(i));
printf("size of float %lu \n ",sizeof(ma));
printf("size of  double %lu \n ",sizeof(d));


  return 0;
}

#include<stdio.h>          //3
int main(){

  int i=12;
  const int j = 30;

  printf(" %d \n",++i); //allowed
  printf(" %d \n",++j);  //error

  return 0;
}

#include<stdio.h>         //4
int main(){

  int i=44;
  int j = 44;
  char ch ='A';
  float ma=3.33f;

  i++;
  j--;
  ch++;
  ma++;

  printf(" I: %d \n",i); //45
  printf(" j: %d \n",j); //43
   printf("ch: % \n",ch); //B
    printf(" ma: %f \n",ma); //4.33

  return 0;
}

#include<stdio.h>          //5
int main(){

  int i =11;

  short int j = 33;

  long int k = 22;

  printf(" size of int : %lu \n", sizeof(i)); //4
  printf(" size of shot  int : %lu \n", sizeof(j)); //2
  printf(" size of  long int : %lu \n", sizeof(k)); //8


  return 0 ;

}


                                        
#include<stdio.h>                    //6
int main(){

  int i =11; //  defalt signed 
  unsigned int k =11;  // unsigned we do not put (-) value

 signed int a =11;  //signed - in signed first bit is revesd for positive or negative 
 signed int b = - 11;  //signed - in this first bit is 1 that's why it's negative

  return 0 ;
}


  #include<stdio.h>            //7

  void display(){
    printf (" hi ajit ");    
  }

  int main (){

display(), printf("\n"),display(),display();

    return 0 ;
  }

#include<stdio.h>           //8 parameter 
void Display(int no1, int no2)
{
  printf(" %d %d \n",no1,no2);
}
int main (){

Display(11,21);
Display(33,44);

  return 0;
}

#include<stdio.h>                //9  paramaterX
void Display(int no1, int no2)
{
  printf(" %d %d \n",no1,no2);
}
int main (){

  int a =11, b=21;
Display(a,b);  // call by value 


  return 0;
}

#include<stdio.h>               //10

int Addition( int value1,int value2){
  int ans=0;
  ans = value1 + value2;
  return ans;
}

int main(){

  //1
int a =30 ,b =50 , ret = 0;
ret = Addition(a,b);
printf(" addition of a and b is : %d \n", ret );
  
//2

int aj=0;
aj = Addition(20,30);
printf(" asi bhi ho sakta hai : %d \n", aj);
  return 0;
}


array is a linear data structer 
which hold homogeness element 
in an index formate

#include<stdio.h>              //11
int main (){

  char chalisgoan_arra[3]={'C','S','N'};
  int iArr[4]={1,2,3,4};
  float kay[]={1.1f,3.3f,2.2f,5.5f,6.6f };

printf("size of aaray :%lu \n",sizeof(chalisgoan_arra));
printf("size of aaray :%lu \n",sizeof(iArr));
printf("size of aaray :%lu \n",sizeof(kay));
  return 0 ;
}

#include<stdio.h>             //12
int main (){

  int Arr[4]= {1,2,3,4};
  int Brr[]={12,3,35,4};
  int Crr[4];

Crr[0]=10;
Crr[2]=40;  // we can inilizised like also
Crr[1]=29;

printf("%d \n",Arr[0]);
printf("%d \n",Brr[0]);
printf("%d \n",Crr[0]);

  return 0;
}

pointer - pointer is a cosider as a variable 
        which hold  address of another veriable 

#include<stdio.h>             //13
int main(){
                -w - for error hide
int no=20;
int *p =&no;
int **aj=&p;  // pointer to pointer

printf(" %d \n",no);
printf(" %d \n",p);
printf(" %d \n",*p);
printf(" %d \n",**aj);
printf(" %d \n",aj);
printf(" %d \n",&no);
printf(" %d \n",sizeof(no));
printf(" %d \n",sizeof(p));
printf(" %d \n",sizeof(&no));
printf(" %d \n",sizeof(*p));
printf(" %d \n",sizeof(**aj));
printf(" %d \n",sizeof(aj));


  return 0 ;
}



#include<stdio.h>               //14
int main(){


  int Arr[4]={120,13,14,15};
  int *p =&Arr;
  int *q =&Arr[2];


  printf(" %d \n",Arr);
  printf(" %d \n",p);
  printf(" %d \n",*p);
  printf(" %d \n",q);
  printf(" %d \n",*q);

  return 0;
}

#include<stdio.h>            //15

int ajit(){

  printf(" this is a ajit birth date : ");
  return 1503;
}
int main(){

int maha =0 ;

maha = ajit();
printf(" %d \n",maha);

  return 0;
}




#include<stdio.h>       //16

struct Ajit{
int i ;      // characterstics 
int a ;
int s ;
float f;

};

int main(){
struct Ajit amahajan;   // object declearation 
                         memory allocate object not characterstics                
  printf("%lu \n",sizeof(amahajan));

  return 0; 
}


#include<stdio.h>       // 17 padding
struct Demo
{
      int i;//4
    char ch;//1 // generate padding
    float f;//4
    
};

int main(){

struct Demo dobj;

printf("%lu\n",sizeof(dobj));  //12 bec. of padding

  return 0;
}

#include<stdio.h>                //18
#pragma pack(1)
//Declaration
  struct Demo{

    int i;//4
    char ch;//1 // not generate padding bec. of pragma 
    float f;//4
    
  };//9
int main(){
struct Demo dobj;

printf("%lu\n",sizeof(dobj));  

  return 0;
}


# include <stdio.h>         // 19
struct Demo
{
  int i;
  char ch;
  float f;

};

int main(){                 
 struct Demo dobj;

 dobj.i=20;
dobj.ch='A';
dobj.f = 3.33f;

printf(" %d \n",dobj.i);
printf(" %c \n",dobj.ch);
printf(" %f \n",dobj.f);


  return 0;
}

#include<stdio.h>          //20 structer array

struct Mom{
float f;
int i;
int Arr[4];

};
int main(){
  
  struct Mom mobj;

  printf("size is all object :%lu \n ",sizeof(mobj));


mobj.Arr[0]=22;
mobj.Arr[1]=33;

mobj.i=9000;
mobj.f=3.1223f;


printf("%f\n",mobj.f);

printf("%d \t %d \t %d \t %d \n", mobj.Arr[0],mobj.Arr[1],mobj.Arr[2],mobj.i);

  return 0;
}




