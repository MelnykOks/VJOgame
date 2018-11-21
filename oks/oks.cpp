#include <iostream>
#include "stdafx.h"



using namespace std;


bool gameOver;
int width = 20;
int height = 20;
double x, y, fruitX, fruitY, score;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;

void Setup(){
	gameOver = false;
	dir = STOP;
	x = width / 2;
	y = height / 2; 
	fruitX = rand() % width;
	fruitX = rand() % height;
	score = 0;
}
/*new  repozitory named as VJOgame*/
void Draw(){
	system("cls"); // sytem("clear");
	for (int i = 0; i < width; i++)
		cout << "#";
	cout << endl;

	for (int i = 0; i < height; i++){
		for (int j = 0; j < width; j++){
			if (j == 0 || j == width -1)
				cout << "#";
			cout << " ";
		}
		cout << endl;
	}
	
	for (int i = 0; i < width; i++)
		cout << "#";
	cout << endl;
}

void Input(){
}

void Logic(){
}
int main() {
	Setup();
	while (!gameOver){
		Draw();
		Input();
		Logic();
	}
	return 0;
}