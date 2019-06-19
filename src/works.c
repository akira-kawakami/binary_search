#include <stdio.h>

int n;
int k;
int A[100000];

int p(unsigned int x){
  int i,m,l;
  m = x;
  l = 1;
  for(i = 0; i < n; i++){
    if(x < A[i]){
      l = n + 1;
      break;
    }
    else if(m >= A[i]){
      m = m - A[i];
    }
    else{
    m = x - A[i];
    l = l + 1;
    }
  }
    return l <= k;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  lb = 0;
  ub = 100000 * 10000 + 1;
  while(ub - lb > 1){
    int m = (ub + lb)/2;
    if(p(m) > 0){
      ub = m;
    }
    else{
      lb = m;
    }
  }
  printf("%d\n", ub);

  return 0;
}
