#include <stdio.h>
#include <stdlib.h>

static int a = 0; // variavel global, alocacao estatica

 void incremento(void){
 
           int b = 0; //variavel altomatica 
    static int c = 0; // variavel local, alocacao estatica
    
    
    printf("a: %d,b: %d,c: %d\n", a, b, c);
    
    a++;
    b++;
    c++;
    
    }

int main(void) {
	
	int i;
	for(i = 0; i < 5; i++)
	
	incremento();
	
	system("pause");
	
	return (0);
	
}
