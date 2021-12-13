#include<stdio.h>

struct card
{
    const char *face;
	const char *suit;
};

int main() {
	struct card acard;
	struct card* cardptr;

	acard.face = "Ace";
	acard.suit = "Apades";

	cardptr = &acard;

	printf("%s%s%s\n%s%s%s\n%s%s%s\n", acard.face, " of ", acard.suit, cardptr->face, " of ", cardptr->suit, (*cardptr).face, " of ", (*cardptr).suit);
	return 0;
}