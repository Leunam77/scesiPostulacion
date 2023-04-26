#include <iostream>
using namespace std;
int main(){
    string nombre;
    int a, b;
    cout << "Ingrese su nombre: " << "\n";
    cin >> nombre;
    cout << "Mi nombre es: " << nombre << "\n";
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;
    if(a>b){
        cout << "El mayor es: " << a << "\n";
    }else{
        cout << "El mayor es: " << b << "\n";
    }
    return 0;
}