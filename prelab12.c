/*
 * CS1050
 * Fall 2020
 * Prelab 11 
 * by Jim Ries
 */
#include <stdio.h>

// Symbolic Constants
#define FILENAME "DnDMonsterScores.csv"

// Main
int main(void)
{
    FILE * fp;
    int count=0;
    int totalac=0;
    int totalhp=0;
    char name[256];

    fp = fopen(FILENAME,"r");
    if (fp)
    {
        fgets(name,255,fp);
        name[255]='\0';
        printf("Header line was: %s\n",name);
        while (fp && !feof(fp))
        {
            int ac,hp,str,dex,con,intel,wis,cha;
            if (9==fscanf(fp," %[^,],%d,%d,%d,%d,%d,%d,%d,%d,",name,&ac,&hp,&str,&dex,&con,&intel,&wis,&cha))
            {
                count++;
                totalac+=ac;
                totalhp+=hp;
                printf("%d) \"%s\" : AC=%d,HP=%d\n",count,name,ac,hp);
            }
        }
    }
    fclose(fp);

    printf("\n\nTotal monster count = %d\n",count);
    printf("Average AC = %0.2f\n",(float)totalac/(float)count);
    printf("Average HP = %0.2f\n",(float)totalhp/(float)count);
}
