#include <iostream>
#include <string>

using namespace std;

int main() {
   string palavra, invertida;
   cout << "Digite uma palavra: ";
   cin >> palavra;

  //aqui eu uso uma estrutura laço para fazer um loop que percorre o "tamanho" da palavra informada ao contrario (-1)
   int tam = palavra.length();
   for (int i = tam - 1; i >= 0; i--) {
      invertida += palavra[i];
   }

   cout << "A palavra invertida é: " << invertida << endl;

   return 0;
}
