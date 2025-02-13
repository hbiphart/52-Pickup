// Create 52 Card Deck array

#include <stdlib.h>

//suits
// 0 = Spade
// 1 = Heart
// 2 = Club
// 3 = Diamond

//colors
// 0 || 2 = Black
// 1 || 3 = Red


// ranks 1 - 13;
// 10 = 10;
// 11 = J;
// 12 = Q;
// 13 = K;


struct card{
	int suit;
	int rank;
	char* name;
	
};


struct card updateCardrank(struct card in, int new_rank)
{
	in.rank = new_rank;

	return in;
	
};

char* get_suit(struct card in)
{
	char* suit = malloc(sizeof(7*char));
	
	switch(in.suit){
	case 0:
	{
		for(int i = 0; i <= sizeof("Spades"); i++)
		{
			suit[i] = "Spades";
		} 
	}
	case 1:
			for(int i = 0; i <= sizeof("Hearts"); i++)
		{
			suit[i] = "Hearts";
		} 
	case 2:
			for(int i = 0; i <= sizeof("Hearts"); i++)
		{
			suit[i] = "Hearts";
		} 
	case 3:
			for(int i = 0; i <= sizeof("Hearts"); i++)
		{
			suit[i] = "Hearts";
		} 
	}
	
	return suit;
}
