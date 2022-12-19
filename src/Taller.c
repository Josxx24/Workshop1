#include <stdio.h>
 
 char validarSimbolo(char s[1]){
	do{
		printf("Ingrese un simbolo: ");
		gets(s);
		
	}while(s[0] == 32);
	return *s;
 }

int validarTamanio(int n){
	
	do{
		printf("Ingrese el tamanio de la letra: ");
		scanf(" %i",&n);
	}while(n<=5);
	
	return n;
}

void pedirNombres(){
	char nombres[101];
	int contador=0;
	do{
		printf("Ingrese nombre y apellido: ");
		fgets(nombres,sizeof(nombres),stdin);
		contador++;
	}while(contador<6);
}

int main(){
	int n;
	char simb[1];

	pedirNombres();
	*simb=validarSimbolo(simb);
	n=validarTamanio(n);
	
	char mci[n][n];

	if(n>5)
	{
		if(n%2==0)
		{
    		for (int i = 1; i <= n; i++)
    		{
        		for (int j = 1; j <= n; j++)
        		{
            		if ((i==1) || (j==1) || (j==n) || (i==n-n/2+1))
                	printf("*",mci[i][j]);
            		else
                	printf ("   ");
        		}
        		printf("\n");
			}
    	}

		if(n%2==1)
		{
    		for (int i = 1; i <= n; i++)
    		{
        		for (int j = 1; j <= n; j++)
        		{
            		if ((i==1) || (j==1) || (j==n) || (i==n-n/2+1/2))
                	printf("*",mci[i][j]);
            		else
                	printf (" ");
        		}
        		printf("\n");
			}

	
	char mci[n][n];

    if(n>5)
    {
	        if(n%2==0)
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                    if (i== 1 || j == 1 || i==n || i==n/2 && (i+j)/2<=n/2)
                    printf("*",mci[i][j]);
                    else
                    printf(" ");
                printf(" \n");
            }
        }
        if(n%2==1)
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                    if (i== 1 || j == 1 || i==n || i==(n+1)/2 && (i+j+1)/2<=((n+1)/2))
                    printf("*",mci[i][j]);
                    else
                    printf(" ");
                printf(" \n");
            }
        }
    }
    else 
	printf("!El valor de elementos no permite formar la letra A!\n");
	}
	
	char mci[n][n];
    if(n>5)
	{
		if(n%2==0)
		{
    		for (int i = 1; i <= n; i++)
    		{
        		for (int j = 1; j <= n; j++)
        		{
            		if ((i==1) || (j==1) || (i==n-n/2+1))
                	printf("*", mci[i][j]);
            		else
                	printf (" ");
        		}
        		printf("\n");
			}
    	}

		if(n%2==1)
		{
    		for (int i = 1; i <= n; i++)
    		{
        		for (int j = 1; j <= n; j++)
        		{
            		if ((i==1) || (j==1) || (i==n-n/2+1/2))
                	printf("*", mci[i][j]);
            		else
                	printf (" ");
        		}
        		printf("\n");
			}
    	}
	}
	else 
	printf("!El valor de elementos no permite formar la letra A!\n");
	}
	
	char mc[n][n];
    if(n>5)
	{
		if(n%2==0)
		{
    		for (int i = 1; i <= n; i++)
    		{
        		for (int j = 1; j <= n; j++)
        		{
            		if ((i==1) || (j==1) || (i==n-n/2+1))
                	printf("*", mc[i][j]);
            		else
                	printf (" ");
        		}
        		printf("\n");
			}
    	}

		if(n%2==1)
		{
    		for (int i = 1; i <= n; i++)
    		{
        		for (int j = 1; j <= n; j++)
        		{
            		if ((i==1) || (j==1) || (i==n-n/2+1/2))
                	printf("*", mc[i][j]);
            		else
                	printf (" ");
        		}
        		printf("\n");
			}
    	}
	}
	
	if(n>5)
	{
		if(n%2==0)
		{
    		for (int i = 1; i <= n; i++)
    		{
        		for (int j = 1; j <= n; j++)
        		{
            		if ((i==1) || (j==n&2) || (j==n/2+1) ||((i==n) && (j<n/2+1)) )
                	printf("*", mci[i][j]);
            		else
                	printf (" ");
        		}
        		printf("\n");
			}
    	}

		if(n%2==1)
		{
    		for (int i = 1; i <= n; i++)
    		{
        		for (int j = 1; j <= n; j++)
        		{
            		if ((i==1) || (j==n&2) || (j==n/2+3/2) ||((i==n) && (j<n/2+3/2)) )
                	printf("*", mci[i][j]);
            		else
                	printf (" ");
        		}
        		printf("\n");
			}
    	}
	}
	else 
	printf("!El valor de elementos no permite formar la letra A!\n");

	
	if(n>5)
	{
		if(n%2==0)
		{
    		for (int i = 1; i <= n; i++)
    		{
        		for (int j = 1; j <= n; j++)
        		{
            		if ( (j==1) || (j==n) || ((i==j)&&(j<n-2))|| ((i+j==n+1)&&(i<n-3)))
                	printf("*", mci[i][j]);
            		else
                	printf (" ");
        		}
        		printf("\n");
			}
    	}

		if(n%2==1)
		{
    		for (int i = 1; i <= n; i++)
    		{
        		for (int j = 1; j <= n; j++)
        		{
            		if ( (j==1) || (j==n) || ((i==j)&&(j<n-2))|| ((i+j==n)&&(i<n-3)&&(i>1)))
                	printf("*", mci[i][j]);
            		else
                	printf (" ");
        		}
        		printf("\n");
			}
    	}
	}
	else 
	printf("!El valor de elementos no permite formar la letra M!\n");
	
	return 0;
	}