//Programa de C++ que calcula e^x utilizando recursion - Usando las series de Taylor
//Andres Felipe Burbano Hernandez
#include <iostream>
#include <iomanip>
#include <windows.h>


using namespace std;

double Recursion(int x, int n)
{
    static double Potencia = 1, Factorial = 1;
    double Constante;

    // Condicion de terminacion
    // Termination condition
    if (n == 0)
        return 1;

    // Llama la recursion AKA para calcular la Constante
    // Call the AKA recursion to calculate the constant
    Constante = Recursion(x, n - 1);

    // Actualiza la potencia de X
    // Update the power X

    Potencia = Potencia * x;

    // Factorial
    Factorial = Factorial * n;

    // Regresa el calculo de la seria de Taylor
    // Return the calculation of the Taylor series
    return (Constante + Potencia / Factorial);
}


int main()
{
 

    int n;
    int x;
    int precision;
    cout << "Ingrese el valor de x" << endl;
    cin >> x;
    cout << "Ingrese el valor de n" << endl;
    cin >> n;
    cout << "Ingrese la cantidad de numeros decimales para su visualizacion" << endl;
    cin >> precision;
    cout << "El valor de e^x es= " << fixed << setprecision(precision) << Recursion(x, n);

    if (x == 1)
    {
        cout <<"\nRecuerda que el valor de n para que se cumpla el calculo de 9 decimales es: 12" << endl;
    }
    //Si resolvemos la serie de Taylor mediante induccion, el resultado requerido para el valor n es de 11, sin embargo, debido a que en la primera iteracion---
    //Se llama la funcion de recursion para calcular la constante del primer termino, se le suma 1, con esto, el resultado final de n, es de 12.
    //If we solve the Taylor series by induction, the required result for the value n is 11, however, since in the first iteration---
    //The recursion function is called to calculate the constant of the first term, 1 is added, with this, the final result of n is 12. 
    
    return 0;
}
