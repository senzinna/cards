#include <iostream>
#include "Card.h"
using namespace std;

Card::Card(int cardFace, int cardSuit)
{
   suit = cardSuit;
   face = cardFace;
}

const string Card::faceNames[totalFaces] =
    {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

const string Card::suitNames[totalSuits] =
    {"Hearts", "Diamonds", "Clubs", "Spades"};

string Card::toString() const
{
   return faceNames[face] + " of " + suitNames[suit];
}