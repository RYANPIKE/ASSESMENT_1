#include <stdio.h>


int main()
    {
      int choice; 
      
      Do 
        {
        printf("List of st of options:\n");                           // 
        printf("--------------------\n");
        printf("1. Encryption with Cesar 1 \n");
        printf("2. Decryption with Cesar 2 \n");
        printf("--------------------\n");
        printf("3. Encryption with Substitution (attempt) 3\n");
        printf("--------------------\n");
        
    printf("Enter number:  \n");
    scanf("%d", & choice);
   
  
  switch (choice)
        {
            
            
            
    case '1':
    
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
        
    break;
    
    
    
    
    
    case '2':
    
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
   
    break;
 
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

   
   case '3':
   

    char Abet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char key[] =  "QWERTYUIOPASDFGHJKLZXCVBNM";
    char message[] = "TEST";
    char output[200];
    int i = 0;
    int j = 0;
    

     
    
    return 0;
}  
    return 0;
}