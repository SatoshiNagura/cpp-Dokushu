//練習問題4.2の回答
#include <iostream>

int sum(int x, int y);

class A{
  int m_v;
public:
  explicit A(int v) : m_v(v){};
  int v() const{
    return m_v;
  }
};

int main(){
  sum(10, 5);
  A a(10);
  std::cout << a.v() << std::endl;
}

int sum(int x, int y){
  return x + y;
}
