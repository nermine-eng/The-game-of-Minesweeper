#ifndef TILE_H
#define TILE_H
#include <iostream>
#include <utility>
#include <list>

using namespace std;

typedef list<pair<unsigned short, unsigned short>> coupleList;


class Tile
{

    unsigned short posRow;
    unsigned short posCol;
    unsigned short num; //Number that will be displayed if tile is played
    bool played;
    char status; // 'e'=empty, 'f'=flagged, 'q'= question mark

    public:
    Tile();
    Tile(unsigned short , unsigned short); // Constructor
    //~Tile(); // Destructor
    bool isBomb(); // Returns true if num==9
    bool isFlagged(); // Checks if tile is flagged
    bool isQuestion(); // Checks if tile has a question mark
    bool isPlayed(); // Checks if tile is opened
    bool isFree();
    unsigned short getNum();
    unsigned short getX();
    unsigned short getY();
    char getStatus();
    coupleList neighbours();

    //setters
    void setnum(unsigned short);
    void setPlayed();// Change the played attribute when left clicked
    void setBomb();// Makes the tile a bomb


    // The following methods will be used in case of event

    void setFlag();// Sets a flag on tile when right clicked (empty)
    void setQuestion();// Sets a question mark on tile when right clicked (flagged)
    void setFree();// Sets the tile empty when right clicked (question marked)

};
#endif
