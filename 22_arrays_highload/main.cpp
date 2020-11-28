#include <iostream>
#include <cstdlib>
using namespace std;

const int SIZE = 3;

class atype {
  int a[SIZE];
public:
  atype() {
    register int i;
    for(i = 0; i < SIZE; i++) a[i] = i;
  }
  int &operator[](int i);
};

int &atype::operator[](int i){
  if (i<0 || i > SIZE-1) {
    cout << "\n Значение индекса ";
    cout << i << " выходит за границы массива.\n"; exit(1);
  }
  return a[i];
}

int main()
{
  cout << "22_arrays_highload" << endl;

  atype ob;
  cout << ob[2];
  cout << " ";
  ob[2] = 25;
  cout << ob[2];
  ob[3] = 44;
  
  return 0;
}
