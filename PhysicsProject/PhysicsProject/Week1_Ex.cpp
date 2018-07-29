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
	system("cls");

	glm::vec3 vectorA;
	glm::vec3 vectorB;
	glm::vec3 vectorC;

	glm::vec3 resultVectorLHS;
	glm::vec3 resultVectorRHS;

	std::cout << "Enter a vector A: ";
	std::cin >> vectorA.x >> vectorA.y >> vectorA.z;
	std::cout << std::endl;

	std::cout << "Enter a vector B: ";
	std::cin >> vectorB.x >> vectorB.y >> vectorB.z;
	std::cout << std::endl;

	std::cout << "Enter a vector C: ";
	std::cin >> vectorC.x >> vectorC.y >> vectorC.z;
	std::cout << std::endl;

	resultVectorLHS = glm::cross(vectorA, glm::cross(vectorB, vectorC));

	resultVectorRHS = vectorB * glm::dot(vectorA, vectorC)
						- vectorC * glm::dot(vectorA, vectorB);

	std::cout << "LHS : " << resultVectorLHS.x 
				<< ", " << resultVectorLHS.y 
				<< ", " << resultVectorLHS.z << "\n";

	std::cout << "LHS : " << resultVectorRHS.x 
				<< ", " << resultVectorRHS.y 
				<< ", " << resultVectorRHS.z << "\n";

	if (resultVectorLHS == resultVectorRHS)
	{
		std::cout << "PROVED!";
	}
	else std::cout << "U SUCK!";
}

void ExerciseTwo()
{

}