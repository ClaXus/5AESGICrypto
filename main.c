#ifdef _WIN32
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>
#include <direct.h>
#include <io.h>

#define OS_Windows 1
#define DIV 1048576
#define WIDTH 7
#endif

#ifdef linux

#define OS_Windows 0
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#endif


int main()
{
    if(OS_Windows)
        printf("Hello world from Windows !\n");
    else
        printf("Hello World from Linux !\n");




    return 0;
}
