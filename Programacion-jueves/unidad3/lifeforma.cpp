#include <cstdio>
#include <iostream>
#include <string>
#include <map>
#include <algorithm>

 using namespace std;


#define MAX 100107

// "Cálculo del prefijo común más largo en tiempo lineal en matrices de sufijos y sus aplicaciones "
// LCP [i] = longitud del prefijo común más largo del sufijo SA [i] y el sufijo SA [i-1]

int cads[MAX]; // cadenas de entrada
int r[MAX], SA[MAX]; //salida (r = rank)
int pos[MAX];
int tmp[MAX];
int LCP[MAX]; // longest common prefix lcp
int w[MAX]; // word mapping
int N, S, gap;
bool hasLCP = false;


bool cmp(int i, int j) {
    if (pos[i] == pos[j]) {
        i += gap;
        j += gap;
        if (i < S && j < S)
            return pos[i] < pos[j];
        else
            return i > j;
    }
    return pos[i] < pos[j];
}


void buildSA() {
    for (int i = 0; i < S; ++i) {
        pos[i] = cads[i];
        SA[i] = i;      // se asume el orden
        tmp[i] = 0;     // utilizado para calcular pos []
    }
    /*
    * 1:Ordenar por 2 ^ i-gramos, utilizando los nombres lexicográficos de la iteración anterior para permitir comparaciones en 2 pasos (es decir, O (1) tiempo) cada uno
    * 2: Creando nuevos nombres lexicográficos
    */
    gap = 1;
    while (true) {
        //use la posición anterior (posición de 2 ^ (i-1) -grams, almacenada en pos) para ordenar 2 ^ i-gra
        sort(begin(SA), begin(SA) + S, cmp);

        // cambio de nombre lexicográfico => almacenar la posición de cada gra en los bigramas ordenados (SA)
        for(int i=0;i<S-1;++i) {
            int higher = cmp(SA[i], SA[i+1]);     //dado que SA está ordenado, incremente por pares
            tmp[i+1] = tmp[i] + (higher ? 1 : 0);
        }
        for(int i=0;i<S;++i) pos[SA[i]] = tmp[i]; // almacenar pos. 'previous' para cada SA [i]
        if (tmp[S-1] >= S-1) // repita hasta que todos los 2i-gramos sean diferentes
            break;
        gap = gap << 1; // siguiente iteración comprobamos 2 ^ (i + 1) -grams
    }
}

void buildLCP(int SAsize) {
    for(int i=0;i< SAsize;++i) r[SA[i]] = i;
    LCP[0] = 0;
    int h = 0;
    for (int i = 0; i < SAsize; ++i) {
        if (r[i] == 0) {
            LCP[i] = 0;
            continue;
        }
        if (r[i] > 0) {
            int j = SA[r[i]-1];
            while (i+h < SAsize && j+h < SAsize && cads[i+h] == cads[j+h]) ++h;
            LCP[r[i]] = h;
            if (h > 0) {
                --h;
                hasLCP = true;
            }
        }
    }
}
 
bool findLCS(int x, int SAsize, bool print) {
   
    bool counted[N];
    int count;
    for (int i = 1; i < SAsize; ++i) {
        if (LCP[i] >= x) {
            for(int i=0;i< N;++i) counted[i] = false;
            count = 1;
            counted[w[SA[i-1]]] = true;
            int j = i;
            while (j < SAsize && LCP[j] >= x) { // comprobar prefijo
                if (w[SA[j]] != w[SA[j]+x-1]) { // sufijo cambiado
                    break;
                }
                if (!counted[w[SA[j]]]) {
                    counted[w[SA[j]]] = true;
                    ++count;
                }
                ++j;
            }
            if (count > N/2) {
                if (print) {
                    printf("%c", 'a' + cads[SA[i]]); // imprimir siempre al menos 1 carácter
                    for (int k = 1; k < x; ++k) {
                        printf("%c", 'a' + cads[SA[i]+k]);
                    }
                    printf("\n");
                }
                else { // continuar al imprimir, pero un golpe es suficiente para tomar decisiones
                    return true;
                }
            }
            i = j-1; // saltar hacia adelante
        }
    }
    return false;
}


int main() {
    int T, SAsize, pmasLarga = -1;
    
    string linea;
    while (scanf("%d", &N) == 1 && N != 0) {
        SAsize = 0;
        getline(cin, linea); // remover fnal de la linea
        for(int i=0;i< N;++i)  {
            getline(cin, linea);
            if (linea.length() - pmasLarga > 0)
                pmasLarga = linea.length();
            for (int j = 0; j < linea.length(); ++j) {
                // cout << "setting w[" << SAsize << "] = " << i << " for word " << linea << endl;
                w[SAsize] = i;
                cads[SAsize++] = linea[j] - 'a';
            }
            cads[SAsize++] = 27+i; // final caracter de cadena
            cads[SAsize] = 0;
        }
        cads[SAsize-1] = 0;

        --SAsize;
        S = SAsize;
        buildSA();
        buildLCP(SAsize);
    
    
    //--
        int low = 1, best = -1;
        int high = pmasLarga;
        if (hasLCP) {
            while (high >= low) {
                int mid = low + (high-low)/2;
                if (findLCS(mid, SAsize, false)) {
                    low = mid + 1;
                    best = max(mid,best);
                }
                else
                    high = mid - 1;
            }
        }
        if (best != -1) {
            findLCS(best, SAsize, true);
        }
        else
            printf ("?\n");
        printf ("\n");
     }
    return 0;
}
