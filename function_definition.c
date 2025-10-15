#include <stdio.h>
#include <string.h>
void intro()
{
    printf("Hangman\n");
    printf("Hangman is a classic word game in which you must guess a codeword under 7 misses or else your friend will be Hanged.\n");
}
void display_status(char incorrect[12], char answer[15])
{
    printf("\nIncorrect guesses:%s", incorrect);
    printf("\tCodeword:%s", answer);
}
void display_misses(int misses)
{
    if (misses == 1)
    {
        printf("        XX========================XX\n");
        printf("        ##                        ##\n");
        printf("      .-\"\"-.                      ##\n");
        printf("     /-.{}  \\                     ##\n");
        printf("     | _\\__.|                     ##\n");
        printf("     \\/^)^ \\/                     ##\n");
        printf("      \\ =  /                      ##\n");
        printf("       `--`                       ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                     ============================\n");
    }
    else if (misses == 2)
    {
        printf("        XX========================XX\n");
        printf("        ##                        ##\n");
        printf("      .-\"\"-.                      ##\n");
        printf("     /-.{}  \\                     ##\n");
        printf("     | _\\__.|                     ##\n");
        printf("     \\/^)^ \\/                     ##\n");
        printf("      \\ =  /                      ##\n");
        printf(" .---./`--`                       ##\n");
        printf("/    /                            ##\n");
        printf(";   |                             ##\n");
        printf("|   |                             ##\n");
        printf("/   |                             ##\n");
        printf("|    \\                            ##\n");
        printf("\\_   |                            ##\n");
        printf("  \\__/                            ##\n");
        printf(" / /                              ##\n");
        printf(" -'                               ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                     ============================\n");
    }
    else if (misses == 3)
    {
        printf("        XX========================XX\n");
        printf("        ##                        ##\n");
        printf("      .-\"\"-.                      ##\n");
        printf("     /-.{}  \\                     ##\n");
        printf("     | _\\__.|                     ##\n");
        printf("     \\/^)^ \\/                     ##\n");
        printf("      \\ =  /                      ##\n");
        printf(" .---./`--`\\.-.                   ##\n");
        printf("/     `;--'`   |                  ##\n");
        printf(";        /`    |                  ##\n");
        printf("|       |*     /                  ##\n");
        printf("/   |   |     |                   ##\n");
        printf("|    \\  |*    /                   ##\n");
        printf("\\_   |\\_|____/                    ##\n");
        printf("  \\__/                            ##\n");
        printf(" / /                              ##\n");
        printf(" -'                               ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                     ============================\n");
    }
    else if (misses == 4)
    {
        printf("        XX========================XX\n");
        printf("        ##                        ##\n");
        printf("      .-\"\"-.                      ##\n");
        printf("     /-.{}  \\                     ##\n");
        printf("     | _\\__.|                     ##\n");
        printf("     \\/^)^ \\/                     ##\n");
        printf("      \\ =  /                      ##\n");
        printf(" .---./`--`\\.--._                 ##\n");
        printf("/     `;--'`     \\                ##\n");
        printf(";        /`       ;               ##\n");
        printf("|       |*        |               ##\n");
        printf("/   |   |     |    \\              ##\n");
        printf("|    \\  |*    /    |              ##\n");
        printf("\\_   |\\_|____/|  __/              ##\n");
        printf("  \\__/         \\__/                ##\n");
        printf(" / /         \\ \\                 ##\n");
        printf(" -'           `-                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                     ============================\n");
    }
    else if (misses == 5)
    {
        printf("        XX========================XX\n");
        printf("        ##                        ##\n");
        printf("      .-\"\"-.                      ##\n");
        printf("     /-.{}  \\                     ##\n");
        printf("     | _\\__.|                     ##\n");
        printf("     \\/^)^ \\/                     ##\n");
        printf("      \\ =  /                      ##\n");
        printf(" .---./`--`\\.--._                 ##\n");
        printf("/     `;--'`     \\                ##\n");
        printf(";        /`       ;               ##\n");
        printf("|       |*        |               ##\n");
        printf("/   |   |     |    \\              ##\n");
        printf("|    \\  |*    /    |              ##\n");
        printf("\\_   |\\_|____/|  __/              ##\n");
        printf("  \\__//======\\\\__/                ##\n");
        printf(" / //_      _\\\\ \\                 ##\n");
        printf(" -'  |`\"\"\"`|  `-                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                     ============================\n");
    }
    else if (misses == 6)
    {
        printf("        XX========================XX\n");
        printf("        ##                        ##\n");
        printf("      .-\"\"-.                      ##\n");
        printf("     /-.{}  \\                     ##\n");
        printf("     | _\\__.|                     ##\n");
        printf("     \\/^)^ \\/                     ##\n");
        printf("      \\ =  /                      ##\n");
        printf(" .---./`--`\\.--._                 ##\n");
        printf("/     `;--'`     \\                ##\n");
        printf(";        /`       ;               ##\n");
        printf("|       |*        |               ##\n");
        printf("/   |   |     |    \\              ##\n");
        printf("|    \\  |*    /    |              ##\n");
        printf("\\_   |\\_|____/|  __/              ##\n");
        printf("  \\__//======\\\\__/                ##\n");
        printf(" / //_      _\\\\ \\                 ##\n");
        printf(" -'  |`\"\"\"`|  `-                  ##\n");
        printf("     |  L                         ##\n");
        printf("     >_ |                         ##\n");
        printf("     |  |                         ##\n");
        printf("     |  |                         ##\n");
        printf("    /   |                         ##\n");
        printf("   /    /                         ##\n");
        printf("    `|\"|                          ##\n");
        printf("    /  )                          ##\n");
        printf("   /__/                           ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                     ============================\n");
    }
    else if (misses == 0)
    {
        printf("        XX========================XX\n");
        printf("        ##                        ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");

        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                     ============================\n");
    }
}
void end(char answer[15], char codeword[15], int misses)
{
    if (strcmp(answer, codeword) == 0)
    {
        printf("\n   _____    ____    _   _    _____   _____               _______   _    _   _                   _______   _____    ____    _   _    _____   _ \n");
        printf("  / ____|  / __ \\  | \\ | |  / ____| |  __ \\      /\\     |__   __| | |  | | | |          /\\     |__   __| |_   _|  / __ \\  | \\ | |  / ____| | |\n");
        printf(" | |      | |  | | |  \\| | | |  __  | |__) |    /  \\       | |    | |  | | | |         /  \\       | |      | |   | |  | | |  \\| | | (___   | |\n");
        printf(" | |      | |  | | | . ` | | | |_ | |  _  /    / /\\ \\      | |    | |  | | | |        / /\\ \\      | |      | |   | |  | | | . ` |  \\___ \\  | |\n");
        printf(" | |____  | |__| | | |\\  | | |__| | | | \\ \\   / ____ \\     | |    | |__| | | |____   / ____ \\     | |     _| |_  | |__| | | |\\  |  ____) | |_|\n");
        printf("  \\_____|  \\____/  |_| \\_|  \\_____| |_|  \\_\\ /_/    \\_\\    |_|     \\____/  |______| /_/    \\_\\    |_|    |_____|  \\____/  |_| \\_| |_____/  (_)\n");
        printf("\nYou guessed the word correctly and your friend is freed.\n");
        printf("      .-\"\"-.\n");
        printf("     /-.{}  \\\n");
        printf("     | _\\__.|\n");
        printf("     \\/^)^ \\/\n");
        printf("      \\ =  /\n");
        printf(" .---./`--`\\.--._\n");
        printf("/     `;--'`     \\\n");
        printf(";        /`       ;\n");
        printf("|       |*        |\n");
        printf("/   |   |     |    \\\n");
        printf("|    \\  |*    /    |\n");
        printf("\\_   |\\_|____/|  __/\n");
        printf("  \\__//======\\\\__/\n");
        printf(" / //_      _\\\\ \\\n");
        printf(" -'  |`\"\"\"` |  `-' \n");
        printf("     |  L   |\n");
        printf("     >_ || _<\n");
        printf("     |  ||  |\n");
        printf("     |  ||  |\n");
        printf("    /   ||   \\\n");
        printf("   /    /,    \\\n");
        printf("    `|\"|`\"|\"|\"`\n");
        printf("    /  )  /  )\n");
        printf("   /__/  /__/\n");
    }
    else
    {
        printf("   _____            __  __  ______    ____ __      __ ______  _____   _ \n");
        printf("  / ____|    /\\    |  \\/  ||  ____|  / __ \\ \\    / /|  ____||  __ \\ | |\n");
        printf(" | |  __    /  \\   | \\  / || |__    | |  | |\\ \\  / / | |__   | |__) || |\n");
        printf(" | | |_ |  / /\\ \\  | |\\/| ||  __|   | |  | | \\ \\/ /  |  __|  |  _  / | |\n");
        printf(" | |__| | / ____ \\ | |  | || |____  | |__| |  \\  /   | |____ | | \\ \\ |_|\n");
        printf("  \\_____|/_/    \\_\\|_|  |_||______|  \\____/    \\/    |______||_|  \\_\\(_)\n");

        printf("\nYou had 7 incorrect guesses so your friend has been hanged\n");
        printf("        XX========================XX\n");
        printf("        ##                        ##\n");
        printf("      .-\"\"-.                      ##\n");
        printf("     /-.{}  \\                     ##\n");
        printf("     | _\\__.|                     ##\n");
        printf("     \\/^)^ \\/                     ##\n");
        printf("      \\ =  /                      ##\n");
        printf(" .---./`--`\\.--._                 ##\n");
        printf("/     `;--'`     \\                ##\n");
        printf(";        /`       ;               ##\n");
        printf("|       |*        |               ##\n");
        printf("/   |   |     |    \\              ##\n");
        printf("|    \\  |*    /    |              ##\n");
        printf("\\_   |\\_|____/|  __/              ##\n");
        printf("  \\__//======\\\\__/                ##\n");
        printf(" / //_      _\\\\ \\                 ##\n");
        printf(" -'  |`\"\"\"`|  `-'                 ##\n");
        printf("     |  L   |                     ##\n");
        printf("     >_ || _<                     ##\n");
        printf("     |  ||  |                     ##\n");
        printf("     |  ||  |                     ##\n");
        printf("    /   ||   \\                    ##\n");
        printf("   /    /,    \\                   ##\n");
        printf("    `|\"|`\"|\"|\"`                   ##\n");
        printf("    /  )  /  )                    ##\n");
        printf("   /__/  /__/                     ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                                  ##\n");
        printf("                     ============================\nThe correct word was:%s", codeword);
    }
}