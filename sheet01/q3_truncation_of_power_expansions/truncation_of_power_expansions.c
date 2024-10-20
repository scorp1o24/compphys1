#include<stdio.h>
#include<math.h>

int factorial(int n);
float sine_f(int n, float angle);
double sine_d(int n, double angle);
int main(){
  float angle = M_PI/2;
  double angled = 1.50796;
  float func_sin_value_f = sin(angle);
  double func_sin_value_d = sin(angle);
  float series_sin_value_f;
  double series_sin_value_d;
  //for float:
  printf("float: sine of %f is %f (using function)\n",angle, func_sin_value_f);
  printf("now using series expansion(for the same angle)\n");
  for(int i = 0; i < 10; i++) {
    series_sin_value_f = sine_f(i+1, angle);
    printf("for %i term(s), the value is %f\n", i+1, series_sin_value_f);
  }
  //for double:
  printf("\n\ndouble: sine of %d is %d (using function)\n",angled, func_sin_value_d);
  printf("now using series expansion(for the same angle)\n");
  for(int i = 0; i < 10; i++) {
    series_sin_value_d = sine_d(i+1, angled);
    printf("for %i term(s), the value is %d\n", i+1, series_sin_value_d);
  }
  return 0;
}
float sine_f(int n, float angle) {
  //n signifies the number of terms in the power series
  int counter = 0;
  float result = 0;
  int expo;
  for(;counter < n; counter++) {
    //we define 2x+1 cause the term 1 is of the order 1, the term 2 is of the order 3 etc..
    expo = 2*counter+1;
    result += (pow(-1,counter))*(pow(angle,expo))/factorial(expo);
  }
  return result;
}
double sine_d(int n, double angle) {
  //n signifies the number of terms in the power series
  int counter = 0;
  double result = 0;
  int expo;
  for(;counter < n; counter++) {
    //we define 2x+1 cause the term 1 is of the order 1, the term 2 is of the order 3 etc..
    expo = 2*counter+1;
    result += (pow(-1,counter))*(pow(angle,expo))/factorial(expo);
  }
  return result;
}
int factorial(int n) {
  //base condition
  if (n == 1) {
     return 1;
  } 
  else {
    return n*factorial(n-1);
  }
}
