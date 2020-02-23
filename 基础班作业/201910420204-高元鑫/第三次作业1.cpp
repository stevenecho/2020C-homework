#include<stdio.h>
typedef struct Student
{    
 char name[10];
 char stu_id[15];
 int age;
 char sex[5];
 }student;
student*find_id(char id[],student stus[],int num)
{   
 int i,j;
   for(i=0;i<num;i++); 
      scanf("%c",&id);
      for(j=0;j<num;j++);
      {
		if(student stus[j]==id);
      {
	   printf("true");
      }
      else printf("NULL");
      }
 }
