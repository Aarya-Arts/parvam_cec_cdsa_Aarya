#include<stdio.h>
#include<string.h>
int main(){
    char f_name[20],l_name[20],name[50];
    printf("enter your first name:");
    scanf("%s",f_name);
    printf("enter your last  name:");
    scanf("%s",l_name);
    // strcpy=> string copy -> strcpy(resultsrting, orgsting)
    strcpy(name,f_name);
    strcat(name,l_name);
    // printf("full name: %s\n",name);
    printf("full name: %s %s\n",f_name, l_name);
    printf("Full name in upper case: %s\n",strupr(name));
    // stupr -> string upper -> coverts the given string to upper case
     printf("Full name in lower  case: %s\n",strlwr(name));
     // stlwr -> string lower  -> coverts the given string to lower  case
     printf("Full name in reversed: %s",strrev(name));
    // strrev -> string rev -> coverts the given string to reverse form  case
    



}