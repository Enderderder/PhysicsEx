#include <iostream>
#include <conio.h>


#include <glm.hpp>


void ExerciseOne();
void ExerciseTwo();

int main()
{
	int choice;

	std::cout << "Enter Number: ";
	std::cin >> choice;

	switch (choice)
	{
	case 1:
		ExerciseOne();

	case 2:
		ExerciseTwo();


	default: break;
	}


	_getch();
	return 0;
}

// Lagrange's formula prove
void ExerciseOne()
{
	glm::vec3 ResultVector;
	std::cout << "Enter a vector 3: ";
	std::cin >> ResultVector.x >> ResultVector.y >> ResultVector.z;
	std::cout << std::endl;

}

void ExerciseTwo()
{

}