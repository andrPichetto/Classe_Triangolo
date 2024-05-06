/*! \file Scalene.h
	\brief Declaration of the class Triangle Scalene

	Details.
*/

#ifndef SCALENE_H
#define SCALENE_H

#include<iostream>
#include"Triangle.h"

using namespace std;

///@class Triangle Scalene
///@brief to manage the object with the shape of a Triangle Scalene 

class Scalene : public Triangle
{
private:
	float side1;
	float side2;

protected:

	float base;
	float height;

public:
	///@name CONSTRUCTOR/DESTRUCTOR
	///@{
	Scalene();
	Scalene(float h, float s1,float s2);
	Scalene(const Scalene& r);

	~Scalene();
	///@}
	/// 
	///@name OPERATORS
	///@{
	Scalene& operator=(const Scalene& r);
	bool operator==(const Scalene& r);
	///@}

	///@name BASIC HANDLING
	///@{
	void Init();
	void Init(const Scalene& r);
	void Reset();
	///@}
	///@name GETTERS / SETTERS
	///@{
	void SetHeight(float h);
	void SetDim(float s1,float s2, float h);


	float GetHeight();
	float GetBase();

	float GetPerimeter(); /* somma dei tre lati tutti diversi*/
	///@}

	/// @name DEBUG and SERIALIZATION 
	/// @{
	void ErrorMessage(const char* string);
	void WarningMessage(const char* string);
	void Dump();
	/// @}
};




#endif
