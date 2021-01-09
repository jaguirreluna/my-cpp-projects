#include <iostream>
#include <array>
#include "ttte.hpp"
using namespace std;

//Guarda los nombres de los jugadores y el jugador actual
string  player1,
        player2,
        actual_player = "lol";


//Recoge la respuesta del jugador
char answer;

//Si ya hay ganador
bool winner = false;

//Muestra la posición del tablero
char marker[3][3] = {
    {'1', '2', '3'}, 
    {'4', '5', '6'}, 
    {'7', '8', '9'}};


int main(){

    system("cls");
    //imprime la bienvenida
    welcome();

    //registro para el jugador 1
    cout << "Please player 1, enter your name: ";
    cin >> player1;

    //registro para el jugador 2
    cout << "\nPlease player 2, enter your name: ";
    cin >> player2;

    while (winner == false)
    {
    actual_player = player1;
    system("cls");
    cout << "TIC TAC TOE Game\nPlease " << player1 << " enter a position\n\n";
    display_board(marker);
    cout << "\n Your answer: ";
    cin >> answer;
    override_position('X', answer, marker);
    winner = search_winner('X', marker);

    if (winner == false)
        {
        actual_player = player2;
        system("cls");
        cout << "TIC TAC TOE Game\nPlease " << player2 << " enter a position\n\n";
        display_board(marker);
        cout << "\n Your answer: ";
        cin >> answer;
        override_position('O', answer, marker);
        winner = search_winner('O', marker);
        }
    }
    
    system("cls");
    cout << "TIC TAC TOE Game\nCongratulations " << actual_player <<"\nYou are the winner!\n\n";
    display_board(marker);
    system("pause");
}