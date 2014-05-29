#include <iostream>
#include <cmath>
class QuadraticEquation
{
private:
	int a;
	int b;
	int c;
public:
	QuadraticEquation(double a, double b, double c){
	}
	float getA(){
		return a;
	}
	float getB(){
		return b;
	}
	float getC(){
		return c;
	}
	float getDiscriminant() {
		return (b*b) - (4 * a*c);
	}
	float getRoot1() {
		if (getDiscriminant() < 0)
			return 0;
		else{
		return (-b + sqrt(getDiscriminant())) / (2 * a);
	}
	}
	float getRoot2() {
		if (getDiscriminant() < 0)
			return 0;

		else{
			return (-b - sqrt(getDiscriminant())) / (2 * a);
		}
	}
};

int main(){
	
	double a, b, c, discriminant;
	cout << "Enter the three coefficients: a, b, c " << endl;
	cin << a << b << c;

	QuadraticEquation Q(a, b, c);
	discriminant = Q.getDiscriminant;

	if (discriminant < 0)
		cout << "Can't compute. Imaginary number." << endl;
	else if (discriminant == 0)
		cout << "The root is: " << Q.getRoot1() << endl;
	else {
		cout << "The first root is: " << Q.getRoot1() << " The second root is: " << Q.getRoot2() << endl;

		return 0;
	}


}