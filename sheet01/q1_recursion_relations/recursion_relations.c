#include<stdio.h>
#include<math.h>
//p_n -> p_{n+1}
int main(){
  int n;
  const float e = M_E;
  float p = 1; //n=1
  printf("p_1 is 1\n");
  for(n = 2; n < 20; n++) {
    p = e - n*p;
    printf("p_%i is %f\n",n,p);
  }
  return 0;
}


