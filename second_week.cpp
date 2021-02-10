#include <iostream> 
#include <cstring>
using namespace std; 
class MyClass { 
private: 
  int num; //포인터 형식이 아닌 멤버는 뭘해도 깊은 복사가 된다.
  int *p;  //
public: 
  MyClass(const int a, const int *b) { 
    num = *a;
    p = new int[sizeof(b)];
    memcpy(p, mc.p, sizeof(mc.p));
  } 
  //깊은 복사 생성자
  MyClass(const MyClass& mc){
    num = mc.num;
    p = new int[sizeof(mc.p)];
    memcpy(p, mc.p, sizeof(mc.p));
  }
  //디폴트 복사 생성자. 컴파일러가 자동으로 생성하나 시각화를 위하여 삽입해둠.
  MyClass(const MyClass& mc) { 
    num = mc.num;    //얘는 왜 얕은 복사 깊은복사 둘다 괜찮은데? -> int class에 이미 생성자가 오버로딩 되어있음.
    p = mc.p;
  } 
  ~MyClass() { 
    delete num; 
    cout << "~MyClass() called!" << endl; 
  } 
  void ShowData() { 
    cout << "num: " << num << endl; 
  } 
}; 
int main() { 
  MyClass mc1("MyClass!"); 
  MyClass mc2 = mc1; 
  mc1.ShowData(); 
  mc2.ShowData(); 
  return 0; 
}

