// Demi Dusenberry
// CS 330
// PLP 4 

#include <iostream>
#include <string>
#include <vector>


int multiplier(int x, int y)
{
	return x * y;
}

int recursiveFact(int w)
{
	if (w > 1)
		w = w * recursiveFact(w - 1);
	return w;
}

// I could not quite figure out how to  get a function to return to strings
// It feels like I am so close but keep messing up syntax, return type, scope, overloading etc.
// Below are my attempts to get a function to return to strings
/*
struct Person {
	std::string fullname;
	std::string firstName;
	std::string lastName;
};


Person splitString(const Person& names, std::string str, std::string del) {
	names.firstName == str.substr(0, str.find(del, 0));
	str = str.substr(str.find(del, 0) + 1, str.length());

	names.lastName == str.substr(0, str.length());

	return names;
}
Person splitString(const Person& names, std::string str, std::string del) {
	//std::string firstTemp = "";
	//std::string lastTemp = "";

	//int start, end = -1 * del.size();
	//do {
		//start = end + del.size();
		//end = str.find(del, start);


	//for (int i = 0; i < str.length(); ++i) {
		//while (str[i] != del) {
			//firstTemp += str[i];
			//name.firstName == firstTemp;

	//return Person;
//}
*/

//int passingValues();




int main(){	
	// while loop
	int count = 0;
	while (count < 10) {
		std::cout << count;
	}

	//do while loop
	int j = 5;
	do {
		std::cout << j--;
	} while (j > 0);


	//for loop (iter)
	for (int i = 0; i < 10; ++i) {
		std::cout << i;
	}

	// Function calls
	int x = 4;
	int y = 5;
	int z = multiplier(x, y);
	std::cout << "Multiplier = ", z;

	int w = 5;
	int fact = recursiveFact(w);
	std::cout << "Factorial = ", w;

	// Tried to split a string for hours with no success	:(


	/*
	std::string myName{"Demi Dusenberry"};

	std::string del = " ";

	Person names{splitString(names, myName, del)};
	std::cout << names.firstName;
	std::cout << names.lastName;
	*/

}


//int passingValues()
//{
	//write fxn test if pass by ref, or pass by value (C++ does both)

//}
