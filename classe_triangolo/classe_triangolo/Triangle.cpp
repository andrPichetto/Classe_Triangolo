#include "Triangle.h"

/// @brief default constructor
Triangle::Triangle() {
	
	cout <<"Triangle - constructor - default" << endl;
	Reset();
}
/// @}

/// @brief copy constructor
/// @param o reference to the obiect that should be copied
Triangle::Triangle(const Triangle &o) {

	cout << "Triangle - cpy constructor" << endl;

	Init(o);
}

///@brief destuctor
Triangle::~Triangle() {
	cout << "Triangle - destructor" << endl;
	Reset();
}

/// @brief overload of operator = 
/// @param o reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
Triangle& Triangle::operator=(const Triangle &o){
	return *this;
}

/// @brief overload of operator == 
/// @param o reference to the object on the right side of the operator 
/// @return always false 
bool Triangle::operator==(const Triangle &o) {
	return false;

}

/// @brief default initialisatio of the object
void Triangle::Init() {
	base = height = 0;
}

/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void Triangle::Init(const Triangle& o) {
	base = o.base;
	height = o.height;
}

/// @brief total reset of the object
void Triangle::Reset() {
	base = height = 0;
}

/// @brief Set dimension of the triangle
/// @param b base
/// @param h height 
void Triangle::SetDimensions(float b, float h) {
	base = b;
	height = h;
}

/// @brief get area of the object
/// @return area
float Triangle::GetArea() {
	return (base * height) / 2;
}

/// @brief get base and height of the triangle
/// @param b base
/// @param h height
void Triangle::GetDimensions(float& b, float& h) {
	b = base;
	h = height;
}

/// @brief write an error message 
/// @param string message to be printed
void Triangle::ErrorMessage(const char* string) {

	cout << endl << "ERROR -- Triangle --";
	cout << string << endl;

}

/// @brief write a warning message 
/// @param string message to be printed
void Triangle::WarningMessage(const char* string) {

	cout << endl << "WARNING -- Triangle --";
	cout << string << endl;

}

/// @brief for debugging: all about the object
void Triangle::Dump() {

	cout << endl;
	cout << "Dimensions = " << base << ";" << height << ";" << endl;
	cout << "Area =" << GetArea() << endl;
	cout << endl;
}