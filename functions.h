#include <stdio.h>
void intro();
void game(int misses, char answer[15], char codeword[15], char letter);
void display_misses(int misses);
void display_status(char incorrect[12], char answer[15]);
void end(char answer[15], char codeword[15], int misses);