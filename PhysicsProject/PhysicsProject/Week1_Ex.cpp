#include <iostream>
#include <conio.h>


#include <glm.hpp>


void ExerciseOne();
void ExerciseTwo();
void ExerciseThree();
void ExerciseFour();

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

	case 3:
		ExerciseThree();

	case 4:
		ExerciseFour();

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

// Point on plane
void ExerciseTwo()
{
	system("cls");

	glm::vec3 planePoint;
	glm::vec3 planeNormal;
	float dis_OriginToPlane;
	glm::vec3 pointToCheck;

	std::cout << "Enter plane point: ";
	std::cin >> planePoint.x >> planePoint.y >> planePoint.z;
	std::cout << std::endl;

	std::cout << "Enter plane normal: ";
	std::cin >> planeNormal.x >> planeNormal.y >> planeNormal.z;
	std::cout << std::endl;

	std::cout << "Enter a point: ";
	std::cin >> pointToCheck.x >> pointToCheck.y >> pointToCheck.z;
	std::cout << std::endl;

	dis_OriginToPlane = glm::dot(planeNormal, planePoint);

	std::cout << "Distance from the origin to the palne: " << dis_OriginToPlane << "\n";

	float resultValue = (glm::dot(planeNormal, pointToCheck)) - dis_OriginToPlane;

	if (resultValue > 0.0f)
	{
		std::cout << "The point is in-front of the plane";
	}
	else if (resultValue < 0)
	{
		std::cout << "The point is behind the plane";
	}
	else std::cout << "The point is on the plane";
}

// Line Segment vs Plane
void ExerciseThree()
{
	system("cls");

	const float SCALER = 1.0f;

	glm::vec3 planePoint;
	glm::vec3 planeNormal;

	glm::vec3 pointToCheck1;
	glm::vec3 pointToCheck2;
	glm::vec3 pointOnLine;

	std::cout << "Enter plane point: ";
	std::cin >> planePoint.x >> planePoint.y >> planePoint.z;
	std::cout << std::endl;

	std::cout << "Enter plane normal: ";
	std::cin >> planeNormal.x >> planeNormal.y >> planeNormal.z;
	std::cout << std::endl;

	std::cout << "Enter point 1: ";
	std::cin >> pointToCheck1.x >> pointToCheck1.y >> pointToCheck1.z;
	std::cout << std::endl;

	std::cout << "Enter point 2: ";
	std::cin >> pointToCheck2.x >> pointToCheck2.y >> pointToCheck2.z;
	std::cout << std::endl;


	pointOnLine = pointToCheck1 + (SCALER * (pointToCheck2 - pointToCheck1));

	float resultValue = glm::dot(planeNormal, (planePoint - pointToCheck1))
		/ glm::dot(planeNormal, (pointToCheck2 - pointToCheck1));

	if (resultValue > 0.0f && resultValue < 1.0f)
	{
		std::cout << "Collision Occurred. \n";
		std::cout << "Intersect between points";
	}
	else if (resultValue == 0.0f)
	{
		std::cout << "Collision Occurred. \n";
		std::cout << "Intersect at first end point";
	}
	else if (resultValue == 1.0f)
	{
		std::cout << "Collision Occurred. \n";
		std::cout << "Intersect at second end point";
	}
	else if (resultValue > 1.0f)
	{
		std::cout << "No Collision. \n";
		std::cout << "Intersection beyond second end point";
	}
	else if (resultValue < 0.0f)
	{
		std::cout << "No Collision. \n";
		std::cout << "Intersection before first end point";
	}
}

// Triangle vs Plane
void ExerciseFour()
{
	system("cls");

	const float SCALER = 1.0f;

	glm::vec3 planePoint;
	glm::vec3 planeNormal;

	glm::vec3 point1;
	glm::vec3 point2;
	glm::vec3 point3;

	std::cout << "Enter plane point: ";
	std::cin >> planePoint.x >> planePoint.y >> planePoint.z;
	std::cout << std::endl;

	std::cout << "Enter plane normal: ";
	std::cin >> planeNormal.x >> planeNormal.y >> planeNormal.z;
	std::cout << std::endl;

	std::cout << "Enter point 1: ";
	std::cin >> point1.x >> point1.y >> point1.z;
	std::cout << std::endl;

	std::cout << "Enter point 2: ";
	std::cin >> point2.x >> point2.y >> point2.z;
	std::cout << std::endl;

	std::cout << "Enter point 3: ";
	std::cin >> point2.x >> point2.y >> point2.z;
	std::cout << std::endl;


	glm::vec3 line1 = point1 + (SCALER * (point2 - point1));
	glm::vec3 line2 = point1 + (SCALER * (point3 - point1));
	glm::vec3 line3 = point2 + (SCALER * (point3 - point2));


}