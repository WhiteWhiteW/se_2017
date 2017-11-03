#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "linktable.h"
#include "menu.h"

int Time(int argc, char *argv[])
{
    time_t t = time(0);
    char temp[64];
    strftime(temp, sizeof(temp), "%Y/%m/%d %X %A", localtime(&t));
    puts(temp);
    return 0;
}

int Quit(int argc, char *argv[])
{
    exit(0);
}

int main(int argc, char *argv[])
{
    MenuConfig("version", "menu program v3.0", NULL);
    MenuConfig("time", "this is time cmd!", Time);
    MenuConfig("quit", "this is quit cmd!", Quit);

    ExecuteMenu();
    return 0;
}
