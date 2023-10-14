#include <iostream>
#include <string>

using namespace std;

// Funcion recursiva para calcular el factorial de un numero
int factorial(int n) 
{
    if (n == 0) 
    {
        return 1;
    } 
    else 
    {
        return n * factorial(n - 1);
    }
}

// Funcion para calcular el valor de m!/n!(m-n)!
int division_factorial(int m, int n) 
{
    int numerador = factorial(m);
    int denominador = factorial(n) * factorial(m - n);
    return numerador / denominador;
}
int permutaciones(int n, int r){
    int p=1;
    for(int i=n; i > n-r; i--){
        p *=i;
    }
  
    
    return p;

}
int trianguloPascal(int n, int k){
   if (k == 0 || k == n) {
        return 1;
    } else {
        return trianguloPascal(n - 1, k - 1) + trianguloPascal(n - 1, k);
    }

}
int main() 
{
    int m, n, op, resultado, r, coeficiente;
   
    do 
    {
        cout << "Ingrese opcion: " << endl
        << "1.Combinaciones" << endl
        << "2. permutaciones " << endl
        << "3. triangulo Pascal " << endl
        << "0. Salir" << endl;
        
       
        cin >> op;

        switch (op) 
        {
            case 1:
                cout << "Ingrese el valor de m: ";
                cin >> m;
                cout << "Ingrese el valor de n: ";
                cin >> n; 
                // Calculo de m!/n!(m-n)! y presentacion del resultado
                 resultado = division_factorial(m, n);
                cout << "El valor de m!/n!(m-n)! es: " << resultado << endl;
                break;
            case 2:
                cout << "Ingrese el valor de n: ";
                cin >> n;
                cout << "Ingrese el valor de r: ";
                cin >> r; 
                resultado = permutaciones(n, r);
                cout << "El valor de p(n,r)=n!/(n-r)! es: " << resultado << endl;

            break;
            case 3:
                cout << "Ingrese el valor de n: ";       
                cin >> n;
				if(n<=10){ 
				for (int i = 0; i < n; i++) {
                // Agregar espacios para la alineacion
                for (int j = 0; j < n - i; j++) {
                    cout << " ";
                }
                for (int j = 0; j <= i; j++) {
                     coeficiente = trianguloPascal(i, j);
                    cout << coeficiente << " ";
                }

        cout << endl;
				}
    }else{
    cout << "ingrese un numero menor a 10\n";
	}

            break;
            case 0:
                cout << "*GRACIAS POR USAR NUESTRO PROGRAMA*" << endl;
                break;
            default:
                cout << "Ingresa una opcion valida" << endl;
        }
       

    } while (op != 0);

    return 0;
}
