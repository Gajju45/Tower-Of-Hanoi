//Tower of Hanoi
#include<stdio.h>
#include<conio.h>
void TOH(int,char,char,char);   int n;
void main()
{
clrscr();
printf("Enter number of disc=");
scanf("%d",&n);
printf("Sequence Of Disc\n");
TOH(n,'A','C','B');
getch();
}
void TOH(int n, char BEG , char AUX , char END)
{
if(n>=1)
{
TOH(n-1,BEG,END,AUX);
printf("Move Disc %d from %c to %c \n",n,BEG,END);
TOH(n-1,AUX,BEG,END);
}
}
