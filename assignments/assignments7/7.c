//7. This is a generalization of problem 6.
//Write a function that evaluates the value of a polynomial at a point. The arguments to the
//function are the degree of the polynomial, an array with coefficients and the point to evaluate at.
/*float coefficients[] = {2.0, 1.0, -1.5, 0.75}; // Polynomial: 0.75*x^3 - 1.5*x^2 + 1.0*x + 2.0
int degree = 3;
result = eval_poly(degree, coefficients, 2.0);
result == 4.0
*/

#include<stdio.h>
#include<math.h>


float eval_poly( int degree, float coefficients[] , float num )
{
        float temp = 1.0;
	int i=1;
	float result= 0.0;
	while(i<degree)
	{
		result += coefficients[i]*temp;
		temp=temp*num;
		i++;
	}

	//float result = ( ( (coefficients[2]) * ( pow(num , degree-1) ) + ( coefficients[1] * ( ( pow(num , degree-2)) + coefficients[0] );
	return result;
}
float main(){

	float coefficients[]={ 2.0, 1.0 , -1.5, 0.75 };
	float results = eval_poly( 3 , coefficients , 3.5);	
	printf("%f", results);
	return 0;
}

