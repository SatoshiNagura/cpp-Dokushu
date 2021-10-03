//練習問題4.4の回答
#include <iostream>

int main(){
  int i = 42;

  if (int i = 0 i > 0){
    std::cout << "if: " << i << std::endl;
  }
  else{
    std::cout << "else: " << i << std::endl;
  }
}

/*
1.使えない
2.初期化の手間を省くことが出来る。
3.使えないため不明だが，iの初期化がif文の中で行われているので，elseに入ってしまう。
*/
