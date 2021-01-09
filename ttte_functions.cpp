//functions for ttte.cpp
#include <iostream>
using namespace std;

void welcome(){

    cout << "Welcome to Tic tac toe game \n";
    cout << "Designed by Joel Aguirre \n\n";
    
}

//marker es el nombre del tablero 
void display_board(char marker[3][3]){

    cout << "_" << marker[0][0] << "_||_" << marker[0][1] << "_||_" << marker[0][2] << "\n";
    cout << "_" << marker[1][0] << "_||_" << marker[1][1] << "_||_" << marker[1][2] << "\n";
    cout << " " << marker[2][0] << " || " << marker[2][1] << " || " << marker[2][2] << "\n\n";

}

// icon = X o O, answer = el valor de la posicion a sobrescribir, marker = nombre del marcador
void override_position(char icon, char answer, char marker[3][3]){

    // busca match entre caracteres y el valor de answer
    for(int j= 0; j < 3 ; j++){
        for (int k = 0; k < 3; k++)
        {
            if(marker[j][k] == answer){
                marker[j][k] = icon;
            }
        }
    }
}

// icon = X ó O, marker = nombre del tablero a inspecionar
bool search_winner(char icon, char marker[3][3]){
    if (((marker[0][0] == marker[0][1]) && (marker[0][1] == marker[0][2]) && (marker[0][0] == icon)) ||
        ((marker[1][0] == marker[1][1]) && (marker[1][1] == marker[1][2]) && (marker[1][0] == icon)) ||
        ((marker[2][0] == marker[2][1]) && (marker[2][1] == marker[2][2]) && (marker[2][0] == icon)) ||
        ((marker[0][0] == marker[1][0]) && (marker[1][0] == marker[2][0]) && (marker[0][0] == icon)) ||
        ((marker[0][1] == marker[1][1]) && (marker[1][1] == marker[2][1]) && (marker[0][1] == icon)) ||
        ((marker[0][2] == marker[1][2]) && (marker[1][2] == marker[2][2]) && (marker[0][2] == icon)) ||
        ((marker[0][0] == marker[1][1]) && (marker[1][1] == marker[2][2]) && (marker[0][0] == icon)) ||
        ((marker[2][0] == marker[1][1]) && (marker[1][1] == marker[0][2]) && (marker[2][0] == icon))        
        )
    {
        return true;
    }
    else
    {
        return false;
    }
    
}