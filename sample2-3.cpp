//2.3の回答
#include <iostream>

/*1の回答
int main(){
  int i = 0;
  int &j = i;

  j = 42;

  std::cout << i << std::endl;
}
*/

//2の回答
int main(){
  const int i = 0;
  const int &r = i;
  std::cout << r << std::endl;
}
