#define main k
#include<stdio.h>


// If your compiler is lenient or you’re using a system that doesn't strictly enforce entry point rules (like some online compilers or specific embedded systems), it might compile and run, because:

// main is redefined as k, and that's what the program executes.

// On standard systems (like GCC on Linux or MSVC on Windows), you'll most likely get:
// undefined reference to `main`
//becuase  the compiler still sees it as int k(), and the linker still expects main() as the entry point.
int k(){
    printf("No main, No problem");
    return 0;
}