#include<iostream>
#include<conio.h>
using namespace std;

enum eDirection{ UP, DOWN };
eDirection dir;
int a=1, b=0;

void Draw(){
	system("cls");
	for (int y = 0; y < 15; y++){
		for (int x = 0; x < 3; x++){
			if (x == 0 || x == 2){
				cout << '#';
			}if (a == x&&b == y){
				cout << 'C';
			}
			else{
				cout << ' ';
			}
		}
		cout << endl; 
	}

}

void Car(){
	dir = DOWN;
	switch (dir){
	case UP: b--;
		break;
	case DOWN: b++;
		break;
	}
}

int main(){
	while (int g = 1){
		Draw();
		Car();
	}
	system("pause");
	return 0;
}