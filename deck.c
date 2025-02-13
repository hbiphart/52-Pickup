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

char* get_suit(struct card);


int main()
{

	
	int count = 0;
	struct card myDeck[51];
	
	//populate deck
	
	for(int i = 0; i < 4; i++)
	{
		for(int k = 0; k < 13; k++)
		{
			

			myDeck[count].rank = k + 1;
			myDeck[count].suit = i;
			count++;
			
		}	
		
			
	}
	
	
	
	for(int i = 0; i < 52; i++) //print deck
	{
		printf("Count: %d suit: %s rank: %d \n", i, get_suit(myDeck[i]), myDeck[i].rank);
	}
	
	
	
	

	
	return 0;
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
