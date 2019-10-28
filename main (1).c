#include <stdio.h>
#include <unistd.h>

int main()
{

int sayi;
printf("Sayıyı girin:");
scanf("%d",&sayi);
int pid;
pid=fork();


if(pid>0){
   wait(NULL);
}
if(pid==0){
while(sayi>1){
   if(sayi%2==0){
       sayi=sayi/2;
       printf("%d-",sayi);
   }
   else{
       sayi=(3*sayi)+1;
       printf("%d-",sayi);
   }
}
}
if(pid<0){
    printf("error");
}

}