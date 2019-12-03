#include <stdio.h>

int main()
{

    char chess[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (i == 1 || i == 6)
                chess[i][j] = 'P';
	    
            else
            if (i==0 || i==7){
		
		if (j == 0 || j == 7)
			chess[i][j] = 'R';
	    	if (j == 1 || j == 6)
			chess[i][j] = 'N';
		if (j == 2 || j == 5)
			chess[i][j] = 'B';
		if (j == 3)
			chess[i][j] = 'Q';
		if (j == 4)
			chess[i][j] = 'K';
            }
	    else chess[i][j]=' ';
        }
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            printf("%c", chess[i][j]);
        }
        printf("\n");
        
    }

   
    return 0;
}
