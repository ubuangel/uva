#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

static const double EPS = 1e-9;


struct Punto { double x, y; };

struct Linea { double a, b, c; };


void P_linea(Punto p1, Punto p2, Linea &l) 
{
    //l es una linea vertical.
    if (p1.x == p2.x)
    {
        l.a = 1.0;
        l.b = 0;
        l.c = -p1.x;
    }
    else 
    {
        l.a = -(p1.y - p2.y) / (p1.x - p2.x);
        l.b = 1.0;
        l.c = -(l.a * p1.x) - p1.y;
    }
}

bool igualdad(Linea l1, Linea l2)
{
    return (fabs(l1.a - l2.a) < EPS 
            && fabs(l1.b - l2.b) < EPS
            && fabs(l1.c - l2.c) < EPS);
}

/** Si l1 y l2 no son paralelos, devuelve verdadero y almacena sus intersecciones.
     punto en p; de lo contrario, devuelve falso. */
bool Es_interseccion(Linea l1, Linea l2, Punto &p) {

    // If l1 and l2 are parallel, return false.
    if (fabs(l1.a - l2.a) < EPS 
        && fabs(l1.b - l2.b) < EPS)
        return false;

    // Resolver el sistema de dos ecuaciones algebraicas lineales.
    p.x = (l2.b * l1.c - l1.b * l2.c) / (l2.a * l1.b - l1.a * l2.b);

    if (fabs(l1.b) > EPS)
        p.y = -(l1.a * p.x + l1.c);
    else
        p.y = -(l2.a * p.x + l2.c);

    return true;
}

/** Devuelve la distancia euclidiana entre p1 y p2. */
double distancia(Punto p1, Punto p2)
{
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) 
                 + (p1.y - p2.y) * (p1.y - p2.y));
}

/** Dado que p1, p2 y p3 son colineales, ¿está p3 en el segmento formado entre p1 y p2? */
bool esSegmento(Punto p1, Punto p2, Punto p3)
{
    if (distancia(p1, p3) - EPS <= distancia(p1, p2)
        && distancia(p2, p3) - EPS <= distancia(p1, p2))
        return true;

    return false;
}

/**¿Está p3 dentro del rectángulo formado por p1 superior izquierdo y p2 inferior derecho? */
bool estaenRectangulo(Punto p1, Punto p2, Punto p3)
{
    if (p3.x <= max(p1.x, p2.x)
        && p3.x >= min(p1.x, p2.x)
        && p3.y <= max(p1.y, p2.y)
        && p3.y >= min(p1.y, p2.y))
        return true;

    return false;
}

int main()
{    
    int n;
    cin >> n;

    while ( n-- )
    {
        Punto line[2];
        Punto rectangulo[4];

        cin >> line[0].x >> line[0].y 
            >> line[1].x >> line[1].y;
        cin >> rectangulo[0].x >> rectangulo[0].y 
            >> rectangulo[2].x >> rectangulo[2].y;

 
        if (estaenRectangulo(rectangulo[0], rectangulo[2], line[0])
            || estaenRectangulo(rectangulo[0], rectangulo[2], line[1]))
        {
            cout << "T" << endl;
            continue;
        }
        
       
        rectangulo[1] = rectangulo[0];
        rectangulo[3] = rectangulo[2];
        swap(rectangulo[1].y, rectangulo[3].y);

        Linea lineSegment;
        P_linea(line[0], line[1], lineSegment);
        bool intersect = false;
      
        for (int i = 0; i < 4; ++i) 
        {
          
            Linea rectangleEdge;
            P_linea(rectangulo[i], rectangulo[(i + 1) % 4], rectangleEdge);


            if (igualdad(lineSegment, rectangleEdge))
            {
                if (esSegmento(line[0], line[1], rectangulo[i])
                    || esSegmento(line[0], line[1], rectangulo[(i + 1) % 4]))
                {
                    intersect = true;
                    break;
                }
                continue;
            }

 
            Punto p;
            if (Es_interseccion(lineSegment, rectangleEdge, p)) 
            {
                if (esSegmento(line[0], line[1], p)
                    && esSegmento(rectangulo[i], rectangulo[(i + 1) % 4], p))
                {
                    intersect = true;
                    break;
                }
            }
        }

        if (intersect)
            cout << "T" << endl;
        else
            cout << "F" << endl;
    }
    return 0;
}
