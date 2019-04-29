#include <stdio.h>

int main()
    {
      int choice; 
      
      Do 
        {
        printf("List of st of options:\n");                           // All menu options listed
        printf("--------------------\n");
        printf("1. Encryption with Cesar 1 \n");
        printf("2. Decryption with Cesar 2 \n");
        printf("--------------------\n");
        printf("3. Encryption with Substitution (attempt) 3\n");
        printf("--------------------\n");
        
    printf("Enter number:  \n");                                    // Requests what option is to be chosen 
    scanf("%d", & choice);
   
  
  switch (choice)
        {
            
            
            
    case '1':
    
        char str[]="RYANPIKE";          // Hard coded message to be encrypted
        int k = 3;                      // key value stated as 3
        int temp;
    
        for (int i = 0; i < 8; i++) {       // i incremently gets larger by 1 until = 8 then breaks
        temp =  str[i]-65;              // string values 0,1,2,3,4,5,6,7 are found by - 65 off ascii values of characters
        temp = (temp + k)%26;
        temp = temp + 65;               // key value is added which changes ASCII value
        str[i] = temp; 
       
       
       printf("%d, %c\n",i, str[i]);        //the new string is then printed with the new ascii values completeing the encryption
        
    break;
    
    
    
    
    
    case '2':
    
        char str[]="UBDQSLNH"; // Hard coded message to be decrypted
        int k = 3;
         int temp;
    
        for (int i = 0; i < 8; i++) {               // i incremently gets larger by 1 until it = 8 then breaks
        temp = str[i]-65;                       // string values 0,1,2,3,4,5,6,7 are found by - 65 off ascii values of characters
        temp = (temp - k +26) %26;              // Key is minused off temporary value 
        temp = temp + 65;
        str[i] = temp;                          //subtraction of Key sets numbers back to what the original message was
       
       
        printf("%d, %c\n",i, str[i]);             //Decrypted message is printed as original message
   
    break;
 
     
   
   case '3':
   

        char Abet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";             //String of numbers is stated as the value boundaries
        char key[] =  "QWERTYUIOPASDFGHJKLZXCVBNM";             //Key is stated 
        char message[] = "TEST";                                //Word being encryoted is stated as a char before being run through the key
        char output[200];
        int i = 0;
        int j = 0;
        .
        .
        .
        . Not finished
    break;
}
}