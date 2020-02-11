/* Jenish Thanki 018089303
 * CECS 282-05
 * Project 1 Solitaire Prime
 * Due Feb 11,2020 */

#include "Card.h"

#ifndef SOLITAIREPRIME_DECK_H
#define SOLITAIREPRIME_DECK_H

class Deck{
private:
    Card storage[52];
    int top;



public:
    Deck();
    Card deal();
    void showDeck();
    int cardsLeft();
    void shuffle();
    void refreshDeck();




};

#endif //SOLITAIREPRIME_DECK_H
