



#include<stdio.h>
#include<string.h>

typedef struct
{
	char combn_positive[10];
	int mpn;
	int lower;
	int upper;

}bacteria;


// details and  number of entries
void read_table(bacteria[],int);
// combination to search
void search_table(bacteria[],int,char[]);


void main()
{
	bacteria bac_table[20];
	char search_combn[10];
	int num_entries,search_res;
	// read number of entries
	scanf("%d",&num_entries);
	//read all entries in the table
	read_table(bac_table,num_entries);
	// take the combination to be searches as input
	scanf("%s",search_combn);

	search_res = search_table(bac_table,num_entries,search_combn);
	if (search_res == -1)
		printf("combination not found \n");
	else
		printf("combination is found",search_res);


void read_table(bacteria tab[], int num)
{
	int counter;
	for (counter = 0;counter<=num;counter++)
	{
		scanf("%s",tab[counter].combn_positive);



		scanf("%d",&tab[counter].mpn);
		scanf("%d",&tab[counter].lower);
		scanf("%d",&tab[counter].upper);

	}
}


int search_table(bacteria tab[], int num,char search_combn)

{
	int counter;
	for (counter = 0;counter<= num;counter++)
	{
		if (strcmp(tab[counter].combn_positive,search_combn) == 0)
			return counter;	

	}
	return -1;
}	

}