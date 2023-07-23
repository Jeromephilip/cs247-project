#ifndef _PLAYER_H
#define _PLAYER_H
#include <string>
#include <vector>
#include <utility>

#include "../piece/piece.h"
#include "../board/board.h"
#include "../game/game.h"

using namespace std; 

class Player {
    string colour; 
    public: 
        Player(string); 
        ~Player(); 
        // from Game, you get as input: two (x, y) points and then the piece you want to move 
        // eg. "move e2 e4" - Game should convert e2 to (4, 1) and then e4 to (4, 3), and check at e2 what the piece is 
        // eg. input would be Player.turnMove(4, 1, 4, 3, Bishop), and this should return a move 
        virtual Move turnMove(int, int, int, int, Board&) = 0; 
        string getColour();

}; 


#endif
