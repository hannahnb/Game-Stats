// This is a sample program called Game Stats
// This demonstrates declaring and initializing variables concepts


#include <iostream> //preproccessor directive that adds the input/output library
using namespace std; //a directive command that uses the namespace std for outputing

int main()
{
	int score;
	double distance;
	char playAgain;
	bool shieldsUp;

	short lives, aliensKilled;//short is a modifier that can reduce the total num of values a var can hold; reduce storage space required
	//short can only modify int
	score = 0;
	distance = 1200.76;
	playAgain = 'y';
	shieldsUp = true;
	lives = 3;
	aliensKilled = 10;
	double engineTemp = 6572.89;

	cout << "\nscore: " << score << endl; // \n is used to create new lines
	cout << "distance: " << distance << endl;
	cout << "playAgain: " << playAgain << endl;
	// Skip shieldsUp since you don't normally print Booleans
	cout << "lives: " << lives << endl;
	cout << "aliensKilled: " << aliensKilled << endl;
	cout << "engineTemp: " << engineTemp << endl;

	int fuel;
	cout << "\nHow much fuel? ";
	cin >> fuel; //cin is the input value that asks for user input
	cout << "fuel: " << fuel << endl;

	typedef unsigned short int ushort;//unsigned means that the variable can only store positive int variables

	//typedef is used to make shorter names for types with long names
	
	//in this example, unsigned short int is being shortened to ushort

	ushort bonus = 10;
	cout << "\nbonus: " << bonus << endl;


	return 0;

	/* side note : instead of saying score = score + 100 
	* say score += 100. This is an equivalent method
	* the same can be done with the other assignment operators 
	*/

}