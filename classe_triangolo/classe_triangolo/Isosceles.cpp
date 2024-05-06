#include "Isosceles.h"
#include<math.h>

/// @brief default constructor
/// @{
Isosceles::Isosceles() {
	cout << "Isosceles - constructor - defaullt" << endl;
	Reset();
}
/// @}

/// @brief constructor 
/// @param b base of the Triangle Isosceles
/// @param h height of the Triangle Isosceles 
Isosceles::Isosceles(float b, float h) {
	Init();

	cout << "Triangle Isosceles - constructor" << endl;

	if (b <= 0. || h <= 0.) {
		WarningMessage("constructor: base and height should be positive.");
		SetDim(0., 0.);
	}

	else {
		SetDim(b, h);
	}
}

/// @brief copy constructor
/// @param o reference to the obiect that should be copied
Isosceles::Isosceles(const Isosceles& o) {

	cout << "Triangle - cpy constructor" << endl;

	Init(o);
}

///@brief destuctor
Isosceles::~Isosceles() {
	cout << "Isosceles - destructor" << endl;
	Reset();
}

/// @brief overload of operator = 
/// @param o reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
Isosceles& Isosceles::operator=(const Isosceles& o) {
	return *this;
}

/// @brief overload of operator == 
/// @param o reference to the object on the right side of the operator 
/// @return always false 
bool Isosceles::operator==(const Isosceles& o) {
	return false;

}

/// @brief default initialisatio of the object
void Isosceles::Init() {
	base = height = 0;
}
/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void Isosceles::Init(const Isosceles& o) {
	base = o.base;
	height = o.height;
}

/// @brief total reset of the object
void Isosceles::Reset() {
	base = height = 0;
}

/// @brief Set base of the object
/// @param b base
void Isosceles::SetBase(float b){

	if (b < 0.) {
		WarningMessage("SetBase: base should be > 0");
		return;
	}
	else {
		base = b;
		Triangle::SetDimensions(b, height);
	}
	
}

/// @brief Set base of the object
/// @param b base
void Isosceles::SetHeight(float h) {

	if (h < 0.) {
		WarningMessage("SetHeight: height should be > 0");
		return;
	}
	else {
		height = h;
		Triangle::SetDimensions(base, height);
	}
}

/// @brief Set dimensions of the triangle isosceles
/// @param b base
/// @param h height
void Isosceles::SetDim(float b, float h) {
	
	SetBase(b);
	SetHeight(h);

	Triangle::SetDimensions(b, h);

	return;
}

/// @brief Get height of the trianlge isosceles
/// @param h height
float Isosceles::GetHeight() {

	return height;
}

/// @brief Get base of the trianlge isoceles
/// @param b base
float Isosceles::GetBase() {

	return base;
}

/// @brief Get side of the triangle isosceles
float Isosceles::GetSide() {
	return sqrt((base/2) * (base/2) + height * height);
}

/// @brief Get Perimeter of the triangle isoceles
float Isosceles::GetPerimeter() {
	return base + 2 * GetSide();
}

/// @brief write an error message 
/// @param string message to be printed
void Isosceles::ErrorMessage(const char* string) {

	cout << endl << "ERROR -- Isosceles --";
	cout << string << endl;

}

/// @brief write a warning message 
/// @param string message to be printed
void Isosceles::WarningMessage(const char* string) {

	cout << endl << "WARNING -- Isosceles --";
	cout << string << endl;

}

/// @brief for debugging: all about the object
void Isosceles::Dump() {

	cout << endl;
	cout << "Dimensions = " << base << ";" << height << ";" << endl;
	cout << "Perimeter =" << GetPerimeter() << endl;
	cout << endl;
}