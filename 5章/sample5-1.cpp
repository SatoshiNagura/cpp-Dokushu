//練習問題5.1の回答
#include <iostream>

void reverse(int *Array, int n);

int main(){
  int array[] = {0, 1, 2, 3, 4};
  int i;
  reverse(array, 5);
  for(i = 0; i < 5; i++){
    std::cout << array[i] << std::endl;
  }
  for(i = 0; i < 5; i++){
    std::cout << array + i << std::endl;
  }
}

void reverse(int *Array, int n){
  int k;
  int p;
  for(k = 0; k < n / 2; k++){
    p = *Array;
    *Array = *(Array + n - 1 - 2 * k);
    *(Array + n - 1 - 2 * k) = p;
    Array++;
  }
}
//1,2の回答は記述済み
