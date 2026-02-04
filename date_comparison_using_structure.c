#include<stdio.h>
#include<string.h>
int main(){
	typedef struct date{
		int date;
		int month;
		int year;
		
	}date;
	int i=0;
	date arr[2];
	for(i=0;i<2;i++){
		printf("about %dst date : \n",i+1);
		printf("enter date : \n");
		scanf("%d",&arr[i].date);
		printf("enter year : \n");
		scanf("%d",&arr[i].year);
		printf("enter month : \n");
		scanf("%d",&arr[i].month);
	}
	
		if(arr[0].date == arr[1].date) printf("date equal\n");
		else printf("date unequal\n");
		if(arr[0].month == arr[1].month) printf("month equal\n");
		else printf("month unequal\n");
		if(arr[0].year == arr[1].year) printf("year equal\n");
		else printf("year unequal");
	
}
