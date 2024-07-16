//
//
//

#ifndef ASSIGNMENT3_PLAYER_H
#define ASSIGNMENT3_PLAYER_H
#include <iostream>
#include "Element.h"
  
class Player {

private:
    int score;
    int goldCount;
    int health;
    int boardSize;

public:

    Player(int boardSize){ //parametic constructor
        this->boardSize = boardSize;
        this->health = 2*boardSize; //according to instructor

        score = 0; //initialy our score is 0

        this->goldCount = 0;
    }



    void goldCounter ();

    void adjustHealth (int adjust);

    int getScore() const;

    void setScore(int score);

    int getGoldCount() const;

    void setGoldCount(int goldCount);

    int getHealth();

    void setHealth(int health);

    int getBoardSize ();

};


#endif //ASSIGNMENT3_PLAYER_H
