// Create 52 Card Deck array



//suits
// 0 = Spade
// 1 = Heart
// 2 = Club
// 3 = Diamond

colors
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
	char *name = '%rank of %suit';
	
};


card updateCardrank(card in, int new_rank)
{
	in.rank = new_rank;

	return in;
	
}

char* get_suit(card in)
{
	char* suit = malloc(sizeof(7*char));
	
	case(in.suit)
	0:
	1:
	2:
	3:
	
	
	return suit;
}
