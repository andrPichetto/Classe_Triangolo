#include "Rectangle.h"
#include<math.h>

/// @brief default constructor
/// @{
Rectangle::Rectangle() {
	cout << "Rectangle - constructor - defaullt" << endl;
	Reset();
}
/// @}

/// @brief constructor 
/// @param b base of the Triangle Rectangle
/// @param h height of the Triangle Rectangle 
Rectangle::Rectangle(float b, float h) {
	Init();

	cout << "Triangle Rectangle - constructor" << endl;

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
Rectangle::Rectangle(const Rectangle& o) {

	cout << "Triangle - cpy constructor" << endl;

	Init(o);
}

///@brief destuctor
Rectangle::~Rectangle() {
	cout << "Rectangle - destructor" << endl;
	Reset();
}

/// @brief overload of operator = 
/// @param o reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
Rectangle& Rectangle::operator=(const Rectangle& o) {
	return *this;
}

/// @brief overload of operator == 
/// @param o reference to the object on the right side of the operator 
/// @return always false 
bool Rectangle::operator==(const Rectangle& o) {
	return false;

}

/// @brief default initialisatio of the object
void Rectangle::Init() {
	base = height = 0;
}
/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void Rectangle::Init(const Rectangle& o) {
	base = o.base;
	height = o.height;
}

/// @brief total reset of the object
void Rectangle::Reset() {
	base = height = 0;
}

/// @brief Set base of the object
/// @param b base
void Rectangle::SetBase(float b) {

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
void Rectangle::SetHeight(float h) {

	if (h < 0.) {
		WarningMessage("SetHeight: height should be > 0");
		return;
	}
	else {
		height = h;
		Triangle::SetDimensions(base,h);
	}
}

/// @brief Set dimensions of the triangle Rectangle
/// @param b base
/// @param h height
void Rectangle::SetDim(float b, float h) {

	SetBase(b);
	SetHeight(h);

	Triangle::SetDimensions(b, h);

	return;
}

/// @brief Get height of the trianlge Rectangle
/// @param h height
float Rectangle::GetHeight() {

	return height;
}

/// @brief Get base of the trianlge isoceles
/// @param b base
float Rectangle::GetBase() {

	return base;
}

/// @brief Get the side of the triangle rectangle
float Rectangle::GetSide() {

	return sqrt( base * base + height * height);

}

/// @brief Get the perimter of the triangle rectangle
float Rectangle::GetPerimeter() {

	return base + height + GetSide();
}

/// @brief write an error message 
/// @param string message to be printed
void Rectangle::ErrorMessage(const char* string) {

	cout << endl << "ERROR -- Rectangle --";
	cout << string << endl;

}

/// @brief write a warning message 
/// @param string message to be printed
void Rectangle::WarningMessage(const char* string) {

	cout << endl << "WARNING -- Rectangle --";
	cout << string << endl;

}

/// @brief for debugging: all about the object
void Rectangle::Dump() {

	cout << endl;
	cout << "Dimensions = " << base << ";" << height << ";" << endl;
	cout << "Perimeter =" << GetPerimeter() << endl;
	cout << endl;
}