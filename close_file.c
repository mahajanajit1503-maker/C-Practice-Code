#include<stdio.h>
#include<fcntl.h>
#include<unistd.h> 

int main(){
int fd =0;

fd = open(" Marvellous.txt", O_RDWR);

if (fd == -1)
{
  printf(" Enable to open file ");

}
else{
   printf(" file gets opened with fd : %d\n",fd);
}

close(fd);       //.   close the file 


return 0 ;
}