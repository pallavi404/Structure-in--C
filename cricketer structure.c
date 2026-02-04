#include<stdio.h>
#include<string.h>
int main(){
	typedef struct cricketer{
		char name[20];
		int age;
		int test_matches;
		int avg_runs;
	}cri;
	cri arr[20];
	int i=0;
	for(i=0;i<20;i++){
		printf("enter information of %dcricketer\n",i+1);
		printf("enter name of  cricketer \n");
		scanf(" %19[^\n]",arr[i].name);
		printf("enter age of cricketer \n");
		scanf("%d",&arr[i].age);	
		printf("enter no of test matches \n");
		scanf("%d",&arr[i].test_matches);
		printf("enter avg run of cricketer \n");
		scanf("%d",&arr[i].avg_runs);	
	}
	for(i=0;i<20;i++){
		printf("enter information of %dcricketer\n",i+1);
	printf("name : %s",arr[i].name);
	printf("age : %d\n",arr[i].age);
	printf("test_matches : %d\n",arr[i].test_matches);
	printf("avg_runs : %d",arr[i].avg_runs);
	}
}
