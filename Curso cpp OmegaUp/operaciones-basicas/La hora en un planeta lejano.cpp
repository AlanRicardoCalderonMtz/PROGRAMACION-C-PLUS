#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int S=0, D=0, H=0, M=0, seg=0;
    cin >> S;

    //Conversiones (Regla de 3)
    // 1 dia = 12 horas => 1 dia = 12*70*50 segundos
    // 1 hora = 70 minutos => 1 hora = 70*50 segundos
    // 1 minuto = 50 segundos 

    int undia = 12*70*50; // Un dia en segundos
    int unaHora = 70*50; // Una hora en segundos
    int unMinuto = 50; // Un minuto en segundos

    // Vamos a determinar cuantos dias hay en S
    D = S / undia;
    // Vamos a determinar cuantas horas hay en S
    H = (S - (D * undia)) / (unaHora);
    // Vamos a determinar cuántos minutos hay en S
    M = (S - (D * undia) - (H * unaHora)) / 50;
    // Vamos a determinar cuántos segundos hay en S
    seg = S - (D * undia) - (H * unaHora) - (M * unMinuto);

    cout<<"Número de días: "<<D<<endl;
    cout<<"Número de horas: "<<H<<endl;
    cout<<"Número de minutos: "<<M<<endl;   
    cout<<"Número de segundos: "<<seg<<endl;

    return 0;
}