#include<stdio.h>
#include<conio.h>
int main(void)
{
clrscr(); 
charstr[50];
int i,count=0;
printf("enter the sentence:");
scanf("%[^\n]s",str);
for(i=0;str[i]!='\0';i++)
{
count=count+1;
}
for(i=0;str[i]!='\0';i++)
{
if(str[i]=='') 
{
count=count-1;
}
}
printf("\n the number of characters in the linear:%d",count);
return0;
}
