#include "Equilater.h"
#include <math.h>

/// @brief default constructor
/// @{
Equilater::Equilater() {

	cout << "Equilater - constructor - default" << endl;
	Reset();
}
/// @}

/// @brief constructor 
/// @param b base of the Triangle Equilater
/// @param h height of the Triangle Equilater 
Equilater::Equilater(float b) {
	Init();

	cout << "Triangle Equilater - constructor" << endl;

	if (b <= 0.) {
		WarningMessage("constructor: base and height should be positive.");
		SetDim(0);
	}
	
	else {
		SetDim(b);
	}

}

/// @brief copy constructor
/// @param o reference to the obiect that should be copied
Equilater::Equilater(const Equilater& o) {

	cout << "Triangle - cpy constructor" << endl;

	Init(o);
}

///@brief destuctor
Equilater::~Equilater() {
	cout << "Equilater - destructor" << endl;
	Reset();
}

/// @brief overload of operator = 
/// @param o reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
Equilater& Equilater::operator=(const Equilater& o) {
	return *this;
}

/// @brief overload of operator == 
/// @param o reference to the object on the right side of the operator 
/// @return always false 
bool Equilater::operator==(const Equilater& o) {
	return false;

}

/// @brief default initialisatio of the object
void Equilater::Init() {
	base = height = 0;
}

/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void Equilater::Init(const Equilater& o) {
	base = o.base;
	height = o.height;
}

/// @brief total reset of the object
void Equilater::Reset() {
	base = height = 0;
}

/// @brief Set base of the object
/// @param b base
void Equilater::SetBase(float b) {

	if (b < 0.) {
		WarningMessage("SetBase: base should be > 0");
		return;
	}
	else {
		SetDim(b);
	}
}

/// @brief Set height of the object
/// @param h height
void Equilater::SetHeight(float h) {

	if (h < 0.) {
		WarningMessage("SetHeight: height should be > 0");
		return;
	}

	height = h;
	base = height / 0.866; /*base = height/sin(60)*/

	Triangle::SetDimensions(base, height);
}

/// @brief Set dimensions of the triangle equilater
/// @param b base
/// @param h height
void Equilater::SetDim(float b) {
	base = b;
	height = sqrt(b * b - b * b / 4); /*uso teorema di pitagora */

	Triangle::SetDimensions(b, height);
}

/// @brief Get height of the trianlge equilater
/// @param h height
float Equilater::GetHeight() {

	return height;
}

/// @brief Get base of the trianlge equilater
/// @param b base
float Equilater::GetBase() {

	return base;
}

/// @brief Get Perimeter of the trianlge equilater
float Equilater::GetPerimeter() {

	return base * 3;
}

/// @brief write an error message 
/// @param string message to be printed
void Equilater::ErrorMessage(const char* string) {

	cout << endl << "ERROR -- Equilater --";
	cout << string << endl;

}

/// @brief write a warning message 
/// @param string message to be printed
void Equilater::WarningMessage(const char* string) {

	cout << endl << "WARNING -- Equilater --";
	cout << string << endl;

}

/// @brief for debugging: all about the object
void Equilater::Dump() {

	cout << endl;
	cout << "Dimensions = " << base << ";" << height << ";" << endl;
	cout << "Perimeter =" << GetPerimeter () << endl;
	cout << endl;
}