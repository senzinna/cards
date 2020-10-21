#ifndef CARD_H
#define CARD_H
#include <string>
using namespace std;
class Card
{
public:
    static const int totalFaces = 13; // total number of faces
    static const int totalSuits = 4;  // total number of suits

    Card(int cardFace, int cardSuit); // initialize face and suit

    string toString() const;

    int getFace() const
    {
        return face;
    }

    int getSuit() const
    {
        return suit;
    }

private:
    int face;
    int suit;
    static const string faceNames[totalFaces];
    static const string suitNames[totalSuits];
}; // end class Card
#endif