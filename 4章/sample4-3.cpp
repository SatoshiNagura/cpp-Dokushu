//練習問題4.3の回答
#include <iostream>

int counter = 0;
int get_counter(){
  return counter++;
}
/*
int main(){
  std::cout << get_counter() << std::endl;
  std::cout << get_counter() << std::endl;
  std::cout << get_counter() << std::endl;
}
*/
/*
1.破棄されるので，データが残らなくなる。
2.記述済み
*/
