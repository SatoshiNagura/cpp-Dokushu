//練習問題5.4の回答
#include <iostream>
#include <string>
using namespace std;
//////////////////////////////////////////
class S{
  string Name;
  int N;
public:
  S(): Name("None"), N(0){
    cout << "None Data." << endl;
  }
  S(int n, string name): Name(name), N(n){
    cout << "Initialize." << endl;
  }
  void show(){
    cout << "p. " << N << endl;
    cout << "Title: " << Name << endl;
  }
  ~S(){
    cout << "Destruct." << endl;
  }
};
//////////////////////////////////////////
int main(){
  S *Book = new S[10]{
    S{10, "ehon"},
    S{300, "novel"},
    S{500, "sankousho"}
  };
  int i;
  for(i = 0; i < 5; i++){
    Book[i].show();
  }
  delete [] Book;
  cout << "main end." << endl;
}
