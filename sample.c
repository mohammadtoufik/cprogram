#include<stdio.h>
int main()
{
	int n,i,avg;
	struct students
	{
	  int rollno,eng,maths,sci,sst,hin,kan;
	  char name[20];
	  float avg;
	};
	struct students s[20];
	printf("enter the number of students");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter student %d details:",i+1);
		printf("enter roll number");
		scanf("%d",&s[i].rollno);

		printf("enter student name:");
		scanf("%s",s[i].name);

		printf("enter marks scored in english");
		scanf("%d",&s[i].eng); 
		printf("enter marks scored in maths");
		scanf("%d",&s[i].maths); 
		printf("enter marks scored in science");
		scanf("%d",&s[i].sci); 
		printf("enter marks scored in social science");
		scanf("%d",&s[i].sst); 
		printf("enter marks scored in hindi");
		scanf("%d",&s[i].hin); 
		printf("enter marks scored in kannada");
		scanf("%d",&s[i].kan);
	}
	
	for(i=0;i<n;i++);
	{
		s[i].avg=s[i].eng + s[i].maths + s[i].sci + s[i].sst + s[i].hin + s[i].kan/6;
	}
	printf("enter the average marks");
	scanf("%d",&avg);

	for(i=0;i<n;i++);
	{
		if(s[i].avg>avg)
		{
		 printf("student scored above average\n");
		 printf("%s\n",s[i].name);
		}
		else
		{
			printf("student scored below average\n");
			printf("%s\n",s[i].name);
		}
	}
	return 0;
}












 
		
