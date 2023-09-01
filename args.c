//to print the help page of a command
//2023/9/1
#include <stdio.h>

void args(int argc,char *argv[]);

int main(int argc,char *argv[])
{
    args(argc,argv);
    return 0;
}

void args(int argc,char *(argv[]))
{
    int c = 0;
    while(--argc > 0 && (*(++argv)) [0] == '-'){
        while (c = *++argv[0])
        {
            switch(c)
            {
                case 'h':
                    printf("this is a help\n");
                    break;
                case 'v':
                    printf("1\n");
                    break;
                case 'd':
                    printf("debug\n");
                    break;
                default:
                    printf("unknow\n");
                    break;
        }
        
    }
    }
}

