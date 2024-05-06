#include "Scalene.h"
#include <math.h>

/// @brief default constructor
/// @{
Scalene::Scalene() {

	cout << "Scalene - constructor - default" << endl;
	Reset();
}
/// @}

/// @brief constructor 
/// @param b base of the Triangle Scalene
/// @param h height of the Triangle Scalene 
Scalene::Scalene(float h, float s1, float s2) {
	Init();

	cout << "Triangle Scalene - constructor" << endl;

	if (s1 <= 0. || s2 <=0 || h <= 0.) {
		WarningMessage("constructor: the sides and height should be positive.");
		SetDim(0., 0., 0.);
	}

	else {
		SetDim(s1, s2, h);
	}

}

/// @brief copy constructor
/// @param o reference to the obiect that should be copied
Scalene::Scalene(const Scalene& o) {

	cout << "Triangle - cpy constructor" << endl;

	Init(o);
}

///@brief destuctor
Scalene::~Scalene() {
	cout << "Scalene - destructor" << endl;
	Reset();
}

/// @brief overload of operator = 
/// @param o reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
Scalene& Scalene::operator=(const Scalene& o) {
	return *this;
}

/// @brief overload of operator == 
/// @param o reference to the object on the right side of the operator 
/// @return always false 
bool Scalene::operator==(const Scalene& o) {
	return false;

}

/// @brief default initialisation of the object
void Scalene::Init() {
	base = height = 0;
}

/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void Scalene::Init(const Scalene& o) {
	base = o.base;
	height = o.height;
}

/// @brief total reset of the object
void Scalene::Reset() {
	base = height = 0;
}

/// @brief Set height of the triangle scalene
/// @param h height
void Scalene::SetHeight(float h) {

	if (h < 0) {
		WarningMessage("SetHeight: height should be > 0");
		return;
	}
	else {
		SetDim(side1, side2, h);
	}
}

/// @brief Set dimensions of the triangle scalene
/// @param b base
/// @param h height
void Scalene::SetDim(float s1,float s2, float h) {
	side1 = s1;
	side2 = s2;
	height = h;
	base = sqrt(s1 * s1 - h * h) + sqrt(s2 * s2 - h * h);

	Triangle::SetDimensions(base, h);
}

/// @brief Get height of the trianlge scalene
/// @param h height
float Scalene::GetHeight() {

	return height;
}

/// @brief Get base of the trianlge isoceles
/// @param b base
float Scalene::GetBase() {

	return base;
}

/// @brief Get perimeter of the trinagle scalene
float Scalene::GetPerimeter() {
	
	return base + side1 + side2;
}

/// @brief write an error message 
/// @param string message to be printed
void Scalene::ErrorMessage(const char* string) {

	cout << endl << "ERROR -- Scalene --";
	cout << string << endl;

}

/// @brief write a warning message 
/// @param string message to be printed
void Scalene::WarningMessage(const char* string) {

	cout << endl << "WARNING -- Scalene --";
	cout << string << endl;

}

/// @brief for debugging: all about the object
void Scalene::Dump() {

	cout << endl;
	cout << "Dimensions = " << base << ";" << height << ";" << endl;
	cout << "Perimeter =" << GetPerimeter() << endl;
	cout << endl;
}
