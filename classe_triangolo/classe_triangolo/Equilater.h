/*! \file Equilater.h
	\brief Declaration of the class Triangle Equilater

	Details.
*/

#ifndef EQUILATER_H
#define EQUILATER_H

#include<iostream>
#include"Triangle.h"

using namespace std;

///@class Triangle Equilater
///@brief to menage object with the shape of a triangle equilater
class Equilater : public Triangle
{
	
protected:		/*FACCIO INSERIRE SOLO LA BASE E DA QUELLA RICAVO L'ATEZZA COERENTE*/
	float base;     /*data un base posso avere una determinata altezza*/
	float height;	

public:
	///@name CONSTRUCTOR/DESTRUCTOR
	///@{
	Equilater();
	Equilater(float b);
	Equilater(const Equilater &r);

	~Equilater();
	///@}

	///@name OPERATORS
	///@{
	Equilater& operator=(const Equilater &r);
	bool operator==(const Equilater& r);
	///@}

	///@name BASIC HANDLING
	///@{
	void Init();
	void Init(const Equilater &r);
	void Reset();
	///@}

	///@name GETTERS / SETTERS
	///@{
	void SetBase(float b); /*serve un controllo sulle dimensioni se vanno bene*/
	void SetHeight(float h); 
	void SetDim(float b);

	float GetHeight();
	float GetBase();

	float GetPerimeter(); /* base * 3 */
	///@}

	/// @name DEBUG and SERIALIZATION 
	/// @{
	void ErrorMessage(const char* string);
	void WarningMessage(const char* string);
	void Dump();
	/// @}
};

#endif