#include <iostream>
#include <iomanip>
#include "DeckOfCards.h" // DeckOfCards class definition
using namespace std;

int main()
{

	DeckOfCards myDeckOfCards;

	myDeckOfCards.shuffle(); // place Cards in random order

	for (int i = 1; myDeckOfCards.moreCards(); ++i)
	{
		cout << left << setw(19) << myDeckOfCards.dealCard().toString();
		if (i % 4 == 0)
		{
			cout << endl;
		}

	} // end for
} // end main