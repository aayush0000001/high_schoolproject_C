
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>
#include "functions.h"
int main()
{
    system("color 3");
    char codeword[] = "narcodiagnosis", answer[] = "--------------", letter, incorrect[12] = {'\0'};
    int misses = 0;
    int i, count = 0;
    bool guess = false;
    while (strcmp(answer, codeword) != 0 && misses < 7)
    {
        system("cls");
        intro();
        display_misses(misses);
        display_status(incorrect, answer);
        printf("\nEnter your guess:");
        scanf(" %c", &letter);
        guess = false;
        for (i = 0; i <= 14; i++)
        {

            if (letter == codeword[i])
            {
                answer[i] = letter;
                guess = true;
            }
        }
        if (guess)
        {
            printf("\nCorrect!");
            Sleep(2000);
        }
        else
        {
            printf("\nWrong!another portion of your friend is drawn now.");
            misses++;
            incorrect[count] = letter;
            count++;
            Sleep(2000);
        }
    }
    end(answer, codeword, misses);
    printf("\nPress any key to exit the Game!\n");
    getch();
    return 0;
}