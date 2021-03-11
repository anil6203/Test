#include <stdio.h>
#include<string.h>

int main() {
	char word[100];
	printf("Enter the string (enter 'null' for empty string)\n");
	gets(word);
	int i = 0, state = 0;
	if(strcmp(word, "null") == 0)
	    printf("String Accepted\nIt belongs to a* pattern\n");
	else{
	    while(word[i] != '\0'){
	        if(word[i] != 'a' && word[i] != 'b'){
	            state = 6;
	            break;
	        }
	        switch(state){
	            case 0:
	            if(word[i] == 'a')
	                state = 1;
	            else
	                state = 3;
	            break;
	            case 1:
	            if(word[i] == 'a')
	                state = 2;
	            else
	                state = 4;
	            break;
	            case 2:
	            if(word[i] == 'a')
	                state = 2;
	            else
	                state = 3;
	            break;
	            case 3:
	            if(word[i] == 'a')
	                state = 6;
	            else
	                state = 3;
	            break;
	            case 4:
	            if(word[i] == 'a')
	                state = 6;
	            else
	                state = 5;
	            break;
	            case 5:
	            if(word[i] == 'a')
	                state = 6;
	            else
	                state = 3;
	            break;
	            case 6:break;
	        }
	        if(state == 6){
	            break;
	        }
	        i++;a
	    }
	    if(state == 1 || state == 2){
	        printf("String Accepted\nIt belongs to a* pattern\n");
	    }
	    if(state == 3 || state == 4){
	        printf("String Accepted\nIt belongs to a*b+ pattern\n");
	    }
	    if(state == 5){
	        printf("String Accepted\nIt belongs to abb pattern\n");
	    }
	    if(state == 6){
	        printf("String Rejected\n");
	    }
	}
	return 0;
}
