/*! \file Triangle.h
	\brief Declaration of the class Triangle

	Details.
*/

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include<iostream>

using namespace std;

/// @class Triengle
/// @brief class for Triangle

class Triangle {
protected:

	float base;
	float height;

public:

	/// @name CONSTRUCTOR/DESTRUCTOR
	/// @ {
	Triangle();
	Triangle(const Triangle& o);
	virtual ~Triangle();
	/// @}

	/// @name 
	/// @{
	Triangle& operator=(const Triangle &o);
	bool operator==(const Triangle &o);
	/// @}

	/// @name BASIC HANDLING
	/// @{
	void Init();
	void Init(const Triangle &o);
	void Reset();
	/// @}

	/// @name GETTERS/SETTERS
	/// @{
	void SetDimensions(float b, float h);
	float GetArea();  /*Posso clacolare l'area di qualsiasi triangolo con (b*h)/2 */
	void GetDimensions(float& b, float& h);
	/// @}

	/// @name DEBUG and SERIALIZATION 
	/// @{
	void ErrorMessage(const char *string);
	void WarningMessage(const char *string);
	void Dump();
	/// @}
};


#endif
