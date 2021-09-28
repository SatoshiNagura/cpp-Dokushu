//練習問題3.2の回答
#include <iostream>
#include <string.h>

//1の回答
/*コンストラクターと他のメンバー関数の違いは？
定義をする際に戻り地を指定しないこと。
メンバー変数を初期化するためのリストを中身を定義するより前に行えること。
*/

//2の回答
class person{
  std::string Name;
  int Height, Weight;
  double Bmi;
public:
  person();
  void set_nhw(std::string *n, int *h, int *w);
  void BMI();
  ~person();
};

person::person():Height(-1), Weight(-1), Bmi(0.1){
  std::cout << "コンストラクターの呼び出し" << std::endl;
};

void person::set_nhw(std::string *n, int *h, int *w){
  Name = *n;
  Height = *h;
  Weight = *w;
};

void person::BMI(){
  std::cout << Bmi << std::endl;
  Bmi = (double)Weight / Height / Height;
  std::cout << Weight << ", " << Height << std::endl;
  std::cout << Name << "のBMIは，" << Bmi << std::endl;
};

person::~person(){
  std::cout << "デストラクターの呼び出し" << std::endl;
};

int main(){
  std::string name;
  int height, weight;

  std::cout << "main関数の変数宣言後" << std::endl;

  //構造体を宣言
  person Jack;
  std::cout << "構造体宣言後" << std::endl;

  //コンソール入力
  std::cin >> name >> height >> weight;

  //メンバー関数を宣言
  Jack.set_nhw(&name, &height, &weight);
  Jack.BMI();
  std::cout << "main関数の最後" << std::endl;
}
//3の回答
//RAII(Resource Aquisition Is Initialization)
