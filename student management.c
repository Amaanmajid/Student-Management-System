#include <stdio.h>
struct student
{
  char name[50];
  int roll;
  float marks;
} s[100];
int
main ()
{
  int i, n, rn;
  struct student s[100];
  
  //Taking student details from user
  
  printf ("Enter total of students:\n");
  scanf ("%d", &n);
  for (i = 0; i < n; i++)
    {
      printf ("\n Enter information of student %d:\n", i + 1);
      printf ("Enter name: ");
      scanf ("%s", s[i].name);
      printf ("Enter roll number: ");
      scanf ("%d", &s[i].roll);
      printf ("Enter marks out of 100: ");
      scanf ("%f", &s[i].marks);
      printf("------------------------------------\n");
    }
    
     //Displaying Information of all student given in input
    
    printf("Displaying Information:\n");
for(i=0;i<n;i++)
{
printf("\n %d. student info\n",i+1);
printf("\tName:%s\n ",s[i].name);

printf("\t Roll number: %d\n",s[i].roll);

printf("\t Marks out of 100: %.1f\n",s[i].marks);

if(s[i].marks<0 || s[i].marks>100)
    {printf("          Wrong Entry\n\n");}
    else if(s[i].marks<50)
    {printf("         Grade : F\n\n");}
    else if(s[i].marks>=50 &&s[i].marks<60)
    {printf("         Grade : D\n\n");}
    else if(s[i].marks>=60 && s[i].marks<70)
    {printf("         Grade : C\n\n");}
    else if(s[i].marks>=70 && s[i].marks<80)
    {printf("         Grade : B\n\n");}
    else if(s[i].marks>=80 && s[i].marks<90)
    {printf("         Grade : A\n\n");}
    else
    {printf("         Grade : A+\n\n");}
    }

//for finding student by Roll number

  printf ("Type Roll number to search student details:\n");
  scanf ("%d", &rn);
  for (i = 0; i < n; i++)
    {
      if (s[i].roll == rn)
	{
	  printf ("\n Record found at position no %d \n", i + 1);
	  printf ("\tName:%s\n ", s[i].name);
	  printf ("\t Roll number: %d\n", s[i].roll);
	  printf ("\t Marks out of 100: %.1f\n\n", s[i].marks);
	}}
  return 0;
}