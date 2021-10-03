//練習問題4.9の回答
#include <iostream>
#define Greet(word) greet::word()
using namespace std;
///////////////////////////////////////////////////
namespace greet{
  void hello(){
    cout << "Hello, World." << endl;
  }

  void goodbye();
  void goodbye(){
    cout << "Goodbye, deer." << endl;
  }
}
///////////////////////////////////////////////////
int main(){
  Greet(hello);
  Greet(goodbye);
}
/*
1.指定されたファイルを読み込む
2.記述済み
3.
*/
