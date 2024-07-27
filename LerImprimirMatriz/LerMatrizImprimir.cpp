#include <iostream>

using namespace std;

int main(){
	
	int valMatriz = 0;
	int x = 1, y = 1;
	
	//LENDO VALOR DA MATRIZ
	cin >> valMatriz;
	
	int Matriz[valMatriz][valMatriz];
	
	//LENDO MATRIZ
	for(x = 1; true; x++){
		
		cin >> Matriz[x][y];
		
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
	
	//IMPRIMINDO MATRIZ
	for(x = 1; true; x++){
		
		cout << Matriz[x][y];
		
		if(y==valMatriz && x==valMatriz)
			break;
		else if(x==valMatriz){
			x=0;
			y++;
			cout << endl;
		}
		
	}
}
