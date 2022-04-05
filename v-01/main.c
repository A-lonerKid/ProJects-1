#include <stdio.h>
#include <stdlib.h>

void excecuter(int choosed)
{
    if(choosed == 01)
    {
        system("./gcc_e.sh");
    }
    else if(choosed == 02)
    {
        system("./g++_e.sh");
    }
    else if(choosed == 03)
    {
        system("./python_e.sh");
    }
    else if(choosed == 04)
    {
        system("./java_e.sh");
    }
    else if(choosed == 05)
    {
        system("./csharp_e.sh");
    }
    else
    {
        printf("invaild");
    }
	
}


int main()
{
    int choosed;
    printf("compile\nGcc ; 1\nG++ ; 2\nPython ; 3\nJava ; 4\nCsharp ; 5\n ");
    printf(" ");
    printf("execute\nGcc ; 11\nG++ ; 12\nPython ; 13\nJava ; 14\nCsharp ; 15\n ");
 
    printf("Choose  :");
    scanf("%d",&choosed);
    if(choosed == 1)
    {
        system("./gcc_v.sh");
    }
    else if(choosed == 2)
    {
        system("./g++_v.sh");
    }
    else if(choosed == 3)
    {
        system("./python_v.sh");
    }
    else if(choosed == 4)
    {
        system("./java_v.sh");
    }
    else if(choosed == 5)
    {
        system("./csharp_.sh");
    }
    else if(choosed == 11)
    {
        system("./gcc_e.sh");
    }
    else if(choosed == 12)
    {
        system("./g++_e.sh");
    }
    else if(choosed == 13)
    {
        system("./python_e.sh");
    }
    else if(choosed == 14)
    {
        system("./java_e.sh");
    }
    else if(choosed == 15)
    {
        system("./csharp_e.sh");
    }
    else
    {
        printf("invaild");
    }
    return 0;
}
