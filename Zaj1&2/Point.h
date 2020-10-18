#pragma once
#include <iostream>

class Point
{
private:
    int x;
    int y;

public:
    Point(int, int);
    Point();
    Point(Point&);
    ~Point();

    void func(Point&);   //<- by konstruktor nie musial kopiowac
    void read();
};

