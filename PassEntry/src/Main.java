
////////////////////////////////////////////////////////////////////////////
//
//	Zachary Noonan
// 	Assignment 6
//	March 10, 2016
//
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//DESCRIPTION:	This program will allow the user to enter their pin based on 
//
//INPUTS:		pin
//
//
//OUTPUTS:		The program will check to see if user pin is same as converted pin.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Arrays;
import java.util.Random;
import java.util.Scanner;

public class Main {
	public int randNum;

	public static void main(String[] args) {
		Scanner userPIN = new Scanner(System.in);
		String definedPIN = "1234";
		int firstDigit = definedPIN.trim().charAt(0) - 48;
		int secondDigit = definedPIN.trim().charAt(1) - 48;
		int thirdDigit = definedPIN.trim().charAt(2) - 48;
		int fourthDigit = definedPIN.trim().charAt(3) - 48;
		int[] sequence = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

		Random rand = new Random();
		int[] randSequence = new int[10];
		for (int i = 0; i < randSequence.length; i++) {
			randSequence[i] = rand.nextInt(3 - 1 + 1) + 1;
		}

		System.out.println(Arrays.toString(sequence));
		System.out.println(Arrays.toString(randSequence));
		System.out.print("Please enter your pin number corresponding to the generated number: ");
		String pinNum = userPIN.nextLine().trim();
		int firstinputDigit = definedPIN.charAt(0) - 48;
		int secondinputDigit = definedPIN.charAt(1) - 48;
		int thirdinputDigit = definedPIN.charAt(2) - 48;
		int fourthinputDigit = definedPIN.charAt(3) - 48;
		if (randSequence[firstDigit] == firstDigit && randSequence[secondDigit] == secondDigit
				&& randSequence[thirdDigit] == thirdDigit && randSequence[fourthgDigit] == fourthDigit) {
			System.out.println("correct!");
		} else {
			for (int i = 0; i < randSequence.length; i++) {
				randSequence[i] = rand.nextInt(3 - 1 + 1) + 1;
			}
		}

	}

}
