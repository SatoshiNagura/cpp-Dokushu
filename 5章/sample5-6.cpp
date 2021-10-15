//練習問題5.6の回答
#include <iostream>

class S{
public:
  S(){std::cout << "Construct at: " << this << std::endl;}
  ~S(){std::cout << "Destruct at: " << this << std::endl;}
};

void copy(S s){
  std::cout << "value address: " << &s <<std::endl;
}

void copy_address(S &s){
  std::cout << "address address: " << &s << std::endl;
}

int main(){
  S a;
  std::cout << "値渡し前" << std::endl;
  copy(a);
  std::cout << "値渡し後" << std::endl;
  std::cout << "参照渡し前" << std::endl;
  copy_address(a);
  std::cout << "参照渡し後" << std::endl;
}
/*
値渡し
参照渡し
*/
