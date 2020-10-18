#include "pch.h"
#include "Point.h"
#include <iostream>

/*void increase(int &x)
{
    x++;
}*/

/*struct Points
{
    int x = 1;
    int y = 2;
    int z = 3;
};

void increase(Points& points)
{
    points.x++;
}*/

/*class Points
{
public:
    int x;
    int y;

    void writeXY(int _x, int _y);
    void read();
};

void Points::writeXY(int _x, int _y)
{
    x = _x;
    y = _y;
}

void Points::read()
{
    cout << "x = " << x << "\ny = " << y << "\n";
}*/

int main()
{
    Point point_1(3,4);
    Point point_2;
    Point copy_p1(point_1);

    std::cout << "Point 1" << std::endl;
    point_1.read();

    std::cout << "Point 2" << std::endl;
    point_2.read();

    std::cout << "Point 3 (Point 1 copy)" << std::endl;
    copy_p1.read();

    /*Points points;

    points.writeXY(10, 4);
    points.read();*/

    /*std::cout << "Hello new programmo!\n";
    /int tab[20][5];
    int a = 1;
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            tab[i][j] = a;
            cout << tab[i][j] << " ";
            a++;
        }
        cout << "\n";
    }*/

    /*for (int i = 0; i < 100; i++)
    {
        // wyrownanie miejsca w tabeli
        cout.width(10);

        cout << i;
        if (i % 5 == 4) cout << endl;
    }*/

    /*int x = 10;
    increase(x);
    cout << "x = " << x;*/

    /*Points points;

    cout << "Punkty przed: " << points.x << " " << points.y << " " << points.z << endl;
    increase(points);
    cout << "Punkty po: " << points.x << " " << points.y << " " << points.z << endl;*/

    /*int** tab = new int *[10];

    for (int i = 0; i < 10; i++)
    {
        tab[i] = new int[20];
    }

    for (int i = 0; i < 10; i++)
    {
        delete[] tab[i];
    }
    delete[] * tab;*/

    return 0;
}
