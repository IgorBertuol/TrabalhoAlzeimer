#include<windows.h>
#include <stdio.h>
#include <stdlib.h>

void gotoxy (int x, int y){
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}

void Rodape(){
    gotoxy(10,5);
    printf("l:7 c:3");
}
