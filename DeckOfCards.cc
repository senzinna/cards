#include <iostream>
#include <ctime>
#include <cstdlib>
#include "DeckOfCards.h"
using namespace std;

DeckOfCards::DeckOfCards()
{
	for (int a = 0; a < 4; a++)
	{
		for (int b = 0; b < 13; b++)
		{
			Card card(b, a);
			deck.push_back(card);
		}
	}
}

void DeckOfCards::shuffle()
{
	srand(time(0));

	for (int a = 0; a < 52; a++)
	{
		swap(deck[a], deck[(rand() % 52)]);
	}
}

Card DeckOfCards::dealCard()
{
	static int a = -1;
	a++;
	return deck.at(a);
}

bool DeckOfCards::moreCards() const
{
	static int a = -1;
	if (a == 51)
	{
		return false;
	}
	else
	{
		a++;
		return true;
	}
}