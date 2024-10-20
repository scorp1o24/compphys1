#include<stdio.h>
#include<math.h>
int main(){
  float eps = 1;
  float x;
  while(x != 1) {
    eps /= 2;
    x = 1+eps;
    printf("eps: %f ...... x: %.5f\n",eps,x);
  }
  printf("as double\n");
  double eps_d = 1;
  double x_d;
  while(x_d != 1) {
    eps_d /= 2;
    x_d = 1+eps_d;
    printf("eps_d: %d ...... x_d: %.5d\n",eps_d,x_d);
  }
  return 0;
}
