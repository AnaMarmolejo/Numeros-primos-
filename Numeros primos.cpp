//imprimir en pantalla un numero primo 
//*Ana Rosa Marmolejo Cervantes 22110082


#include<iostream>   
using namespace std;

bool primo(int n) {    //funcion de tipo bool que llamamos primo y parametro un valor de tipo entero llamado n (lo ingresa el usuario)
	bool condition{};   //variable de tipo bool llamada condition
	if (n != 1 && n != 0) {   //siempre y cuando n sea distinto de uno y n sea distinto de 0 

		for (int i = 2; i <= n; i++) {   //variable entera llamada i que vale 2 y con la condicion de que i sea igual o menor que n, agregamos el i++
			if (n % i == 0) {           //si la variable n resulta divisible entre el valor de i (valga 0)
				if (n == i) {           //si n resulta ser igual que i entonces n es primo 
					condition = true;    
				}
				else {
					condition = false;
					return condition;
				}
			}
		}
	}
	else condition = false;  //en caso que sea 0 o el 1 es falso asi ya no hace todo el proceso
	return condition;
}



int main() {
	int opc{};
	int n;
	string respuesta;

	do{
		system("cls");
		cout << " *****Bienvenido al programa de buscar numeros primos*****\n\n";
	cout << "Hasta que numero deseas buscar: " << endl;
	cin >> n;

	system("cls");

	for (int i = 1; i <= n; i++) {          // creando numero entero llamado i, lo creamos de 1 hasta que sea igual o menor a n. Incremento de 1 en 1
		if (primo(i)) cout << i << endl;    //funcion primo que actue sobre la variable i y si es primo que se imprima
	}                                       // si es falso el if no va a imprimir nada
	
		cout << "Quieres utilizar otro numero? (S/N)? ";
		cin >> respuesta;
}while (respuesta == "S" || respuesta == "s" || respuesta == "si" || respuesta == "Si" || respuesta == "SI");

cout << "\n-------------Gracias por usar el programa :3-----------\n\n";

return 0;
}