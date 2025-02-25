// Create 52 Card Deck array

#include <stdlib.h>
#include <stdio.h>
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
char* get_rank(int card);
char* get_suit(struct card);




int main()
{

	
	int count = 0;
	struct card myDeck[52];
	
	myDeck.populate();
	
	//populate deck
	
	
	
	
	
	for(int i = 0; i < 52; i++) //print deck
	{
		printf("Count: %d suit: %s rank: %s \n", i, get_suit(myDeck[i]), get_rank(myDeck[i].rank));
	}
	
	
	
	

	
	return 0;
}





char* get_rank(int in){
	char* rank = malloc(sizeof(5*'a'));
	
	switch(in){
	case 1:
	{	
		rank = "Ace";
		return rank;
	}
	case 2:
	{
		rank = "2";
		return rank;
	}	
	case 3:
	{
		rank = "3";
		return rank;
	}
	case 4:
	{
		rank = "4";
		return rank;
	}
	case 5:
	{
		rank = "5";
		return rank;
	}
	case 6:
	{
		rank = "6";
		return rank;
	}
	case 7:
	{
		rank = "7";
		return rank;
	}
	case 8:
	{
		rank = "8";
		return rank;
	}
	case 9:
	{
		rank = "9";
		return rank;
	}
	case 10:
	{
		rank = "10";
		return rank;
	}
	case 11:
	{
		rank = "Jack";
		return rank;
	}
	case 12:
	{
		rank = "Queen";
		return rank;
	}
	case 13:
	{
		rank = "King";
		return rank;
	}
	}

	return "Error";
}



struct card updateCardrank(struct card in, int new_rank)
{
	in.rank = new_rank;

	return in;
	
};

char* get_suit(struct card in)
{
	char* suit = malloc(sizeof(6*'a'));
	
	switch(in.suit){
	case 0:
	{	
		suit = "Spades";
		return suit;
	}
	case 1:
	{
		suit = "Hearts";
		return suit;
	}	
	case 2:
	{
		suit = "Clubs";
		return suit;
}
	case 3:
	{
	suit = "Diamonds";
	return suit;
}
	}


	
	return "Error";
}

void populate(struct card in)
{
	


	
}

