/**
* Driver.java 
* 
* Description: 
* 	This class tests some different ways to determine if a string
* 	is an palindrome or not. 
*
* input: a string	output: boolean
* 
* @author Nadya Pena
*/

public class Driver{
	
	public static void main(String[] bobos){
		
		boolean result = false;
		String str = "Stressed desserts";
		
		result = isPalindrome(str);
		
		if(result){
			System.out.println(str + " is a palindrome.");
		}

	}
	
	/**
	 * isPalindrome() takes a string and compares its characters (starting from the middle)
	 * and if they all match up, then the word is deemed to be a palindrome. 
	 * 
	 * @param input - str that we want to analyze
	 * @return isPalindrome - bool that determines if the str is a palindrome
	 */
	public static boolean isPalindrome(String input){
		
		boolean isPalindrome = false;
		int middle = 0;
		
		char[] chars = input.toCharArray();
		
		/**
		 * check if the string's char length is odd or even since that will
		 * affect middle. 
		 */
		if (input.length() % 2 == 0){
			
			middle = input.length()/2 - 1;
			
			for (int i = 0; i <= middle; i++){
				
				System.out.println ("Comparing " + chars[middle - i] + " and " + chars[middle + i + 1]);
				 if (chars[middle - i] != chars[middle + i + 1]){
					 
					 System.out.println(input + " is not a palindrome.");
					 break; 
					 
				 } else {
					 
					 isPalindrome = true;
					 
				 }		
			}
			
		} else {
			
			middle = input.length() / 2;
			
			for (int i = 0; i <= middle; i++){
				System.out.println ("Comparing " + chars[middle - i] + " and " + chars[middle + i]);
				
				if (chars[middle - i] == chars[middle + i]){
					isPalindrome = true;
				}
			}
		}
	return isPalindrome;
	}
}