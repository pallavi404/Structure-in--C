#include<stdio.h>
#include<string.h>
typedef struct students{
	char name [20];
	int roll_no;
	char department[20];
	char course[10];
	int year;
}stu;
void department(stu s[],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(s[i].department,s[j].department)==0){
				printf("%s \t %s",s[i].name,s[j].name);
			}
		}
	}
}
int main(){
	int n;
	printf("enter n : ");
	scanf("%d",&n);
	stu arr[n];
	int i=0;
	for(i=0;i<n;i++){
		printf("enter information of %d student\n",i+1);
		printf("enter name : \n");
		scanf("%s",arr[i].name);
		printf("enter roll_no : \n");
		scanf("%d",&arr[i].roll_no);
		printf("enter department : \n");
		scanf("%s",arr[i].department);
		printf("enter course : \n");
		scanf("%s",arr[i].course);
		printf("enter year of joining : \n");
		scanf("%d",&arr[i].year);
	}
	department(arr,n);
}
