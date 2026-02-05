#include<stdio.h>
#include<string.h>
typedef struct pokemon{
	int hp;
	int attack;
	int speed;
	char tier;
	char name[20];
}pokemon;
	void fun(pokemon poke){
		printf("%d\n",poke.hp);
		printf("%d\n",poke.attack);
		printf("%d\n",poke.speed);
		printf("%c\n",poke.tier);
		printf("%s\n",poke.name);
	}
int main(){
	pokemon p;
	p.hp =90;
	p.attack =9;
	p.speed =4;
	p.tier = 'A';
	strcpy(p.name,"Pallavi");
	fun(p);
}
