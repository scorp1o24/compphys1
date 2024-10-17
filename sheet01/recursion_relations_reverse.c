#include<stdio.h>
#include<math.h>
//p_{n-1} -> p_n
int main(){
  int n;
  const float e = M_E;
  float p = 4.23213;
  for(n = 20; n > 0; n--){
    p = (e-p)/n;
    printf("p_%i is %f\n",n,p);
  }
}
