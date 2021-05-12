#include<stdio.h>
#include<conio.h>

void main()
{
int A[20];
int i,j,n;
int s1=0,s2=0,o;
char c;
clrscr();

again:
printf("\n\nEnter number of elements <  = 20 :-\n");
scanf("%d",&n);

if(n>20)
{
printf("\nEnter number of elemnent in a range");
goto exit;
}

printf("\n");
for(i=0;i<n;i++)
{
printf("Enter element of A[%d] th of array\n",i);
scanf("%d",&A[i]);
}
printf("\n");

for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(A[j]>A[j+1])
{
s1=A[j];
A[j]=A[j+1];
A[j+1]=s1;
}
}
}
printf("\nArray after sorting in Ascending order:- \n");
for(i=0;i<n;i++)
{
printf("A[%d] = %d \n",i,A[i]);
}

for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(A[j]<A[j+1])
{
s2=A[j];
A[j]=A[j+1];
A[j+1]=s2;
}
}
}

printf("\nArray after sorting in Descending order:-  \n");
for(i=0;i<n;i++)
{
printf("A[%d] = %d \n",i,A[i]);
}

printf("\n\nIf yoy want to do it once again with other array.\n");
printf("Y for Yes,I want to try again \nN for No,I want to exit.\n\n");
scanf("%s",&c);

if(c=='Y' | c=='y')
{
printf("Sure..");
goto again;
}
else if(c=='N' | c=='n')
{
printf("Thank you..");
goto exit;
}
exit:
getch();
}
