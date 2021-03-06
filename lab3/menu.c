#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"
int Help();
int Quit();
#define CMD_MAX_LEN 128
#define DESC_LEN 1024
#define CMD_NUM 10

static tDataNode head[] = 
{
    {"help","this is help cmd\n",Help,&head[1]},
    {"version","menu program v2.0\n",NULL,&head[2]},
    {"quit","quit program success!\n",Quit,NULL}
};

int main(int argc, char const *argv[]) 
{
    while (1) 
    {
        char cmd[CMD_MAX_LEN];
        printf("Input a cmd number : ");
        scanf("%s", cmd);
        tDataNode *p = FindCmd(head,cmd);
        if (p == NULL) 
        {
            printf("This is a wrong cmd\n");
            continue;
        }
        printf("%s - %s\n", p -> cmd,p -> desc);
        if (p -> handler != NULL) 
        {
            p -> handler();
        }
    }
    return 0;
}

int Help()
{
    ShowAllCmd(head);
    return 0;
}

int Quit()
{
    exit(0);
}
