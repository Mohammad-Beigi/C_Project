#include "main.h"

#define MAX_CHAR   20

int main()
{
    char word [MAX_CHAR];
    char right[MAX_CHAR];
    char wrong[MAX_CHAR];
    char ch;
    unsigned short n_right;
    unsigned short n_wrong;
    unsigned short correct;
    
    FILE *fptr = fopen("../words.txt","r");

    while ( fscanf(fptr, "%s", word) != EOF )
    {
        int i;
        for(i=0; word[i]; i++)
        {
            right[i] = '-';
            wrong[i] = '*';
        }
        right[i] = '\0';
        wrong[i] = '\0';

        n_right = 0;
        n_wrong = 0;

        for(int i=0; i<26; i++)
        {
            printf("Make a guess: ");
            scanf("%c", &ch);
            while(getchar() != '\n');
            correct = 0;
            for(int i=0; word[i]; i++) 
                if(right[i]=='-' && ch==word[i])
                {
                    right[i] = ch;
                    n_right++;
                    correct = 1;
                }
            if(!correct)
            {
                wrong[n_wrong] = ch;
                n_wrong++;
            }
            printf("%s\n", right);
            printf("%s\n", wrong);

            if(word[n_wrong] == '\0')
            {
                printf("You lose. The correct answer is: %s\n", word);
                break;
            }
            if(word[n_right] == '\0')
            {
                printf("You wine son. Congrajulation.\n");
                break;
            }
        }
        
        getchar();
    }

    fclose(fptr);
    return 0;
}