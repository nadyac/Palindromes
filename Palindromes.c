//-----------------------------------------------------------------------------
//	Class: Palindromes.c 	Programmer: Nadya Pena
// 	Purpose: This program finds the Largest Palindrome Product for 3-digit #s
//
//	Notes: the smallest number is 5-digits, the most is 6-digits
//-----------------------------------------------------------------------------

//------------------------------------------------------------------------------
//METHOD:
//Starting at 999, take product of 3-digit numbers in decreasing order and test
// if the number is a palindrome by checking that the corresponding digits match
// stop checking once the left and right sides meet (in case of odd product) or 
// go past each other (in the case of even number product -- 6 digits)
//------------------------------------------------------------------------------
#include <stdio.h>
#include <math.h>

int isPalindrome(int); //function prototype

main(){

	int x, j, product, palindrome = 0;

	for(x = 999; x >= 101; x--){

		for(j = 999; j >= 101; j--)
		{
			product = x * j;
			if(isPalindrome(product) && (product > palindrome)){
				palindrome = product;
			}
		} 
	}
 printf("The largest palindrome product for 3-digit numbers is: %d", palindrome);
}

int isPalindrome(int P){

	int length = floor(log10(P)) + 1; //Log10 Gives # of digits - 1
	char digits[length];
	sprintf(digits, "%d", P);
	//printf("number is %d, length is %d",P, length);
	for(int i = 0; i <= length/2; i++){
		if(digits[i] == digits[length - 1 -i]){
			
		} else {
			return 0;
		}
	}
return 1;
}

//-------------------------------------------------------------------------------
//ALTERNATIVE METHOD:
//Check the products of numbers 999 and lower in decreasing order for palindrome

//If the length of the product is 5, the numbers on either side of the 3rd number
// should be mirrors of each other (a reversed character array)

//If the length of the product is 6, the 3rd and 4th numbers should be the same and
// the digits on either side of the 3rd adn 4th number should mirror each other
//---------------------------------------------------------------------------------
