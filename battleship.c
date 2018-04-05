#include <stdio.h>
#include "battleship.h"

void setShip(board *play,struct ship *ship){
 for(int y=ship->start_y;y< ship->health;y++)
  *play[ship->start_x][y]='O';
}
void fireMissile(board **track1,board **track2,int row, int col){
 board *x=*track1, *y=*track2;
}
int main(void){
 board player1_play[2];
 board player2_play[2];
}
