#include<stdio.h>
#include<conio.h>
void main(){
int num,n,sum=0;

clrscr();
printf(" enter the value of n=");
scanf("%d",&n);
 for(num=1;num<8;num++){
 printf(" %d\n",num);
 sum= sum+num;


 }
 printf(" sum is %d",sum);
 getch();
 }
