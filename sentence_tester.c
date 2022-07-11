#include <stdio.h>
#include <string.h>

int main(char s)
{
    int i,j,k,length = 0 , wordnum = 0 , vnum = 0;
    char vowels ["AaEeIiUuOoYy"];
    char space = " ";
    for (i = 0 ; s[i] != "." ; i++)
    {
        for(j = 0 ; vowels[j] ; j++)
    {
        if(s[i] == vowels[j])
        {
            vnum++;
        }
    }
        if(s[i] == " ")
         {
            wordnum++;
        }
        length++;
   
    }
 printf("length of sentence is := %d\n number of vowels is := %d\n number of words := %d\n",length,vnum,wordnum);   
return 0;
}