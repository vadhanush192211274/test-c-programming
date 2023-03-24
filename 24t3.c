#include<stdio.h>
struct worker
{
char name[20];
int wage;
int wdays;
};
int main()
{
struct worker a,b;
printf("Enter Details of First Worker\n");
printf("Enter Worker Name : ");
scanf("%s",a.name);
printf("Enter Wage        : ");
scanf("%d",&a.wage);
printf("Enter wdays       : ");
scanf("%d",&a.wdays);
printf("Enter Details of Second Worker\n");
printf("Enter Worker Name : ");
scanf("%s",b.name);
printf("Enter Wage        : ");
scanf("%d",&b.wage);
printf("Enter wdays       : ");
scanf("%d",&b.wdays);
return 0;
}


output:
Enter Worker Name : xxx
Enter Wage        : 1000
Enter wdays       : 5
Enter Details of Second Worker
Enter Worker Name : bbb
Enter Wage        : 800
Enter wdays       : 6

