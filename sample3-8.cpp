//練習問題3.8の回答

#include <iostream>
///////////////////////////////////////////////////////////////////
class vector3d{
  float x, y, z;
public:
  vector3d();
  explicit vector3d(float x, float y, float z);
  //フレンド関数の宣言
  friend vector3d add(const vector3d &lhs, const vector3d &rhs);
  friend vector3d sub(const vector3d &v1, const vector3d &v2);
  void dump() const;
};

vector3d::vector3d() : vector3d(0, 0, 0){}

vector3d::vector3d(float x, float y, float z) : x(x), y(y), z(z){}

vector3d add(const vector3d &lhs, const vector3d &rhs){
  vector3d result;
  result.x = lhs.x + rhs.x;
  result.y = lhs.y + rhs.y;
  result.z = lhs.z + rhs.z;
  return result;
}

vector3d sub(const vector3d &v1, const vector3d &v2){
  vector3d sub;
  sub.x = v1.x - v2.x;
  sub.y = v1.y - v2.y;
  sub.z = v1.z - v2.z;
  return sub;
}
void vector3d::dump() const{
  std::cout << x << std::endl;
}
///////////////////////////////////////////////////////////////////
int main(){
  vector3d vx(9, 3, 4), vy(10, 7, 4), vz;
  vz = sub(vx, vy);
  vz.dump();
}
/*
1.非メンバー関数
2.記述済み
*/
