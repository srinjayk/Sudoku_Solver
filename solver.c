#include<stdio.h>

int main()
{
	/* code */
	int a=9;
	int i,j,k,l,m,p,q;
	int r=1;
	int y=0;
	int arr[10][10];
    for (i = 1; i < 10; ++i)
    {
    	/* code */
    	for (j = 1; j < 10; ++j)
    	{
    		/* code */
    		scanf("%d ",&arr[i][j]);
    	}
    	scanf("\n");
    }

    for (i = 1; i < 10; ++i)
    {
    	/* code */
    	for (j = 1; j < 10; ++j)
    	{
    		/* code */
    		printf("%d ",arr[i][j]);
    	}
    }

    //int b[830];

    //for (i = 1; i < 830; ++i)
    //{
    	/* code */
    //	b[i]=0;
    //}
    
    //for (i = 1; i < 10; ++i)
    //{
    	/* code */
    //	for (j = 1; j < 10; ++j)
    //	{
    		/* code */
    //		if (arr[i][j]!=0)
    //		{
    			/* code */
    //			int c=arr[i][j];
    //			b[i*81+j*9+c]=1;
    //		}
    //	}
    //}
    
    //for (i = 1; i < 830; ++i)
    //{
    	/* code */
    	//printf("%d\n",b[i]);
    //}
    
    //for (i = 1; i < 830; ++i)
    //{
    	/* code */
    	//printf("%d\n",b[i]);
    	//if(b[i]==1)
    	//{
    		//printf("%d 0\n",i);
    		//r++;
    	//}
    //}


    for (i = 1; i < 10; ++i)
    {
    	/* code */
    	for (j = 1; j < 10; ++j)
    	{
    		/* code */
    		if (arr[i][j]!=0)
    		{
    			/* code */
    			y++;
    		}
    		//scanf("%d ",&arr[i][j]);
    	}
    	scanf("\n");
    }


    FILE *in_file  = fopen("minisat.txt", "w");
    
    fprintf(in_file, "p cnf 729 %d\n", (y+3177));

    for (i = 1; i < 10; ++i)
    {
        /* code */
        for (j = 1; j < 10; ++j)
        {
            /* code */
            //scanf("%d ",&arr[i][j]);
            if (arr[i][j]!=0)
            {
                /* code */
                int c=arr[i][j];
                fprintf(in_file,"%d 0\n",(i*81+j*9+c));
                r++;

            }
        }
        scanf("\n");
    }

    for (k = 1; k < 10; ++k)
    {
    	/* code */
    	for (j = 1; j < 10; ++j)
    	{
    		/* code */
    		for (m = 1; m < 10; ++m)
    		{
    			
    				/* code */

    				fprintf(in_file,"%d ",(j*81+m*9+k) );
    				

    		
    		}
    		fprintf(in_file,"0\n");
            r++;
    	}
    }

    for (k = 1; k < 10; ++k)
    {
    	/* code */
    	for (j = 1; j < 10; ++j)
    	{
    		/* code */
    		for (m = 1; m < 10; ++m)
    		{
    			
    				/* code */
    				fprintf(in_file,"%d ",(m*81+j*9+k) );
    				

    		}
    		fprintf(in_file,"0 \n");
            r++;
    	}
    }

    for (k = 1; k < 10; ++k)
    {
    	/* code */
    	for (j = 1; j < 10; j=j+3)
    	{
    		/* code */
    		for (i = 1; i < 10; i=i+3)
    		{
    			/* code */
    			for(m=0;m<3;m++)
    			{
    				for (l = 0; l < 3; ++l)
    				{
    					/* code */
    					
    							/* code */
    							fprintf(in_file,"%d ",((i+l)*81+(j+m)*9+k));
    							
    						
    				}
    			}
    			fprintf(in_file,"0 \n");
                r++;

    		}
    		
    	}
    }
    
    for (k = 1; k < 10; ++k)
    {
    	/* code */
    	for(m = 1 ; m<10 ;m++)
    	{
    		fprintf(in_file,"%d ",(m*81+m*9+k));
    	}
    	fprintf(in_file,"0 \n");
        r++;
    }

    for (k = 1; k < 10; ++k)
    {
    	/* code */
    	for(m = 1 ; m<10 ;m++)
    	{
    		fprintf(in_file,"%d ",(m*81+(8-m)*9+k));
    	}
    	fprintf(in_file,"0 \n");
        r++;
    }

    for(i=1;i<10;i++)
    {
    	for(j=1;j<10;j++)
    	{
    		for(l=1;l<9;l++)
    		{
    			for(m=l+1;m<10;m++)
    			{
    				fprintf(in_file,"%d %d 0\n",-(i*81+j*9+l),-(i*81+j*9+m));
                    r++;
    			}
    		}
    	}
    }

    printf("%d\n",r );



	return 0;
}
