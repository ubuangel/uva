//Lo que quiere es  cuantos componentes conexas hay?

//empezamos 1 comenza bfs
//con bfs vamos atener una matriz de visitados y las posiciones que visitas las vas marcando como visitados 

//tratas de visitar a sus vecinos y ya tenemos un  componente , insertar todos sus vecinos que son unos y intentar hacer bfs apartir de esa posiscion cada ves visitamos los  1 ponemos a matrizde visitados ,
de posicion a posicion si esaposicion que tien un 1 no esta visitado entonces aumentamos el numero de componentes en 1 y hacemos dfs y vamos marcando la matriz de visitados 
#include <iostream>

using namespace std;

int n;
char imagen[25][25];
//bautisan como floodfill o bfs
void floodFill(int i, int j) {

    if (i < 0 || j < 0 || i >= n || j >= n)
     	return;
    if (imagen[i][j] == '0') 
    	return;

    imagen[i][j] = '0';

    floodFill(i - 1, j - 1);
    floodFill(i - 1, j    );
    floodFill(i - 1, j + 1);
    
    floodFill(i    , j - 1);
    floodFill(i    , j + 1);

    floodFill(i + 1, j - 1);
    floodFill(i + 1, j    );
    floodFill(i + 1, j + 1);
}

int main() {

    int casos_prueba = 1;
    while (cin >> n) {

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> imagen[i][j];
            }
        }

        int result = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (imagen[i][j] == '1') {
                    result++;
                    floodFill(i, j);
                }
            }
        }
        cout << "Image numbers " << casos_prueba++ << " contains " << result << " war eagles." << endl;
    }
}
