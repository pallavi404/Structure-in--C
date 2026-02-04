#include<stdio.h>
#include<string.h>
struct book{
	char book_name[50];
	float price;
	int no_of_pages;
}a,b,c;
int main(){
	printf("enter book 1 name : \n");
	scanf(" %[^\n]",a.book_name);
	printf("enter book 2 name : \n");
	scanf(" %[^\n]",b.book_name);
	printf("enter book 2 name : \n");
	scanf(" %[^\n]",c.book_name);
	printf("enter price of book 1 : \n");
	scanf("%f",&a.price);
	printf("enter price of book 2 : \n");
	scanf("%f",&b.price);
	printf("enter price of book 3 : \n");
	scanf("%f",&c.price);
	printf("enter no of pages in book 1 : \n");
	scanf("%d",&a.no_of_pages);
	printf("enter no of pages in book 2 : \n");
	scanf("%d",&b.no_of_pages);
	printf("enter no of pages in book 3 : \n");
	scanf("%d",&c.no_of_pages);
}
