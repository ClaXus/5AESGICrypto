#ifdef _WIN32
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>
#include <direct.h>
#include <io.h>
#include <conio.h>

#define GetCurrentDir _getcwd
#define OS_Windows 1
#define DIV 1048576
#define WIDTH 7
#endif

#ifdef linux

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define OS_Windows 0
#define GetCurrentDir getcwd
#endif

#define FILENAME_MAX 255
#define DEBUG_MODE 1

int main(int argc, char **argv)
{

    char base_path[FILENAME_MAX];

    if(argc < 2 && !DEBUG_MODE){
        printf("Un argument est requis \n");
        return 0;
    }
    else{
        base_path = argv[1];
    }

    GetCurrentDir(base_path, sizeof(base_path));

    base_path[sizeof(base_path) - 1] = '\0';
    printf("Hello world ! Current directory : %s\n", base_path);

    if(OS_Windows){
        printf("Hello world from Windows ! \n");



    }
    else{
        printf("Hello World from Linux !\n");


    }




    return 0;
}
