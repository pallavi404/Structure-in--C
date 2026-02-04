#include<stdio.h>
#include<string.h>
struct person{
	char name[20];
	char job_name[20];
	float salary;
	int experience_from;
};
int main(){
	struct person p[8];
	int i=0;
	for(i=0;i<8;i++){
		printf("enter name of %d\n",i);
		scanf("%s",p[i].name);
		printf("enter job name of %d\n",i);
		scanf("%s",p[i].job_name);
		printf("enter salary of %d\n",i);
		scanf("%f",&p[i].salary);
		printf("enter experience from approx in year of %d\n",i);
		scanf("%d",&p[i].experience_from);
	}
	for(i=0;i<8;i++){
		printf("information of %d person is : ",i+1);
		printf("name : %s\n",p[i].name);
		printf("job_name : %s\n",p[i].job_name);
		printf("salary : %f\n",p[i].salary);
		printf("experience of %d\n",p[i].experience_from);
	}
	return 0;
	}
