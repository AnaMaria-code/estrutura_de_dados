#include <iostream>
#include "bag.h"

int main(){
    Bag bag1, bag2, bag3;
    int n, m, element, i = 0, j = 0;

    bag1 = create();
    bag2 = create();

    std::cout << "How many elements in bag 1? \n";
    std::cin >> n;

    for(int k = 0; k < n; k++){
        do{
            std::cout << "Element " << k+1 << ": \n";
            std::cin >> element;
            if(element < -20 || element > 20){
                std::cout << "Valid interval: [-20, 20]. Invalid input. \n";
            }
        }while(element < -20 || element > 20);
        put(bag1, element);
    }

    do{
        std::cout << "How many elements in bag 2? \n";
        std::cin >> m;
        if(m < n){
            std::cout << "Bag 2 should be as large or larger than 1. Invalid input. \n";
        }
    }while(m < n);

    for(int k = 0; k < m; k++){
        do{
            std::cout << "Element " << k+1 << ": \n";
            std::cin >> element;
            if(element < -30 || element > 30){
                std::cout << "Valid interval: [-30, 30]. Invalid input. \n";
            }
        }while(element < -30 || element > 30);
        put(bag2, element);
    }

    bag3 = create();

    while(i < bag2.card){
        if(bag2.filled[j]){
            if(exist(bag1, bag2.element[j])){
                put(bag3, bag2.element[j]);
            }
            i++;
        }
        j++;
    }

    i = 0;
    j = 0;

    while(i < bag1.card){
        if(bag1.filled[j]){
            if(exist(bag2, bag1.element[j])){
                put(bag3, bag1.element[j]);
            }
            i++;
        }
        j++;
    }

    std::cout << "Bag 1: \n";
    print_occurences(bag1);
    std::cout << "Bag 2 \n";
    print_occurences(bag2);
    std::cout << "Bag 3: \n";
    print_occurences(bag3);

    return 0;
}