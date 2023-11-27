#include<stdio.h>
#include<conio.h>
void main(){
int num,n,sum=1;
clrscr();
printf(" enter the value of n:-");
scanf("%d",&n);
for(num=1;num<=5;num++){
printf("%d\n",num);
sum *=num;
}


printf(" sum is%d",sum);
getch();
}
