#include "Equilater.h"
#include "Rectangle.h"
#include "Isosceles.h"
#include "Scalene.h"



int main() {

	Triangle* A, * B, * C, * D;

	Equilater TrA(4);
	Rectangle TrB(4,3); /*completo*/
	Isosceles TrC(4, 3); /*completo*/
	Scalene TrD(3, 4, 5); /*completo*/

	A = &TrA;
	B = &TrB;
	C = &TrC;
	D = &TrD;
	cout << "---------------Triangle Equilater---------------" << endl;
	A->Dump();
	TrA.Dump();

	cout << "Change height." << endl;
	TrA.SetHeight(8);
	A->Dump();
	TrA.Dump();

	cout << "---------------Triangle Rectangle---------------" << endl;
	B->Dump();
	TrB.Dump();

	cout << "---------------Triangle Isosceles---------------" << endl;
	C->Dump();
	TrC.Dump();

	cout << "---------------Triangle Scalene----------------" << endl;
	D->Dump();
	TrD.Dump();

	return 0;
}