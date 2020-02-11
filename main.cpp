/* Jenish Thanki 018089303
 * CECS 282-05
 * Project 1 Solitaire Prime
 * Due Feb 11,2020 */

#include <iostream>
#include "Card.h"
#include "Deck.h"
using namespace std;

bool isPrime(int x){
    if(x == 1 ){
        return false;
    }
    bool prime = true;
    for(int i = 2; i <= x / 2; i++) {
        if(x % i == 0) {
            prime = false;
            break;
        }
    }
    return prime;
}

int main() {
    int counter = 0;
    Deck test;
    int handSum = 0;

    while(true) {
        cout << "Welcome to Solitaire Prime!" << endl;
        cout << "1) New Deck" << endl;
        cout << "2) Display Deck" << endl;
        cout << "3) Shuffle Deck" << endl;
        cout << "4) Play Solitaire Prime" << endl;
        cout << "5) Exit" << endl;
        int userInput;
        cin>>userInput;

        if(userInput == 1) {
            test.refreshDeck();
        }

        else if(userInput == 2){
            test.showDeck();
        }

        else if(userInput == 3){
            test.shuffle();
        }

        else if(userInput == 4){
            cout<<" Playing Solitaire Prime!!! "<<endl;
            while(test.cardsLeft() != 0){
                Card temp = test.deal();
                handSum+= temp.getValue();

                if(isPrime(handSum)){
                    temp.showCard();
                    cout << "Prime:" << handSum <<endl;
                    handSum = 0;
                    counter++;
                }
                else{
                    temp.showCard();
            }

            }
            if(isPrime(handSum)){
                cout<<"Winner in "<<counter<<" piles!"<<endl;
            }
            else{
                cout<<"Loser"<<endl;
            }

        }

        else if(userInput == 5){
            break;
        }
        else{
            cout<<"Please enter a valid number."<<endl;
        }

    }

}
