#include <iostream>

class vector3d{
  float x = 0, y = 0, z = 0;
public:
  void print();
};

void vector3d::print(){
  std::cout << x << std::endl;
}

int main(){
  vector3d a;
  a.print();
}
