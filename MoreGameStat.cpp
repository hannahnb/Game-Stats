//This next file is called Game Stats 3.0
//Demonstrates constants
//Constants are unchangeable values that you name

#include <iostream>
using namespace std;

int main()
{
	const int ALIEN_POINTS = 150;//often variables that hold constant values are in caps
	//you cannot assign a new value to constants
	int aliensKilled = 10;
	int score = aliensKilled * ALIEN_POINTS;
	cout << "score: " << score << endl;

	//enum is an enumrator which is a set if unsigned int constants
	//by default the value of enumerators begins from zero and increases by 1
	//in this case NOVICE = 0, EASY = 1, etc
	//enums have values stored in CURLY BRACES
	enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
	difficulty myDifficulty = EASY;

	//since myDifficulty is a type of difficulty it can only be assigned the values in the
	//CURLY BRACES

	//Any enumerators not assigned values recieve the value of the previous enumerator PLUS one


	enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50};
	shipCost myshipCost = BOMBER_COST;
	cout << "To upgrade my ship to a Cruiser will cost " << (CRUISER_COST - myshipCost) << " Resourse Points.\n";

	return 0;
}