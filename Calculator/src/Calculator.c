#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	FILE *f_in, *f_out;
	f_in = fopen("f_in.txt", "r");
	f_out = fopen("f_out.txt", "w");
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
    fprintf(f_out, "=======================================================================================================================================\n");
    fprintf(f_out, "Program's name: Calculator\n\n");
    fprintf(f_out, "Program's author: Volchugov A.P.\n\n");
    fprintf(f_out, "License: All rights reserved\n\n");
    fprintf(f_out, "Program's actions:\n\n");
    fprintf(f_out, "1.Select the operation to be performed\n\n");
    fprintf(f_out, "2.Enter numbers\n\n");
    fprintf(f_out, "3.Displaying the type of arithmetic operation with its decision\n\n");
    fprintf(f_out, "4.Person's choice: continue counting or stop: \n\n");
    fprintf(f_out, "-If yes, the program will start working from the beginning\n\n");
    fprintf(f_out, "-If not, the program will close\n");
    fprintf(f_out, "=======================================================================================================================================\n");

	double a, b, int_number, int_n, count = 1, size;
	char r;
	double *A,*B, *res;
	int c, s, sel;
	do
	{
	    fprintf(f_out, "\nSelect the type of operation:\n1.Basic operations.\n2.Vector operations.\n\nEnter a number: ");
	    fscanf(f_in ," %d", &sel);
	    if(sel != 1 && sel != 2)
	    {
	        fprintf(f_out, "Input error!");
	        break;
	    }
	    else if (sel == 1)
	    {
        	fprintf(f_out, "\nEnter the operation number:\n1.Addition (+).\n2.Subtraction (-).\n3.Multiplication (*).\n4.Division (/).\n5.Exponentiation (**).\n6.Factorial of a number (!).\n\nEnter a number: ");
    	    fscanf(f_in ," %d", &c);
    	    if (c != 1 && c != 2 && c != 3 && c != 4 && c != 5 && c != 6)
    	    {
    	        fprintf(f_out, "Input error!");
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
    					fprintf(f_out, "\n\*You need to enter two numbers\*\nEnter the first number: \n");
    					fscanf(f_in ," %lf", &a);
    					fprintf(f_out, "Enter the second number: \n");
    					fscanf(f_in ," %lf", &b);
    /*
    					abbreviations 'a' and 'b' to integers
    					if there are no numbers after
    					the decimal point, except 0
    */
    					if (a - (int)a == 0 && b - (int)b == 0)
        	            {
        	                fprintf(f_out, "Answer:\n%.0lf + %.0lf = %.0lf\n", a, b, a + b);
        	                break;
        	            }
    /*
    					reducing 'a' to an integer
    					if there are no numbers after
    					the decimal point, except 0
    */
        	            else if(a - (int)a == 0)
        	            {
        	                fprintf(f_out, "Answer:\n%.0lf + %lf = %lf\n", a, b, a + b);
        	                break;
        	            }
    /*
    					reducing 'b' to an integer
    					if there are no numbers after
    					the decimal point, except 0
    */
        	            else if(b - (int)b == 0)
        	            {
        	                fprintf(f_out, "Answer:\n%lf + %.0lf = %lf\n", a, b, a + b);
        	                break;
        	            }
    /*
                        the rest of the cases when
                        after the integer part, 'a' and 'b'
                        have digits other than 0
    */
        	            else
        	            {
        	    	        fprintf(f_out, "Answer:\n%lf + %lf = %lf\n", a, b, a + b);
        		            break;
        	                }
    /*
    			    case 2:
    				    the numbers are read from the keyboard
    					and a subtraction operation is performed on them,
    					if a letter is entered, an error message will appear on the screen
     */
    		        case 2:
    		            fprintf(f_out, "\n\*You need to enter two numbers\*\nEnter the first number: \n");
    	                fscanf(f_in ," %lf", &a);
    	                fprintf(f_out, "Enter the second number: \n");
    	                fscanf(f_in ," %lf", &b);
    /*
                    	abbreviations 'a' and 'b' to integers
    	                if there are no numbers after
    	                the decimal point, except 0
    */
    	                if (a - (int)a == 0 && b - (int)b == 0)
    	                {
    	                    fprintf(f_out, "Answer:\n%.0lf - %.0lf = %.0lf\n", a, b, a - b);
    	                    break;
    	                }
    /*
    	                reducing 'a' to an integer
    	                if there are no numbers after
    	                the decimal point, except 0
    */
    	                else if(a - (int)a == 0)
    	                {
    	                    fprintf(f_out, "Answer:\n%.0lf - %lf = %lf\n", a, b, a - b);
    	                    break;
    	                }
    /*
    	                reducing 'b' to an integer
    	                if there are no numbers after
    	                the decimal point, except 0
    */
    	                else if(b - (int)b == 0)
    	                {
    	                    fprintf(f_out, "Answer:\n%lf - %.0lf = %lf\n", a, b, a - b);
    	                    break;
    	                }
    /*
    	                the rest of the cases when
    	                after the integer part, 'a' and 'b'
    	                have digits other than 0
    */
    	                else
    	                {
    			            fprintf(f_out, "Answer:\n%lf - %lf = %lf\n", a, b, a - b);
    			            break;
    	                }
    /*
                    case 3:
                    	the numbers are read from the keyboard
                    	and a multiplication operation is performed on them,
                    	if a letter is entered, an error message will appear on the screen
    */
        		    case 3:
        		        fprintf(f_out, "\n\*You need to enter two numbers\*\nEnter the first number: \n");
        	            fscanf(f_in ," %lf", &a);
        	            fprintf(f_out, "Enter the second number: \n");
        	            fscanf(f_in ," %lf", &b);
    /*
        	            abbreviations 'a' and 'b' to integers
        	            if there are no numbers after
        	            the decimal point, except 0
    */
        	            if (a - (int)a == 0 && b - (int)b == 0)
        	            {
        	                fprintf(f_out, "Answer:\n%.0lf * %.0lf = %.0lf\n", a, b, a * b);
        	                break;
        	            }
    /*
        	            reducing 'a' to an integer
        	            if there are no numbers after
        	            the decimal point, except 0
    */
        	            else if(a - (int)a == 0)
        	            {
        	                fprintf(f_out, "Answer:\n%.0lf * %lf = %lf\n", a, b, a * b);
        	                break;
        	            }
    /*
        	            reducing 'b' to an integer
        	            if there are no numbers after
        	            the decimal point, except 0
    */
        	            else if(b - (int)b == 0)
        	            {
        	                fprintf(f_out, "Answer:\n%lf * %.0lf = %lf\n", a, b, a * b);
        	                break;
        	            }
    /*
        	            the rest of the cases when
        	            after the integer part, 'a' and 'b'
        	            have digits other than 0
    */
        	            else
        	            {
        			        fprintf(f_out, "Answer:\n%lf * %lf = %lf\n", a, b, a * b);
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
        		        fprintf(f_out, "\n\*You need to enter two numbers\*\nEnter the first number: \n");
        	            fscanf(f_in ," %lf", &a);
        	            fprintf(f_out, "Enter the second number: \n");
        	            fscanf(f_in ," %lf", &b);
        	            while (b == 0)
        	            {
        	                fprintf(f_out, "Cannot be divided by 0!\nEnter other numbers!\n");
        	                fprintf(f_out, "\n\*You need to enter two numbers\*\nEnter the first number: \n");
        	                fscanf(f_in ," %lf", &a);
        	                fprintf(f_out, "Enter the second number: \n");
        	                fscanf(f_in ," %lf", &b);
        	            }
    /*
        	            abbreviations 'a' and 'b' to integers
        	            if there are no numbers after
        	            the decimal point, except 0
    */
        	            if (a - (int)a == 0 && b - (int)b == 0)
        	            {
        	                fprintf(f_out, "Answer:\n%.0lf / %.0lf = %lf\n", a, b, a / b);
        	                break;
        	            }
    /*
        	            reducing 'a' to an integer
        	            if there are no numbers after
        	            the decimal point, except 0
    */
        	            else if(a - (int)a == 0)
        	            {
        	                fprintf(f_out, "Answer:\n%.0lf / %lf = %lf\n", a, b, a / b);
        	                break;
        	            }
    /*
        	            reducing 'b' to an integer
        	            if there are no numbers after
        	            the decimal point, except 0
    */
        	            else if(b - (int)b == 0)
        	            {
        	                fprintf(f_out, "Answer:\n%lf / %.0lf = %lf\n", a, b, a / b);
        	                break;
        	            }
    /*
        	            the rest of the cases when
        	            after the integer part, 'a' and 'b'
        	            have digits other than 0
    */
        	            else
        	            {
        	                fprintf(f_out, "Answer:\n%lf / %lf = %lf\n", a, b, a / b);
        			        break;
        	            }
    /*
                    case 5:
                    	the numbers are read from the keyboard
                    	and the exponentiation operation is performed on them,
                    	if a letter is entered, an error message will appear on the screen
    */
        		    case 5:
        		        fprintf(f_out, "\n\*You need to enter two numbers\*\nEnter the first number: \n");
        	            fscanf(f_in ," %lf", &a);
        	            fprintf(f_out, "Enter the second number: \n");
        	            fscanf(f_in ," %lf", &b);
        	            if (b >= 0)
        	            {
    /*
        	            	abbreviations 'a' and 'b' to integers
        	            	if there are no numbers after
        	            	the decimal point, except 0
    */
            	            if (a - (int)a == 0 && b - (int)b == 0)
            	            {
            	                fprintf(f_out, "Answer:\n%.0lf ** %.0lf = %.0lf\n", a, b, pow(a, b));
            	                break;
            	            }
    /*
            	            reducing 'a' to an integer
            	            if there are no numbers after
            	            the decimal point, except 0
    */
            	            else if(a - (int)a == 0)
            	            {
            	                fprintf(f_out, "Answer:\n%.0lf ** %lf = %lf\n", a, b, pow(a, b));
            	                break;
            	            }
    /*
            	            reducing 'b' to an integer
            	            if there are no numbers after
            	            the decimal point, except 0
    */
            	            else if(b - (int)b == 0)
            	            {
            	                fprintf(f_out, "Answer:\n%lf ** %.0lf = %lf\n", a, b, pow(a, b));
            	                break;
            	            }
    /*
            	            the rest of the cases when
            	            after the integer part, 'a' and 'b'
            	            have digits other than 0
    */
            	            else
            	            {
            			        fprintf(f_out, "Answer:\n%lf ** %lf = %lf\n", a, b, pow(a, b));
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
            	                fprintf(f_out, "Answer:\n%.0lf ** %.0lf = %lf\n", a, b, 1 / pow(a, -b));
            	                break;
            	            }
    /*
        	                reducing 'a' to an integer
        	                if there are no numbers after
        	                the decimal point, except 0
    */
            	            else if(a - (int)a == 0)
            	            {
            	                fprintf(f_out, "Answer:\n%.0lf ** %lf = %lf\n", a, b, 1 / pow(a, -b));
            	                break;
            	            }
    /*
        	                reducing 'b' to an integer
        	                if there are no numbers after
        	                the decimal point, except 0
    */
            	            else if(b - (int)b == 0)
            	            {
            	                fprintf(f_out, "Answer:\n%lf ** %.0lf = %lf\n", a, b, 1 / pow(a, -b));
            	                break;
            	            }
    /*
        	                the rest of the cases when
        	                after the integer part, 'a' and 'b'
        	                have digits other than 0
    */
            	            else
            	            {
            			        fprintf(f_out, "Answer:\n%lf ** %lf = %lf\n", a, b, 1 / pow(a, -b));
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
        		        fprintf(f_out, "\n\*You need to enter one number\*\nEnter an integer number: \n");
        		        fscanf(f_in ," %lf", &int_number);
    /*                  there is a check on the number,
        		        whether it is an integer or not
    */
        		        while(int_number / (int)int_number != 1)
        		        {
        		            fprintf(f_out, "Input error!\n\nEnter an integer number: \n");
        		            fscanf(f_in ," %lf", &int_number);
        		        }
    //                  I assign int_n the entered value to output it to the console
        		        int_n = int_number;
        		        while (int_number != 0)
        		        {
        		            count *= int_number;
        		            int_number -= 1;
        		        }
        		        fprintf(f_out, "Answer:\n%.0lf! = %.0lf\n", int_n, count);
        		        break;
    	        }
    	    }
	    }
        else if (sel == 2)
        {
		    fprintf(f_out, "\nEnter the operation number:\n1.Addition of vectors (+).\n2.Subtracting vectors (-).\n3.Scalar product of vectors (*).\n\nEnter a number: ");
		    fscanf(f_in ," %d", &c);
    	    if (c != 1 && c != 2 && c != 3)
    	    {
    	        fprintf(f_out, "Input error!");
    	        break;
    	    }
    	    else
    	    {
    	        switch(c)
                {
    /*
                    case 1:
                        the values of the vectors are read 
                        from the keyboard, then their addition occurs
    */
		            case 1:
                        fprintf(f_out, "\n\*You need to enter a single integer\*\nEnter the size of the vectors:\n");
            		    fscanf(f_in ," %lf", &size);
            		    if((int)size / size != 1)
            		    {
            		        fprintf(f_out, "Input error\n");
            		        break;
            		    }
            		    else
            		    {
                		    A = malloc(size*sizeof(double));
                		    B = malloc(size*sizeof(double));
                		    res = malloc(size*sizeof(double));
                		    fprintf(f_out, "Enter the coordinates of the first vector:\n");
                		    for(int i = 0; i < size; i++) fscanf(f_in ," %lf", &A[i]);
                            fprintf(f_out, "Enter the coordinates of the second vector:\n");
                		    for(int i = 0; i < size; i++) fscanf(f_in ," %lf", &B[i]);
                		    fprintf(f_out, "Answer:\n");
                		    fprintf(f_out, "( ");
                		    
                		    int k = 1;
                		    for(int i = 0; i < size; i++)
                		    {
                		        fprintf(f_out, "%lf", A[i]);
                		        if (k == size)
                		        {
                		            fprintf(f_out, " ");
                		        }
                		        else if (k < size)
                		        {
                		            k += 1;
                		            fprintf(f_out, ", ");
                		        }
                		    }
                		    fprintf(f_out, ") + ( ");
                		    
                		    k = 1;
                		    for(int i = 0; i < size; i++)
                		    {
                		        fprintf(f_out, "%lf", B[i]);
                		        if (k == size)
                		        {
                		            fprintf(f_out, " ");
                		        }
                		        else if (k < size)
                		        {
                		            k += 1;
                		            fprintf(f_out, ", ");
                		        }
                		    }
                		    fprintf(f_out, ") = ( ");
                		    
                		    k = 1;
                		    for(int i = 0; i < size; i++)
                		    {
                		        fprintf(f_out, "%lf", A[i] + B[i]);
                		        if (k == size)
                		        {
                		            fprintf(f_out, " ");
                		        }
                		        else if (k < size)
                		        {
                		            k += 1;
                		            fprintf(f_out, ", ");
                		        }
                		    }
                		    fprintf(f_out, ")\n");
                		    free(A);
                            free(B);
                	        free(res);
            		        break;
            		    }
    /*
                    case 2:
                        the values of the vectors are read 
                        from the keyboard, then their difference occurs
    */
            	    case 2:
            		    fprintf(f_out, "\n\*You need to enter a single integer\*\nEnter the size of the vectors:\n");
            		    fscanf(f_in ," %lf", &size);
            	        if((int)size / size != 1)
            		    {
            		        fprintf(f_out, "Input error\n");
            		        break;
            		    }
            		    else
            		    {
                		    A = malloc(size*sizeof(double));
                		    B = malloc(size*sizeof(double));
                		    res = malloc(size*sizeof(double));
                		    fprintf(f_out, "Enter the coordinates of the first vector:\n");
                		    for(int i = 0; i < size; i++) fscanf(f_in ," %lf", &A[i]);
                            fprintf(f_out, "Enter the coordinates of the second vector:\n");
                		    for(int i = 0; i < size; i++) fscanf(f_in ," %lf", &B[i]);
                		    fprintf(f_out, "Answer:\n");
                		    fprintf(f_out, "( ");
                		    
                		    int k = 1;
                		    for(int i = 0; i < size; i++)
                		    {
                		        fprintf(f_out, "%lf", A[i]);
                		        if (k == size)
                		        {
                		            fprintf(f_out, " ");
                		        }
                		        else if (k < size)
                		        {
                		            k += 1;
                		            fprintf(f_out, ", ");
                		        }
                		    }
                		    fprintf(f_out, ") - ( ");
                		    
                		    k = 1;
                		    for(int i = 0; i < size; i++)
                		    {
                		        fprintf(f_out, "%lf", B[i]);
                		        if (k == size)
                		        {
                		            fprintf(f_out, " ");
                		        }
                		        else if (k < size)
                		        {
                		            k += 1;
                		            fprintf(f_out, ", ");
                		        }
                		    }
                		    fprintf(f_out, ") = ( ");
                		    
                		    k = 1;
                		    for(int i = 0; i < size; i++)
                		    {
                		        fprintf(f_out, "%lf", A[i] - B[i]);
                		        if (k == size)
                		        {
                		            fprintf(f_out, " ");
                		        }
                		        else if (k < size)
                		        {
                		            k += 1;
                		            fprintf(f_out, ", ");
                		        }
                		    }
                		    fprintf(f_out, ")\n");
                		    free(A);
                            free(B);
                	        free(res);
            		        break;
            		    }
    /*
                    case 3:
                        the values of the vectors are read 
                        from the keyboard, then their scalar product occurs
    */
            	    case 3:
            		    fprintf(f_out, "\n\*You need to enter a single integer\*\nEnter the size of the vectors:\n");
            		    fscanf(f_in ," %lf", &size);
                        A = malloc(size*sizeof(double));
            	        B = malloc(size*sizeof(double));
        		        res = malloc(size*sizeof(double));
        		        fprintf(f_out, "Enter the coordinates of the first vector:\n");
        		        for(int i = 0; i < size; i++) fscanf(f_in ," %lf", &A[i]);
        		        fprintf(f_out, "Enter the coordinates of the second vector:\n");
            	        for(int i = 0; i < size; i++) fscanf(f_in ," %lf", &B[i]);
        		        fprintf(f_out, "Answer:\n");
        		        fprintf(f_out, "( ");
        		        
        		        int k = 1;
        		        for(int i = 0; i < size; i++) 
        		        {
                		    for(int i = 0; i < size; i++)
                		    {
                		        fprintf(f_out, "%lf", A[i]);
                		        if (k == size)
                		        {
                		            fprintf(f_out, " ");
                		        }
                		        else if (k < size)
                		        {
                		            k += 1;
                		            fprintf(f_out, ", ");
                		        }
                		    }
                		    fprintf(f_out, ") * ( ");
                		    
                		    k = 1;
                		    for(int i = 0; i < size; i++)
                		    {
                		        fprintf(f_out, "%lf", B[i]);
                		        if (k == size)
                		        {
                		            fprintf(f_out, " ");
                		        }
                		        else if (k < size)
                		        {
                		            k += 1;
                		            fprintf(f_out, ", ");
                		        }
                		    }
                		    fprintf(f_out, ") = ( ");
                		    
                		    k = 1;
                		    double sum_mult = 0;
                		    for(int i = 0; i < size; i++)
                		    {
                		        fprintf(f_out, "%lf", A[i] * B[i]);
                		        sum_mult += A[i] * B[i];
                		        if (k == size)
                		        {
                		            fprintf(f_out, " ");
                		        }
                		        else if (k < size)
                		        {
                		            k += 1;
                		            fprintf(f_out, " + ");
                		        }
                		    }
                		    fprintf(f_out, ") = ");
                		    fprintf(f_out, "%lf", sum_mult);
                		    free(A);
                            free(B);
                	        free(res);
            		        break;
            		    }
    	        }
	        }
        }
	    fprintf(f_out, "\nDo you want to continue the calculations?\n1.Enter \'y\' if Yes\n2.Enter \'n\' if No\n");
        fscanf(f_in ," %c", &r);
//      checking for the correctness of the entered letters
        while(r != 'y' && r != 'n')
 	    {
            fprintf(f_out, "Input error!\n\nDo you want to continue the calculations?\n1.Enter \'y\' if Yes\n2.Enter \'n\' if No\n");
    	    fscanf(f_in ," %c", &r);
        }
	} while(r == 'y');
	fclose(f_in);
	fclose(f_out);
    return 0;
}