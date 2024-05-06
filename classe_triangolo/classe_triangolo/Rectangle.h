/*! \file Rectangle.h
	\brief Declaration of the class Triangle Rectangle

	Details.
*/

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include<iostream>
#include"Triangle.h"

using namespace std;

///@class Triangle Rectangle
///@brief to manage the object with the shape of a Triangle Rectangle
class Rectangle : public Triangle
{
protected:  /*COMPLETO*/
	float base;
	float height;

public:
	///@name CONSTRUCTOR/DESTRUCTOR
	///@{
	Rectangle();
	Rectangle(float b, float h);
	Rectangle(const Rectangle& r);

	~Rectangle();
	///@}

	///@name OPERATORS
	///@{
	Rectangle& operator=(const Rectangle& r);
	bool operator==(const Rectangle& r);
	///@}

	///@name BASIC HANDLING
	///@{
	void Init();
	void Init(const Rectangle& r);
	void Reset();
	///@}

	///@name GETTERS / SETTERS
	///@{
	void SetBase(float b);
	void SetHeight(float h);
	void SetDim(float b, float h);

	float GetBase();
	float GetHeight();
	float GetSide();

	float GetPerimeter();
	/// @}

	/// @name DEBUG and SERIALIZATION 
	/// @{
	void ErrorMessage(const char* string);
	void WarningMessage(const char* string);
	void Dump();
	/// @}

};
#endif