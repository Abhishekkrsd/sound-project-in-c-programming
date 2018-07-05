#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int a;
clrscr();
for(a=1;a<=20;a++)
{
printf("%d",a);
sound(a*100);
delay(1000);
}
nosound();
getch();
}