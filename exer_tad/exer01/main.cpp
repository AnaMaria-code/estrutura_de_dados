#include <iostream>
#include "tad.h"

int main(){

    Circle vec[5];

    std::cout << "First circle: \n";
    vec[0] = make_circle();
    std::cout << "Second circle: \n";
    vec[1] = make_circle();
    std::cout << "Third circle: \n";
    vec[2] = make_circle();

    vec[3] = vec[0];
    vec[3].radius += 5;

    std::cout << "Last circle: \n";
    vec[4].x = vec[2].y - 10;
    std::cout << "Input y: \n";
    std::cin >> vec[4].y;
    std::cout << "Input radius: \n";
    std::cin >> vec[4].radius;

    for(int i = 0; i < 5; i++){
        std::cout << "Circle " << i+1 << " perimeter: " << get_perim(vec[i]) << std::endl;
    }

    for(int i = 0; i < 4; i++){
        for(int j = i+1; j < 5; j++){
            if(is_same_position(vec[i], vec[j])){
                std::cout << "Circles " << i+1 << " and " << j+1 << " are in the same position. \n";
            }
        }
    }

    return 0;
}