#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

enum CardSuits{
    Club, Diamond, Heart, Spade
};

enum CardElements{
    Ace, Two, Three, Four, Five, Six,
    Seven, Eight, Nine, Ten, Jack, Queen, King
};

string GetSuitString(CardSuits suit) {
    string s;

    switch (suit)
    {
    case Club :
        s = "Club";
        break;
    case Diamond :
        s = "Diamond";
        break;
    case Heart :
        s = "Heart";
        break;
    case Spade :
        s = "Spade";
        break;
    }
    return s;
}

string GetElementString(CardElements element) {
    string s;
    switch (element)
    {
    case Ace :
        s = "Ace";
        break;
    case Two :
        s = "Two";
        break;
    case Three :
        s = "Three";
        break;
    case Four :
        s = "Four";
        break;
    case Five :
        s = "Five";
        break;
    case Six :
        s = "Six";
        break;
    case Seven :
        s = "Seven";
        break;
    case Eight :
        s = "Eight";
        break;
    case Nine :
        s = "Nine";
        break;
    case Ten :
        s = "Ten";
        break;
    case Jack :
        s = "Jack";
        break;
    case Queen :
        s = "Queen";
        break;
    case King :
        s = "King";
        break;
    }
    return s;
}

int GenerateRandomNumber(int min, int max){
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return min + static_cast<int>((max- min + 1) * (rand() * fraction));
}

int main(){

    srand(static_cast<unsigned int>(time(0)));
    int mySuit = GenerateRandomNumber(0,3);// This matches the index of the enum CardSuits as it only has 4 elements
    int myElement = GenerateRandomNumber(0,12);// This matches the index of the enum CardElements which has 13 elements

    CardSuits suit = static_cast<CardSuits>(mySuit);
    CardElements element = static_cast<CardElements>(myElement);

    cout << "Your card is: ";
    cout << GetElementString(element);
    cout << " of " << GetSuitString(suit) << endl;

    return 0;
}