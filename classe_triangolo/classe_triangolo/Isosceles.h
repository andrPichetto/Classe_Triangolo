/*! \file Isosceles.h
	\brief Declaration of the class Triangle Isosceles

	Details.
*/

#ifndef ISOSCELES_H
#define ISOSCELES_H

#include<iostream>
#include"Triangle.h"

using namespace std;

///@class Triangle Isoscele
///@brief to manage the object with the shape of a Triangle Isosceles 

class Isosceles : public Triangle
{
protected:  /*COMPLETO*/

	float base;
	float height;

public:
	///@name CONSTRUCTOR/DESTRUCTOR
	///@{
	Isosceles();
	Isosceles(float b, float h);
	Isosceles(const Isosceles& r);

	~Isosceles();
	///@}
	/// 
	///@name OPERATORS
	///@{
	Isosceles& operator=(const Isosceles& r);
	bool operator==(const Isosceles& r);
	///@}

	///@name BASIC HANDLING
	///@{
	void Init();
	void Init(const Isosceles& r);
	void Reset();
	///@}
	///@name GETTERS / SETTERS
	///@{
	void SetBase(float b);
	void SetHeight(float h);
	void SetDim(float b, float h);

	float GetHeight();
	float GetBase();
	float GetSide();

	float GetPerimeter(); /* lato*2 + base */
	///@}

	/// @name DEBUG and SERIALIZATION 
	/// @{
	void ErrorMessage(const char* string);
	void WarningMessage(const char* string);
	void Dump();
	/// @}
};




#endif
