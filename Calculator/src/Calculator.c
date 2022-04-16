#include <stdio.h>
#include <math.h>
int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
    printf("=======================================================================================================================================\n");
    printf("Program's name: Calculator\n\n");
    printf("Program's author: Volchugov A.P.\n\n");
    printf("License: All rights reserved\n\n");
    printf("Program's actions:\n\n");
    printf("1.Select the operation to be performed\n\n");
    printf("2.Enter numbers\n\n");
    printf("3.Displaying the type of arithmetic operation with its decision\n\n");
    printf("4.Person's choice: continue counting or stop: \n\n");
    printf("-If yes, the program will start working from the beginning\n\n");
    printf("-If not, the program will close\n");
    printf("=======================================================================================================================================\n");

	double a, b, int_number, int_n, count = 1;
	char r;
	int c;
	do
	{
    	printf("\nEnter the operation number:\n1.Addition (+).\n2.Subtraction (-).\n3.Multiplication (*).\n4.Division (/).\n5.Exponentiation (**).\n6.Factorial of a number (!).\n\nEnter a number: ");
	    scanf(" %d", &c);
	    if (c != 1 && c != 2 && c != 3 && c != 4 && c != 5 && c != 6)
	    {
	        printf("Input error!");
	        break;
	    }
	    else
	    {
	        switch(c)
	        {
/*              case 1:
					the numbers are read from the keyboard
					and an addition operation is performed on them,
					if a letter is entered, an error will appear on the screen
*/
	    	    case 1:
					printf("\n\*You need to enter two numbers\*\nEnter the first number: \n");
					scanf(" %lf", &a);
					printf("Enter the second number: \n");
					scanf(" %lf", &b);
/*
					abbreviations 'a' and 'b' to integers
					if there are no numbers after
					the decimal point, except 0
*/
					if (a - (int)a == 0 && b - (int)b == 0)
    	            {
    	                printf("Answer:\n%.0lf + %.0lf = %.0lf\n", a, b, a + b);
    	                break;
    	            }
/*
					reducing 'a' to an integer
					if there are no numbers after
					the decimal point, except 0
*/
    	            else if(a - (int)a == 0)
    	            {
    	                printf("Answer:\n%.0lf + %lf = %lf\n", a, b, a + b);
    	                break;
    	            }
/*
					reducing 'b' to an integer
					if there are no numbers after
					the decimal point, except 0
*/
    	            else if(b - (int)b == 0)
    	            {
    	                printf("Answer:\n%lf + %.0lf = %lf\n", a, b, a + b);
    	                break;
    	            }
/*
                    the rest of the cases when
                    after the integer part, 'a' and 'b'
                    have digits other than 0
*/
    	            else
    	            {
    	    	        printf("Answer:\n%lf + %lf = %lf\n", a, b, a + b);
    		            break;
    	                }
/*
			    case 2:
				    the numbers are read from the keyboard
					and a subtraction operation is performed on them,
					if a letter is entered, an error message will appear on the screen
 */
		        case 2:
		            printf("\n\*You need to enter two numbers\*\nEnter the first number: \n");
	                scanf(" %lf", &a);
	                printf("Enter the second number: \n");
	                scanf(" %lf", &b);
/*
                	abbreviations 'a' and 'b' to integers
	                if there are no numbers after
	                the decimal point, except 0
*/
	                if (a - (int)a == 0 && b - (int)b == 0)
	                {
	                    printf("Answer:\n%.0lf - %.0lf = %.0lf\n", a, b, a - b);
	                    break;
	                }
/*
	                reducing 'a' to an integer
	                if there are no numbers after
	                the decimal point, except 0
*/
	                else if(a - (int)a == 0)
	                {
	                    printf("Answer:\n%.0lf - %lf = %lf\n", a, b, a - b);
	                    break;
	                }
/*
	                reducing 'b' to an integer
	                if there are no numbers after
	                the decimal point, except 0
*/
	                else if(b - (int)b == 0)
	                {
	                    printf("Answer:\n%lf - %.0lf = %lf\n", a, b, a - b);
	                    break;
	                }
/*
	                the rest of the cases when
	                after the integer part, 'a' and 'b'
	                have digits other than 0
*/
	                else
	                {
			            printf("Answer:\n%lf - %lf = %lf\n", a, b, a - b);
			            break;
	                }
/*
                case 3:
                	the numbers are read from the keyboard
                	and a multiplication operation is performed on them,
                	if a letter is entered, an error message will appear on the screen
*/
    		    case 3:
    		        printf("\n\*You need to enter two numbers\*\nEnter the first number: \n");
    	            scanf(" %lf", &a);
    	            printf("Enter the second number: \n");
    	            scanf(" %lf", &b);
/*
    	            abbreviations 'a' and 'b' to integers
    	            if there are no numbers after
    	            the decimal point, except 0
*/
    	            if (a - (int)a == 0 && b - (int)b == 0)
    	            {
    	                printf("Answer:\n%.0lf * %.0lf = %.0lf\n", a, b, a * b);
    	                break;
    	            }
/*
    	            reducing 'a' to an integer
    	            if there are no numbers after
    	            the decimal point, except 0
*/
    	            else if(a - (int)a == 0)
    	            {
    	                printf("Answer:\n%.0lf * %lf = %lf\n", a, b, a * b);
    	                break;
    	            }
/*
    	            reducing 'b' to an integer
    	            if there are no numbers after
    	            the decimal point, except 0
*/
    	            else if(b - (int)b == 0)
    	            {
    	                printf("Answer:\n%lf * %.0lf = %lf\n", a, b, a * b);
    	                break;
    	            }
/*
    	            the rest of the cases when
    	            after the integer part, 'a' and 'b'
    	            have digits other than 0
*/
    	            else
    	            {
    			        printf("Answer:\n%lf * %lf = %lf\n", a, b, a * b);
    			        break;
    	            }
/*
                case 4:
                 	the numbers are read from the keyboard
                 	and a division operation is performed on them,
                 	if the denominator is 0, an error will be displayed
                 	and the program will request new numbers. also,
                 	if a letter is entered, an error message will appear on the screen
*/
    		    case 4:
    		        printf("\n\*You need to enter two numbers\*\nEnter the first number: \n");
    	            scanf(" %lf", &a);
    	            printf("Enter the second number: \n");
    	            scanf(" %lf", &b);
    	            while (b == 0)
    	            {
    	                printf("Cannot be divided by 0!\nEnter other numbers!\n");
    	                printf("\n\*You need to enter two numbers\*\nEnter the first number: \n");
    	                scanf(" %lf", &a);
    	                printf("Enter the second number: \n");
    	                scanf(" %lf", &b);
    	            }
/*
    	            abbreviations 'a' and 'b' to integers
    	            if there are no numbers after
    	            the decimal point, except 0
*/
    	            if (a - (int)a == 0 && b - (int)b == 0)
    	            {
    	                printf("Answer:\n%.0lf / %.0lf = %lf\n", a, b, a / b);
    	                break;
    	            }
/*
    	            reducing 'a' to an integer
    	            if there are no numbers after
    	            the decimal point, except 0
*/
    	            else if(a - (int)a == 0)
    	            {
    	                printf("Answer:\n%.0lf / %lf = %lf\n", a, b, a / b);
    	                break;
    	            }
/*
    	            reducing 'b' to an integer
    	            if there are no numbers after
    	            the decimal point, except 0
*/
    	            else if(b - (int)b == 0)
    	            {
    	                printf("Answer:\n%lf / %.0lf = %lf\n", a, b, a / b);
    	                break;
    	            }
/*
    	            the rest of the cases when
    	            after the integer part, 'a' and 'b'
    	            have digits other than 0
*/
    	            else
    	            {
    	                printf("Answer:\n%lf / %lf = %lf\n", a, b, a / b);
    			        break;
    	            }
/*
                case 5:
                	the numbers are read from the keyboard
                	and the exponentiation operation is performed on them,
                	if a letter is entered, an error message will appear on the screen
*/
    		    case 5:
    		        printf("\n\*You need to enter two numbers\*\nEnter the first number: \n");
    	            scanf(" %lf", &a);
    	            printf("Enter the second number: \n");
    	            scanf(" %lf", &b);
    	            if (b >= 0)
    	            {
/*
    	            	abbreviations 'a' and 'b' to integers
    	            	if there are no numbers after
    	            	the decimal point, except 0
*/
        	            if (a - (int)a == 0 && b - (int)b == 0)
        	            {
        	                printf("Answer:\n%.0lf ** %.0lf = %.0lf\n", a, b, pow(a, b));
        	                break;
        	            }
/*
        	            reducing 'a' to an integer
        	            if there are no numbers after
        	            the decimal point, except 0
*/
        	            else if(a - (int)a == 0)
        	            {
        	                printf("Answer:\n%.0lf ** %lf = %lf\n", a, b, pow(a, b));
        	                break;
        	            }
/*
        	            reducing 'b' to an integer
        	            if there are no numbers after
        	            the decimal point, except 0
*/
        	            else if(b - (int)b == 0)
        	            {
        	                printf("Answer:\n%lf ** %.0lf = %lf\n", a, b, pow(a, b));
        	                break;
        	            }
/*
        	            the rest of the cases when
        	            after the integer part, 'a' and 'b'
        	            have digits other than 0
*/
        	            else
        	            {
        			        printf("Answer:\n%lf ** %lf = %lf\n", a, b, pow(a, b));
        			        break;
        	            }
    	            }
    	            else
    	            {
/*
    	            	abbreviations 'a' and 'b' to integers
    	            	if there are no numbers after
    	            	the decimal point, except 0
*/
    	                if (a - (int)a == 0 && b - (int)b == 0)
        	            {
        	                printf("Answer:\n%.0lf ** %.0lf = %lf\n", a, b, 1 / pow(a, -b));
        	                break;
        	            }
/*
    	                reducing 'a' to an integer
    	                if there are no numbers after
    	                the decimal point, except 0
*/
        	            else if(a - (int)a == 0)
        	            {
        	                printf("Answer:\n%.0lf ** %lf = %lf\n", a, b, 1 / pow(a, -b));
        	                break;
        	            }
/*
    	                reducing 'b' to an integer
    	                if there are no numbers after
    	                the decimal point, except 0
*/
        	            else if(b - (int)b == 0)
        	            {
        	                printf("Answer:\n%lf ** %.0lf = %lf\n", a, b, 1 / pow(a, -b));
        	                break;
        	            }
/*
    	                the rest of the cases when
    	                after the integer part, 'a' and 'b'
    	                have digits other than 0
*/
        	            else
        	            {
        			        printf("Answer:\n%lf ** %lf = %lf\n", a, b, 1 / pow(a, -b));
        			        break;
        	            }
    	            }
/*
                case 6:
                 	the numbers are read from the keyboard
                 	and a factorial operation is performed on them,
                 	if a letter is entered, an error message will appear on the screen
*/
    		    case 6:
    		        printf("\n\*You need to enter one number\*\nEnter an integer number: \n");
    		        scanf(" %lf", &int_number);
/*                  there is a check on the number,
    		        whether it is an integer or not
*/
    		        while(int_number / (int)int_number != 1)
    		        {
    		            printf("Input error!\n\nEnter an integer number: \n");
    		            scanf(" %lf", &int_number);
    		        }
//                  assigns the entered int_n value to then output it to the console
    		        int_n = int_number;
    		        while (int_number != 0)
    		        {
    		            count *= int_number;
    		            int_number -= 1;
    		        }
    		        printf("Answer:\n%.0lf! = %.0lf\n", int_n, count);
    		        break;
	       }
	       printf("\nDo you want to continue the calculations?\n1.Enter \'y\' if Yes\n2.Enter \'n\' if No\n");
    	   scanf(" %c", &r);
//         checking for the correctness of the entered letters
    	   while(r != 'y' && r != 'n')
    	   {
    	       printf("Input error!\n\nDo you want to continue the calculations?\n1.Enter \'y\' if Yes\n2.Enter \'n\' if No\n");
    	       scanf(" %c", &r);
    	   }
	    }
	 } while(r == 'y');
	 return 0;
}
