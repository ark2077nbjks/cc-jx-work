#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand((unsigned int)time(NULL));
    int secret = rand() % 100;
    int guess;
    int i;
    int win = 0;
    for (i = 0; i < 5; i++) {
        printf("Enter your number:");
        scanf_s("%d", &guess);
        if (guess > secret) { printf("Too big!\n"); }
        else if (guess < secret) { printf("Too small!\n"); }
        else { printf("Bingo!\n"); printf("*****You win!*****\n"); win = 1; break; }
    }
    if (!win) { printf("*****GAME OVER!*****\n"); }
    system("pause");
    return 0;
}
