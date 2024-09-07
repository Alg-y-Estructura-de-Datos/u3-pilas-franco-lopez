#include <iostream> 
#include "Pila/Pila.h"
using namespace std; 
void remover(Pila <int> vec, int a){
    Pila <int> pila2; 
    while(true){
        int elemento = vec.pop(); 
        if (elemento != a){
            pila2.push(elemento); 
        }
    }
}
int main(){
    Pila <int> vec; 
    int n = 1; 
    while (true){
        cout << "Ingrese el elemento de la pila numero "<< n << ": "; 
        cin >> num; 
        vec.push(num); 
        n++; 
    }
    int a; 
    cout << "Ingrese el numero a remplazar: "; 
    cin >> a; 
    remover(vec, a); 
    if (pila2.esVacia()){
        cout << "La lista fue remplazada totalmente" << endl; 
    }else{
        while(true){
            elemento = vec2.pop(); 
            cout << elemento << endl; 
        }
    }
}
