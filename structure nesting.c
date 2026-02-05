#include<stdio.h>
#include<string.h>
int main(){
	typedef struct pokemon{
		int hp;
		int speed;
		int attack;
		char tier;
		char name[20]; 
	}pokemon;
	typedef struct legendarypokemon{
		pokemon normal;
		char ability[10];
	}legendarypokemon;
	legendarypokemon mewtwo;
	strcpy(mewtwo.ability,"pressure");
	mewtwo.normal.hp = 150;
	mewtwo.normal.attack =90;
	strcpy(mewtwo.normal.name,"jana" );
	mewtwo.normal.tier ='A';
	mewtwo.normal.speed =902;
	printf("HP : %d\n",mewtwo.normal.hp);
	printf("Name : %s\n",mewtwo.normal.name);
	printf("Speed : %d\n",mewtwo.normal.speed);
	printf("Attack : %d\n",mewtwo.normal.attack);
	printf("Tier : %c\n",mewtwo.normal.tier);
	printf("Ability : %s",mewtwo.ability);

}
