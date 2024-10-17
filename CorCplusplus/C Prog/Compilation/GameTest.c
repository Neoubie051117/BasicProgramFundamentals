#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Dimensions of the game board
#define WIDTH 20
#define HEIGHT 20

// Directions
#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4

// Structure for snake's body part
typedef struct {
    int x, y;
} SnakePart;

// Global variables
int gameOver, score;
int foodX, foodY;
int direction;
int snakeLength;
SnakePart snake[100];  // Snake can have up to 100 body parts

// Function to set cursor position in console
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Function to generate food at random positions
void generateFood() {
    foodX = rand() % WIDTH;
    foodY = rand() % HEIGHT;
}

// Function to initialize the game
void initializeGame() {
    gameOver = 0;
    direction = RIGHT;
    snakeLength = 1;
    snake[0].x = WIDTH / 2;
    snake[0].y = HEIGHT / 2;
    score = 0;
    generateFood();
}

// Function to draw the game board
void drawBoard() {
    system("cls");
    for (int i = 0; i < WIDTH + 2; i++) printf("#");
    printf("\n");

    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (j == 0) printf("#");
            if (i == snake[0].y && j == snake[0].x)
                printf("O");  // Head of the snake
            else if (i == foodY && j == foodX)
                printf("*");  // Food
            else {
                int printed = 0;
                for (int k = 1; k < snakeLength; k++) {
                    if (snake[k].x == j && snake[k].y == i) {
                        printf("o");
                        printed = 1;
                    }
                }
                if (!printed) printf(" ");
            }
            if (j == WIDTH - 1) printf("#");
        }
        printf("\n");
    }

    for (int i = 0; i < WIDTH + 2; i++) printf("#");
    printf("\n");
    printf("Score: %d\n", score);
}

// Function to take input for movement
void takeInput() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'w':
                if (direction != DOWN) direction = UP;
                break;
            case 's':
                if (direction != UP) direction = DOWN;
                break;
            case 'a':
                if (direction != RIGHT) direction = LEFT;
                break;
            case 'd':
                if (direction != LEFT) direction = RIGHT;
                break;
            case 'x':
                gameOver = 1;  // Exit game
                break;
        }
    }
}

// Function to update the snake's position
void updateGame() {
    // Move snake body
    for (int i = snakeLength - 1; i > 0; i--) {
        snake[i] = snake[i - 1];
    }

    // Move the head in the current direction
    switch (direction) {
        case UP:
            snake[0].y--;
            break;
        case DOWN:
            snake[0].y++;
            break;
        case LEFT:
            snake[0].x--;
            break;
        case RIGHT:
            snake[0].x++;
            break;
    }

    // Check if snake hits the walls
    if (snake[0].x < 0 || snake[0].x >= WIDTH || snake[0].y < 0 || snake[0].y >= HEIGHT) {
        gameOver = 1;
    }

    // Check if snake eats food
    if (snake[0].x == foodX && snake[0].y == foodY) {
        score += 10;
        snakeLength++;
        generateFood();
    }

    // Check if snake collides with itself
    for (int i = 1; i < snakeLength; i++) {
        if (snake[0].x == snake[i].x && snake[0].y == snake[i].y) {
            gameOver = 1;
        }
    }
}

int main() {
    initializeGame();

    while (!gameOver) {
        drawBoard();
        takeInput();
        updateGame();
        Sleep(100);  // Control the speed of the snake
    }

    printf("Game Over! Final Score: %d\n", score);
    return 0;
}
