#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct library
{
char book_name[30];
char author[30];
int pages;
float price;
};
int main()
{
struct library l[100];
char ar_nm[30];
char bk_nm[30];
int i,j,count;
i=j=count = 0;
while(j!=6)
{
printf("1. Add book information\n");
printf("2. Display book information\n");
printf("3. List all books of given author\n");
printf("4. List the title of specified book\n");
printf("5. List the no of books in the library\n");
printf("6. Exit");
printf ("\n\nEnter one of the above : ");
scanf("%d",&j);
switch (j)
{
case 1:
printf ("Enter book name = ");
scanf ("%s",l[i].book_name);
printf ("Enter author name = ");
scanf ("%s",l[i].author);
printf ("Enter pages = ");
scanf ("%d",&l[i].pages);
printf ("Enter price = ");
scanf ("%f",&l[i].price);
count++;
break;
case 2:
printf("you have entered the following information\n");
for(i=0; i<count; i++)
{
printf ("book name = %s",l[i].book_name);
printf ("\t author name = %s",l[i].author);
printf ("\t pages = %d",l[i].pages);
printf ("\t price = %f",l[i].price);
}
break;
case 3:
printf ("Enter author name : ");
scanf ("%s",ar_nm);
for (i=0; i<count; i++)
{
if (strcmp(ar_nm, l[i].author) == 0)
printf ("%s %s %d %f",l[i].book_name,l[i].author,l[i].pages,l[i].price);
}
break;
case 4:
printf ("Enter book name : ");
scanf ("%s",bk_nm);
for (i=0; i<count; i++)
{
if (strcmp(bk_nm, l[i].book_name) == 0)
printf ("%s \t %s \t %d \t %f",l[i].book_name,l[i].author,l[i].pages,l[i].price);
}
break;
case 5:
printf("\n No of books in library : %d", count);
break;
case 6:
exit (0);
}}
return 0;
}
