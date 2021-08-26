//練習問題1.4の回答
#include <iostream>

/*1の回答
void show_message(int *value){
  if(*value < 10 || 20 <= *value){
    std::cout << "10以上20未満ではありません。" << std::endl;
  }
  else{
    std::cout << "10以上20未満です。" << std::endl;
  }
}
int main(){
  int a = 9;
  show_message(&a);
  a = 15;
  show_message(&a);
  a = 20;
  show_message(&a);
}
*/

//2の回答は略する。

//3の回答
int main(){
  int a = 2;
  if (a + 1 == 1){
    std::cout << "a+1は1です。" << std::endl;
  }
  if (a + 1 == 2){
    std::cout << "a+1は2です。" << std::endl;
  }
  if (a + 1 == 3){
    std::cout << "a+1は3です。" << std::endl;
  }
  else{
    std::cout << "a+1は1,2,3のどれでもありません。" << std::endl;
  }
}
