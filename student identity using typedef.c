#include<stdio.h>
#include<string.h>
typedef struct student{
	char name[20];
	int roll_no;
	char section;
	float RTU_Marks;
}s;
//now we can use s instaed of using struct
int main(){
	s stu[9];
	int i=0;
	for(i=0;i<9;i++){
		printf("enter name of student %d : \n",i+1);
		scanf(" %[^\n]",stu[i].name);
		printf("enter roll_no of student %d : \n",i+1);
		scanf("%d",&stu[i].roll_no);
		printf("enter section of student %d : \n",i+1);
		scanf(" %c",&stu[i].section);
		printf("enter marks obtain of student %d : \n",i+1);
		scanf("%f",&stu[i].RTU_Marks);
	}
	printf("information : \n");
	for(i=0;i<9;i++){
		printf("information of %d student : \n",i+1);
		printf("name : %s\n",stu[i].name);
		printf("section : %c\n",stu[i].section);
		printf("roll_no : %d\n",stu[i].roll_no);
		printf("marks obtain : %f\n",stu[i].RTU_Marks);
	}
	return 0;
}
