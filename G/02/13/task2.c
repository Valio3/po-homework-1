#include <stdio.h>


char* find(char *haystack, char needle) 
{
    
int i = 0;
   
 while(haystack[i] != '\0') 
{
        
if(haystack[i] == needle) 
{
            
return &haystack[i];
        
}
        
i++;
    
}
    
return NULL;    

}


int main() 
{
    
char c, line[400];
    
int i = 0;
    
int res;
   
char* found;
   
while((c = getchar()) != '\n') 
{
        
line[i++] = c;
    
}
    
line[i] = '\0';
    
found = find(line, getchar());
    
if(!found) 
{
        
res = -1;
   
}
    
for(i = 0; line[i] != '\0'; ++i) 
{
        
if(&line[i] == found) 
{
            
res = i;
        
}
    
}
    
printf("\n%d\n", res);
   
return 0;

}
