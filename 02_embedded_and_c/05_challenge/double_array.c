#include "double_array.h"
#include <stdio.h>

void double_array(double *arr, size_t size) {
  for (size_t i = 0; i < size; ++i) {
    printf("%lf ", arr[i]);
  }
  printf("\n");
}
