#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

enum class CardSuits { Club, Diamond, Heart, Spade };
enum class CardElements { Ace, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King };

string GetSuitString(CardSuits suit) {
    static const string suitStrings[] = { "Club", "Diamond", "Heart", "Spade" };
    return suitStrings[static_cast<int>(suit)];
}

string GetElementString(CardElements element) {
    static const string elementStrings[] = { "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
    return elementStrings[static_cast<int>(element)];
}

int GenerateRandomNumber(int min, int max) {
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return min + static_cast<int>((max - min + 1) * (rand() * fraction));
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

 
    int mySuitIndex = GenerateRandomNumber(0, 3);

    // Convert the random index to CardSuits
    CardSuits suit = static_cast<CardSuits>(mySuitIndex);

    cout << "Your card suit is: " << GetSuitString(suit) << endl;

    return 0;
}
