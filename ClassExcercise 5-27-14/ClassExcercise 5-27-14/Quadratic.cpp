#include <iostream>
#include <cmath>
#include <Quadratic.h>
class QuadraticEquation
{
public:
		
			float QuadraticEquation::getDescriminant(){
				discriminant = ((b*b) - (4 * a*c));
				if (a == 0)
				{
					cout << "Can't divide by zero" << endl;
				}
				
				if (discriminant < 0)
				{
					cout << "Sorry, can't produce an imaginary number" << endl;
				}
				else(discriminant > 0);
			
				float QuadraticEquation::getRoot1(){
				root1 = ((-1 * b) + (sqrt(discriminant)) / (2 * a));
			}
			float QuadraticEquation::getRoot2(){
				root2 = ((-1 * b) - (sqrt(discriminant)) / (2 * a));
			}


	}

};
