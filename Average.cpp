#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double* scores, //To dynamically allocate an array
		total = 0.0, // Accumulator
		average; // To hold average values
	int numScores, //To hold the number of values
		count; //Counter variable

		//Get the values
	cout << "Enter the number of values";
	cin >> numScores;

	//Allocate space in a dynamic way in order to enter certain values.

	scores = new double[numScores];

	//Get the Values
	cout << "Enter the numbers below.\n";
	for (count = 0; count < numScores; count++)
	{
		cout << "Values " << (count + 1) << ": ";
		cin >> scores[count];
	}

	//Calculate the total of the values
	for (count = 0; count < numScores; count++)
	{
		total += scores[count];
	}

	//Calculate the average value
	average = total / numScores;

	//Display the results
	cout << fixed << showpoint << setprecision(2);
	cout << "Average value is: " << average << endl;

	//Free dynamically allocated memory
	delete[] scores;
	scores = 0; //Make scores point to null.

	return 0;
}