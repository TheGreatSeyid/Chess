#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int randomizer(int size);
void shower(char *desk[10][10]);
void changer(int move[]);
char *desk[10][10]={
    {"♜","♞","♝","♚","♛","♝","♞","♜"},
    {"♟","♟","♟","♟","♟","♟","♟","♟"},
    {" "," "," "," "," "," "," "," "},
    {" "," "," "," "," "," "," "," "},
    {" "," "," "," "," "," "," "," "},
    {" "," "," "," "," "," "," "," "},
    {"♙","♙","♙","♙","♙","♙","♙","♙"},
    {"♖","♘","♗","♔","♕","♗","♘","♖"},
};

int main(){
    int move[4];
    
    shower(desk);
    /*char figures[20][20]={"♟","♟","♟","♟","♟","♟","♟","♟","♚","♛","♞","♞","♜","♜","♝","♝"};
    int size=sizeof(figures)/sizeof(figures[0]);
    int randomchick=randomizer(size);
    printf("%s",figures[randomchick]);*/

    printf("what you want to play");
    for(int x=0;x<4;x++){
        scanf("%d",&move[x]);
    }
    changer(move);

    return 0;
}

void shower(char *desk[10][10]){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            printf("%s",desk[i][j]);
        }
        printf("\n");
    }
}

int randomizer(int size){
    srand(time(NULL));
    int one_figure= rand() % size;
    return one_figure;
}
void changer(int move[]){
    desk[move[2]][move[3]]=desk[move[0]][move[1]];
    desk[move[0]][move[1]]=" ";
    shower(desk);
}