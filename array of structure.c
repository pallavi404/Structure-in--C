#include<stdio.h>
#include<string.h>
int main(){
	int i=0;
	typedef struct pokemon{
		char tier;
		int hp;
		int speed;
		int attack;
		char name[20];
	}pokemon;
	pokemon arr[3];
		arr[0].attack = 50;
		arr[0].hp = 500;
		arr[0].speed = 150;
		arr[0].tier = 'A';
		strcpy(arr[0].name,"pikachu");
		arr[1].attack = 520;
		arr[1].hp = 10;
		arr[1].speed = 110;
		arr[1].tier = 'B';
		strcpy(arr[1].name,"mewto");
		arr[2].attack = 350;
		arr[2].hp = 20;
		arr[2].speed = 154;
		arr[2].tier = 'C';
		strcpy(arr[2].name,"charizard");
		for(i=0;i<3;i++){
			printf("name : %s\n",arr[i].name);
			printf("attack : %d\n",arr[i].attack);	
			printf("tier : %c\n",arr[i].tier);
			printf("speed : %d\n",arr[i].speed);
			printf("hp : %d\n",arr[i].hp);
		}
}
