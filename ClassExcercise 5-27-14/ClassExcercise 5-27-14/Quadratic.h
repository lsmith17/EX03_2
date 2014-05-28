#ifndef QUADRATICFORMULA_H_
#define QUADRATICFORMULA_H_
#include <iostream>

class QuadraticEquation
{
public:
	double a, b, c;
	double root1, root2;
	double discriminant;
	QuadraticEquation(){}
	float solveQuad(const double, const double, const double);
	float getDescriminant() { return discriminant; }
	float getA(){ return a; }
	float getB(){ return b; }
	float getC(){ return c; }
	float getRoot1() {return root1; }
	float getRoot2() { return root2; }
};
#endif
