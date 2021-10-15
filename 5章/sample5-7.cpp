//練習問題5.7の回答
#include <iostream>
/*
1.の回答
変数の寿命が関数の終了と動悸するため，参照を返せない
int& function(){
  int value = 0;
  return value;
}

int main(){
  int& value = function();
  value = 10;
}
*/
//2.の回答
class S{
  int Value;
public:
  int& set();
  int& get();
}
