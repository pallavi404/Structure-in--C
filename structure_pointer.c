#include<stdio.h>
struct book{
	char book[20];
	char author[20];
	int call_no;
};
void display(struct book* b1){
	printf("%s %s %d",b1->book,b1->author,b1->call_no);
}
int main(){
	struct book b1 ={"let us c","yrk",1001	};
	display(&b1);
	return 0;
}

