#include<stdio.h>
#define pi 3.14
#define area(r)(pi*r*r)
int main(){
	float circle;
	int ra=10;
	circle = area(ra);
	printf("%f",circle);
}
