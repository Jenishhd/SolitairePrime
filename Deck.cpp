/* Jenish Thanki 018089303
 * CECS 282-05
 * Project 1 Solitaire Prime
 * Due Feb 11,2020 */

#include "iostream"
#include "Card.h"
#include "Deck.h"
#include <stdlib.h>
using namespace std;

Deck::Deck() {
    top = 0;
    int counter = 0;
    char rank[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
    char suit[4] = {'S','H','D','C'};

    for (int i = 0; i < 4; i++) {
        for(int j = 0; j < 13; j++){
            storage[counter].setCard(rank[j],suit[i]);
            counter++;
        }
    }
}

void Deck:: shuffle() {
    srand(time(0));
    Card temp;
    int x;

    for(int i = 0; i < 52; i++){
        x = rand() % 52;
        temp = storage[i];
        storage[i] = storage[x];
        storage[x] = temp;
    }
}

Card Deck::deal() {
    return storage[top++];
}

void Deck::showDeck() {
    for (int i = 0; i < 52;) {
        for(int j = 0; j < 13; j++){
            storage[i++].showCard();
        }
        cout<<endl;
    }

}

int Deck::cardsLeft() {
    return 52 - top;
}

void Deck::refreshDeck(){
    top = 0;
    int counter = 0;
    char rank[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
    char suit[4] = {'S','H','D','C'};

    for (int i = 0; i < 4; i++) {
        for(int j = 0; j < 13; j++){
            storage[counter].setCard(rank[j],suit[i]);
            counter++;
        }
    }
}
