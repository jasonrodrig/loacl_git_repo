//6. Write a function that evaluates a quadratic polynomial at a point. The arguments to the
//function are an array of 3 integers (coefficients of the polynomial), and the point where the
//polynomial is to be evaluated.
 
//float coefficients[] = {2.0, -1.0, -3.2}; // Polynomial: -3.2*x^2 - 1.0*x + 2.0
//result = evaluate_quad(coefficients, 3.5);
//result == -40.7  // You may get slightly different results because of floating point inaccuracy

#include<stdio.h>
#include<math.h>

float evaluate_quad( float coefficients[] ,float num )
{
	float result = ( ( (coefficients[2]) * (num*num) ) + ( coefficients[1] * (num) ) + coefficients[0] );
	return result;
}
float main(){

	float coefficients[]={ 2.0, -1.0 , -3.2 };
	float results = evaluate_quad(coefficients, 3.5);
	printf("%f", results);
	return 0;
}

