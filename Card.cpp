/* Jenish Thanki 018089303
 * CECS 282-05
 * Project 1 Solitaire Prime
 * Due Feb 11,2020 */
#include <iostream>
#include "Card.h"

Card:: Card(){}

Card:: Card(char r, char s){
    rank = r;
    suit = s;
}

int Card::getValue(){
    if(rank == 'K' || rank == 'Q' || rank == 'J' || rank == 'T' ){
        return 10;
    }
    else if(rank == 'A'){
        return 1;
    }
    else
        return (rank - '0');
}

void Card::setCard(char r, char s) {
    rank = r;
    suit = s;
}

void Card:: showCard() {
    if(rank == 'T')
        std:: cout << 10 << suit<< ", ";
    else
        std:: cout << rank << suit<< ", ";
}




