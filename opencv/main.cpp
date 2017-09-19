#include <iostream>
#include "opencv_local.h"

int main(){
    //
    char* name = "Ari Garcia";
    char* rest = hello(name);
    std::cout << rest << "\n";
    //
    char theFilename[] = "drop.mp4";
	printf("%s\n", theFilename);
    openVideo(theFilename);
    //
    return 0;
}