#include <iostream>

using namespace std;

int mainLoop() {
    int i = 0;
    for (int i = 0; i < 20; i++) {
        printf("This loop will run forever.\n");
    }


    while (i<20) {
        i++;
        printf("This loop will run forever.\n");
    }

    do {
        printf("This loop will run forever.\n");
    } while (true);


    return 0;
}