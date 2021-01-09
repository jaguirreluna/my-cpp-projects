// Declaracion de funciones

//Dar la bienvenida
void welcome();

//Muestra el estado actual del tablero
void display_board(char marker[3][3]);

//Sobre-escribe en el tablero la respuesta del jugador
void override_position(char icon, char answer, char marker[3][3]);

//Devuleve un true si hay ganador
bool search_winner(char icon, char marker[3][3]);