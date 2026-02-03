#include<stdio.h>
struct pokemon{
	int hp;
	int attack;
	int speed;
	char tier;
};
int main(){
	struct pokemon pikachu;
	pikachu.hp = 90;
	pikachu.speed = 80;
	pikachu.attack =30;
	pikachu.tier= 'w';
	printf("%d",pikachu.attack);
	struct pokemon charizard;
	charizard.hp = 99;
	charizard.speed = 83;
	charizard.attack =32;
	charizard.tier = 'a';
}
