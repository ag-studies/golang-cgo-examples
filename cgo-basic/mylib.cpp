#include <iostream>
#include "mylib.hpp"

EXTERNC char* hello(char* n){
    //
    char* h = "Hello, ";
    //
    char* r;
    r = (char* )calloc(strlen(h)+strlen(n)+1, sizeof(char));
    //
    strcat(r, h);
    strcat(r, n);
    //
    return r;
}