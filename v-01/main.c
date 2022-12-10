#include <stdio.h>
#include <stdlib.h>

void ExcecComp(int choosed)
{

	switch(choosed)
	{
	  
		case 01:
		    system("./gcc_v.sh");
		    break;

		case 02:
		    system("./g++_v.sh");
		    break;

		case 03:
		    system("./python_v.sh");
		    break;

		case 04:
		    system("./java_v.sh");
		    break;

		case 05:
		    system("./csharp_.sh");
		    break;
		case 11:
			system("./gcc_e.sh");
			break;
		case 12:
			system("./g++_e.sh");
			break;
		case 13:
			system("./python_e.sh");
			break;
		case 14:
			system("./java_e.sh");
			break;
		case 15:
			system("./csharp_e.sh");
			break;
		default:
		    printf("Invaild\n", );

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
    ExcecComp(choosed);
	
    return 0;
}
