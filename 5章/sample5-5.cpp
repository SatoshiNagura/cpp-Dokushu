//練習問題5.5の回答
#include <iostream>
#include <initializer_list>
using namespace std;
//////////////////////////////////////////////////
class S{
  int *Array;
  size_t m_size;
public:
  S(initializer_list<int> init);
  ~S();
};

S::S(initializer_list<int> init){
  size_t i = 0;
  int j = 0;
  for(int e: init){
    *Array = e;
    i++;
    j++;
    Array++;
  }
  int k;
  for(k = 0; k < j; k++){
    cout << *Array << endl;
  }
  cout << "size = " << i << endl;
}
S::~S(){
  cout << "Destruct." << endl;
}
//////////////////////////////////////////////////
int main(){
  S array {10, 2, 5, 7};
}
/*
1.の回答
int main(){
  double d = 0.0;
  float f {d};//エラー
}
float型に対応していないため。
2.の回答は記述済み
*/
