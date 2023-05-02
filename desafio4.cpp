#include <iostream>
using namespace std;

int main() {

    //distancia entre as cidades em km
    double distancia = 100.0; // Distância entre as cidades em km

    //velocidade dos veiculos em km
    double v_carro = 110.0; // Velocidade do carro em km/h
    double v_caminhao = 80.0; // Velocidade do caminhão em km/h

    //tempo que o caminhao gasta passando no pedagio(em horas 5 min = 1/12 de horas)
    double t_pedagio = 1.0/12.0; 

    //para calcular o tempo em horas em que os veiculos vao se cruzar na estrada estou dividindo a distancia que ambos vao percorrer pela soma das velocidades.
    double tempo = distancia / (v_carro + v_caminhao); 

    //aqui eu calculo a posicao em km que os veiculos estarao quando se cruzarem multiplicando a velocidade do veiculo pelo tempo calculado anteriormente (no caso do caminhão, está sendo subtraido o tempo do pedagio que sao 2 pedagios pelos 100km que é a distancia)
    double posicao_carro = v_carro * tempo; 
    double posicao_caminhao = v_caminhao * tempo - t_pedagio * distancia/2.0; 

     //verificando a posição que o caminhão está em km quando se encontram, eu verifico quantos km ele está de ribeirão (no caso do carro, a km que ele está de ribeirão é a km de posição dele pois ele está saindo de ribeirão rumo a franca)
    double caminhao_rib = 100 - posicao_caminhao;

     //aqui eu faço a validação de qual posicionamento está mais proximo de ribeirão. Se o km que o carro percorreu saindo de RP for menor que o km que o caminhao tem que percorrer para chegar até RP, o carro estará mais proximo. Caso contrario, o caminhao estará mais proximo. 
    if (posicao_carro < caminhao_rib) {
        cout << "O carro está mais próximo de Ribeirão Preto." << endl;
    } else{
        cout << "O caminhão está mais próximo de Ribeirão Preto." << endl;
    }

    return 0;

    }
