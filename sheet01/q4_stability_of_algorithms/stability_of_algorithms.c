#include<stdio.h>
#include<math.h>
double root_1(float p, float q);
double root_2(float p, float q);
int main() {
  //equation: y^2+2py-q = 0;
  double p = 1000;
  double q = pow(10,-10);
  double root_m1 = root_1(p,q);
  double root_m2 = root_2(p,q);
  printf("root of equation y^2+2py-q using method 1:\n");
  printf("%d\n",root_m1);
  printf("using method 2:\n");
  printf("%d\n",root_m2);
}
double root_1(float p, float q) {
  return -p+sqrt(pow(p,2)+q);
}
double root_2(float p, float q){
  return q/(p+sqrt(pow(p,2)+q));
}
