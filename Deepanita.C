#include<stdio.h>
void main()
{
int a[5]={8,3,9,7},i,key=3,flag=0, n=5,location;
printf("\n print given array\n");

for(i=0;i<n;i++)
printf("\t a[%d]=%d",i,a[i]);
printf("\n the key value =%d",key);
for(i=0;i<5;i++)
{
if(key==a[i])
flag=1;
location=i;
break;
}
if(flag==1)
printf("successfully search at a[%d]\n",location);
else
printf("\n unsuccessful search elementnot found");
}