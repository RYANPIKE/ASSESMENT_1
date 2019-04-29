#include <stdio.h>


int main()
    {
      int choice; 
      
        printf("List of options:\n");
        printf("--------------------\n");
        printf("1. Encryption with Cesar 1 \n");
        printf("2. Decryption with Cesar 2 \n");
        printf("--------------------\n");
        printf("3. Encryption with Substitution (attempt) 3\n");
        printf("--------------------\n");
        
    printf("Select desired option:  \n");
    scanf("%d", & choice);
    
  
  
  return 0; 
  }

    /*
    char str[]="RYANPIKE"; // Hard coded message to be encrypted
    int k = 3;
    //int *temp;
    //temp  = str[0];
    int temp;
    
    for (int i = 0; i < 8; i++) {// i incremently gets larger by 1 until it = 8 then breaks
        temp = str[i]-65;  // string values 0,1,2,3,4,5,6,7 are found by - 65 off ascii values of characters
        temp = (temp + k)%26;
        temp = temp + 65;
        str[i] = temp; 
       
       
       printf("%d, %c\n",i, str[i]); //the key for encryption is 3 that is added to ASCII value

    }
    }




int main()
    {
        
        
    char str[]="UBDQSLNH"; // Hard coded message to be encrypted
    int k = 3;
    //int *temp;
    //temp  = str[0];
    int temp;
    
    for (int i = 0; i < 8; i++) {// i incremently gets larger by 1 until it = 8 then breaks
        temp = str[i]-65;  // string values 0,1,2,3,4,5,6,7 are found by - 65 off ascii values of characters
        temp = (temp - k +26) %26;
        temp = temp + 65;
        str[i] = temp; 
       
       
       printf("%d, %c\n",i, str[i]); //the key for encryption is 3 that is added to ASCII value

    }
    }
    
    */