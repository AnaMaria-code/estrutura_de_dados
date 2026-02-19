#include <iostream>

typedef struct{
    double x, y, radius;
} Circle;

Circle make_circle(){
    Circle c;
    std::cout << "Input circle x coord: \n";
    std::cin >> c.x;
    std::cout << "Input circle y coord: \n";
    std::cin >> c.y;
    std::cout << "Input circle radius: \n";
    std::cin >> c.radius;

    return c;
}

double get_x(Circle c){
    return c.x;
}

double get_y(Circle c){
    return c.y;
}

double get_radius(Circle c){
    return c.radius;
}

double get_diam(Circle c){
    return c.radius*2;
}

double get_perim(Circle c){
    return c.radius*2*3.14;
}

void change_radius(Circle &c){
    std::cout << "Input new radius: \n";
    std::cin >> c.radius;
}

void change_x(Circle &c){
    std::cout << "Input new x: \n";
    std::cin >> c.x;
}

void change_y(Circle &c){
    std::cout << "Input new y: \n";
    std::cin >> c.y;
}

void compare_circles(Circle c, Circle d){
    if(c.radius > d.radius){
        std::cout << "The first is bigger. \n";
    } else if (c.radius < d.radius){
        std::cout << "The second is bigger. \n";
    } else {
        std::cout << "They are equal. \n";
    }
}

bool is_same_position(Circle c, Circle d){
    if(c.x == d.x && c.y == d.y){
        return true;
    }
    return false;
}