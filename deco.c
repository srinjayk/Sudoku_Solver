#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* code */
	FILE *in_file  = fopen("output.txt", "r");

	int i=0;
	int j=0;
	char str[3];
	fscanf(in_file,"%s\n",str);
    int arr[81];
	int d;
	do
	{
		fscanf(in_file,"%d ",&d);
		if (d>0)
		{
			/* code */
			arr[i]=d%9+1;
			i++;

		}
	}while(d!=0);
	//printf("%d\n",i);
	/*fclose(fp);
	FILE *in_file1  = fopen("output.txt", "r");
	fscanf(in_file1,"%s\n",str);
	int arr[81];
	do
	{
		fscanf(in_file,"%d ",&d);
		if (d>0)
		{
			
			arr[j]=d;
			//printf("%d ",arr[j]);
			j++;

		}
	}while(d!=0);*/
    i=0;
	int arr1[9][9];
	int k;
	for(j=0;j<9;j++)
	{
		for(k=0;k<9;k++)
		{
			arr1[j][k]=arr[i];
			i++;
		}
	}

	for(j=0;j<9;j++)
	{
		for(k=0;k<9;k++)
		{
			printf("%d ",arr1[j][k]);
		}
		printf("\n");
	}
	
	

	return 0;
}
