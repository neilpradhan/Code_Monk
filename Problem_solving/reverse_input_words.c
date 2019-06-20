// taking a sentence as input and reversing that sentence using recurrsion
# include <stdio.h> 


void reverse_input_words(char n)
{	// base case
    char word[12];// maximum word length would be 12
    if (n<=1)
    {
    scanf("%s", word);
    printf("%s \n",word);
    }
    else
{
    	scanf("%s",word);
    	reverse_input_words(n-1);
    	printf("%s\n",word);

}
    
}

int main() 
{ 
   // mention number of words below here 3
   reverse_input_words(3); 
   return 0; 
} 
