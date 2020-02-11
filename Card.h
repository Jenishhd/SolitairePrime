/* Jenish Thanki 018089303
 * CECS 282-05
 * Project 1 Solitaire Prime
 * Due Feb 11,2020 */
#ifndef SOLITAIREPRIME_CARD_H
#define SOLITAIREPRIME_CARD_H

class Card{
private:
    char rank;
    char suit;

public:
    Card(char, char);
    Card();
    int getValue();
    void setCard(char, char);
    int display();
    void showCard();
};

#endif //SOLITAIREPRIME_CARD_H
