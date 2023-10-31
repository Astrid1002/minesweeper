#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define ROW 9 
#define COL 9

#define ROWS ROW+2 
#define COLS COL+2

#define Easy_Count 10

void InitBoard(char board[ROWS][COLS], int rows,int cols, char set);
void Setmine(char mine[ROWS][COLS],int row,int col);
void Finemine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
int get_mine_count(char mine[ROWS][COLS], int x,int y);
void DisplayBoard(char board[ROWS][COLS],int row,int col);
