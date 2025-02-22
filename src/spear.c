#include <stdio.h>

int n;
int k;
int A[100000];

int p(unsigned int x){
  int i, m;
  m = 0;
  for(i = 0; i < n; i++){
    m = m + A[i]/x;
  }
  return m >= k;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  lb = 0;
  ub = 1000000000 + 1;
  while(ub - lb > 1){
    int m = (ub + lb)/2;
    if(p(m) > 0){
      lb = m;
    }
    else{
      ub = m;
    }
  }
  printf("%d\n", lb);
  return 0;
}
