#include <bits/stdc++.h>

using namespace std;
#define EPS 1e8

struct punto {
    double x, y;
    punto() { x = y = 0.0; }
    punto(double _x, double _y) : x(_x), y(_y) {}
    bool operator < (punto var) const { //Anular menos que la operadora
        if (fabs(x - var.x) > EPS) //útil para clasificar
            return x < var.x; // criterio par  x-coordenada
        return y < var.y;
    }
};

double distancia(punto p1, punto p2) { // distancia euclidia
    // hypot(dx, dy) returns sqrt(dx * dx + dy * dy)
    return hypot(p1.x - p2.x, p1.y - p2.y);
}

bool circulo_2pt_radio(punto p1, punto p2, double r, punto &c) {
    double d2 = (p1.x - p2.x) * (p1.x - p2.x) +
    (p1.y - p2.y) * (p1.y - p2.y);
    double det = r * r / d2 - 0.25;
    if (det < 0.0) return false;
    double h = sqrt(det);
    c.x = (p1.x + p2.x) * 0.5 + (p1.y - p2.y) * h;
    c.y = (p1.y + p2.y) * 0.5 + (p2.x - p1.x) * h;
    return true;
}

int main() {
    int n;
    double radio;
    punto c;
    while(scanf("%d",&n), n){
        vector<punto> poligono;
        for(int i=0;i<n;i++) {
            punto p;
            scanf("%lf %lf",&p.x,&p.y);
            poligono.push_back(p);
        }
        scanf("%lf",&radio);
        bool ban_circulo = false;
        for(int i=0;i<n && !ban_circulo;i++){
            for(int j=0;j<n && !ban_circulo;j++){
                if(i==j) continue;
                circulo_2pt_radio(poligono[i],poligono[j],radio,c);
                ban_circulo = true;
                for(int k=0;k<n && ban_circulo;k++)
                    if(distancia(poligono[k],c) > radio) ban_circulo = false;
            }
        }
        if(ban_circulo) cout<<"The polygon can be packed in the circle."<<"\n";
        else cout<<"There is no way of packing that polygon."<<"\n";
    }
}
