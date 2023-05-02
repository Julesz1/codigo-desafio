#include <iostream>
using namespace std;

int main(){
  //resposta da questão número 2.

  int num, a = 0, b = 1, c = 0;
  bool fibonacci = false;

  cout << "Informe um número: ";
  cin >> num;

  while (c < num){
    c = a + b;
    a = b;
    b = c;
  }

  if (c == num) {
    fibonacci = true;
  }

  if (fibonacci) {
    cout << "O número " << num << " pertence à sequência de Fibonacci." << endl;
  } else{
    cout << "O número " << num << " não pertence à sequência de Fibonacci." << endl;
  }

  return 0;
}