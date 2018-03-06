#include<iostream>
#include<conio.h>
using namespace std;
bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;
void Setup() {
	gameOver = false;
	dir = STOP;
	x = width / 2;
	y = height / 2;
	fruitX = rand() % width;
	fruitY = rand() % height;
	score = 0;
}
void Draw() {
	system("cls");
	for (int i = 0; i <= width; i++) {
		cout << "#";
	}
	cout << endl;

	for (int i = 0; i <= height; i++) {
		for (int j = 0; j <= width; j++) {
			if (j == 0) {
				cout << "#";
			}
			if (i == y && j == x) {
				cout << "0";
			}
			else if (i == fruitY && j == fruitX) {
				cout << "f";
			}
			else {
				cout << " ";
			}
			if (j == width - 1) {
				cout << "#";
			}
		}
		cout << endl;
	}


	for (int i = 0; i <= width; i++) {
		cout << "#";
	}
	cout << endl;
	cout << "Score: " << score << endl;
}
void Input() {
	if (_kbhit()) {
		switch (_getch()) {
		case 'a': dir = LEFT;
			break;
		case'w':dir = UP;
			break;
		case's': dir = DOWN;
			break;
		case'd': dir = RIGHT;
			break;
		case'x': gameOver = true;
			break;
		}
	}
}
void Logic() {
	switch (dir) {
	case LEFT: x--;
		break;
	case RIGHT: x++;
		break;
	case UP: y--;
		break;
	case DOWN: y++;
		break;
	default: break;
	}
	if (x > width || x < 0 || y > height || y < 0) {
		gameOver = true;
	}
	if (x == fruitX && y == fruitY) {
		score += +10;
		fruitX = rand() % width;
		fruitY = rand() % height;
	}
}
int main() {
	Setup();
	while (!gameOver) {
		Draw();
		Input();
		Logic();
	}
	return 0;
}