#include <stdio.h>

int sum(int a, int b, int *resu1, int *resu2){
    *resu1 = a * 2;
    *resu2 = b * 2;
    return 0;
}


int main() {
  
    int res1, res2;
    sum(2,3, &res1, &res2);
    printf("the result of the sums gave: %d (a) and %d  (b)", res1, res2);
  
    return 0;
}
