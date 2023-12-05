#include <stdio.h>

#ifdef _WIN32

void printHello() {
    printf("Hello windows!\n");
}

#elif __linux__

void printHello() {
    printf("Hello linux!\n");
}

#else

void printHello() {
    printf("Hello... who are you?\n");
}

#endif
