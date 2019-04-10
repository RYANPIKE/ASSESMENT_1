#include <stdio.h>
//
//
//
//
//int main()
//{
//	int k=3, temp;
//	FILE *input, *output;
//	input = fopen("Input.txt", "r");
//	if(input == NULL)
//	{
//		printf("INPUT POINTER NULL!!!\n");
//		return 0;
//	}
//	output = fopen("output.txt", "w");
//	char c;  // Read character 
//
//	//loop
//	do
//	{
//		fscanf(input, "%c", &c);
//
//		if ( c == 32)
//		{
//		      // do nothing
//		}
//		else
//		{     // Run encrytion -----
//
//				
//
//    		temp = c-65;                    
//    
//    		temp = (temp + k)%26;
//    
//    		c = temp + 65;   // Add key to ASCII number 
//
//				                        
//		}
//
//
//		
//	   // finished encryt
//	   
//		if(feof(input))
//		{
//		// found end of file, break loop
//		  break;
//		}
//
//		fprintf(output, "%c", c); // Prints new char into output after key has been added
//		printf("%c\n", c);
//	} while(!feof(input)); 
//	
//
//}
//*/ 
//


int main()
{
    int x = 0;

    switch(x) {
      case '0' :{
    int k= 3, temp;
	FILE *input, *output;
	input = fopen("Input.txt", "r");
	if(input == NULL)
	{
		printf("INPUT POINTER NULL!!!\n");
		return 0;
	}
	
	output = fopen("output.txt", "w");
	char c;  // Read character 

	//loop
	do
	{
		fscanf(input, "%c", &c);

		if ( c == 32)
		{
	    } // do nothing


        
		else // Run encrytion -----
		{     
        				

    		temp = c-65;                    
            printf("%3d ", temp);
    		temp = (temp - k)%26;
    		if(temp <0)
    		{
    		    temp= temp +26;
    		}
            printf("%3d ", temp);    
    		c = temp + 65;   // Add key to ASCII number 
                           
		}


		
	   // finished encryt
	   
		if(feof(input))
		{
		// found end of file, break loop
		  break;
		}

		fprintf(output, "%c", c); // Prints new char into output after key has been added
		printf("%3c\n", c);
	} while(!feof(input)); 
	
break;
}
        
         
      case '1' :
        {
	int k=3, temp;
	FILE *input, *output;
	input = fopen("Input.txt", "r");
	if(input == NULL)
	{
		printf("INPUT POINTER NULL!!!\n");
		return 0;
	}
	output = fopen("output.txt", "w");
	char c;  // Read character 

	//loop
	do
	{
		fscanf(input, "%c", &c);

		if ( c == 32)
		{
		      // do nothing
		}
		else
		{     // Run encrytion -----

				

    		temp = c-65;                    
    
    		temp = (temp + k)%26;
    
    		c = temp + 65;   // Add key to ASCII number 

				                        
		}


		
	   // finished encryt
	   
		if(feof(input))
		{
		// found end of file, break loop
		  break;
		}

		fprintf(output, "%c", c); // Prints new char into output after key has been added
		printf("%c\n", c);
	} while(!feof(input)); 
	
break;
}}
     

      return 0;
   }


















//
//
//	int k= 3, temp;
//	FILE *input, *output;
//	input = fopen("Input.txt", "r");
//	if(input == NULL)
//	{
//		printf("INPUT POINTER NULL!!!\n");
//		return 0;
//	}
//	
//	output = fopen("output.txt", "w");
//	char c;  // Read character 
//
//	//loop
//	do
//	{
//		fscanf(input, "%c", &c);
//
//		if ( c == 32)
//		{
//	    } // do nothing
//
//
//        }
//		else // Run encrytion -----
//		{     
//        				
//
//    		temp = c-65;                    
//            printf("%3d ", temp);
//    		temp = (temp - k)%26;
//    		if(temp <0)
//    		{
//    		    temp= temp +26;
//    		}
//            printf("%3d ", temp);    
//    		c = temp + 65;   // Add key to ASCII number 
//                           
//		}
//
//
//		
//	   // finished encryt
//	   
//		if(feof(input))
//		{
//		// found end of file, break loop
//		  break;
//		}
//
//		fprintf(output, "%c", c); // Prints new char into output after key has been added
//		printf("%3c\n", c);
//	} while(!feof(input)); 
//	
//
//}
