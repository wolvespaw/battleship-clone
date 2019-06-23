#ifndef BATTLESHIP_H
    #define BATTLESHIP_H
    //controls board size
    #define BATTLESHIP_BOARD_ROW 10
    #define BATTLESHIP_BOARD_COL 10
    #define BATTTLESHIP_NUMBER 5
    enum SHIP_TYPE{CARRIER,BATTLESHIP,SUPER,SUBMARINE,DESTROYER};
    struct ship{
        enum SHIP_TYPE type;
        unsigned int health;
        unsigned int start_x;
        unsigned int start_y;
    };
    typedef char board [BATTLESHIP_BOARD_ROW][BATTLESHIP_BOARD_COL];
    void setShip(board *,struct ship *);
    void fireMissile(board **,board **,int,int);
#endif
