#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main(){
	
	int valMatriz = 0;
	int x = 1, y = 1;
	
	//LENDO VALOR DA MATRIZ
	cout << "Insira o valor da Matriz: ";
	cin >> valMatriz;
	
	int Matriz[valMatriz][valMatriz];
	
	//LENDO MATRIZ
	for(x = 1; true; x++){
		
		if(x==1)
		system("cls");
		
		cout << "Insira o valor[" << x << "][" << y << "]: ";
		cin >> Matriz[x][y];
		cout << endl;
		
		if(y==valMatriz && x==valMatriz)
			break;
		else if(x==valMatriz){
			x=0;
			y++;
		}
		
	}
	
	//REINICIANDO VARIÁVEIS
	x = 1;
	y = 1;
	
	system("cls");
	
	//IMPRIMINDO MATRIZ
	for(x = 1; true; x++){
		
		if(x==1)
			cout << "| ";
		
		cout << Matriz[x][y];
		
		if(x==valMatriz)
			cout << " |";
				else
					cout << "  ";
		
		if(y==valMatriz && x==valMatriz)
			break;
		else if(x==valMatriz){
			x=0;
			y++;
			cout << endl;
		}
		
	}
	// 11 21 31
	// 12 22 32
	// 13 23 33
	//CALCULANDO DETERMINANTE
	int Determinante = ((Matriz[1][1]*Matriz[2][2]*Matriz[3][3]) + (Matriz[2][1]*Matriz[3][2]*Matriz[1][3]) + (Matriz[3][1]*Matriz[1][2]*Matriz[2][3])) - ((Matriz[3][1]*Matriz[2][2]*Matriz[1][3]) + (Matriz[1][1]*Matriz[3][2]*Matriz[2][3]) + (Matriz[2][1]*Matriz[1][2]*Matriz[3][3]));
	cout << "\nDeterminante: " << Determinante;
	_getch();
}
