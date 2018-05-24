//Imports the scanner class.
import java.util.Scanner;

public class Pounds_To_Dollars_V1
{
  public static void main(String[] args)
  {
    //print out a welcome message to the user.
    System.out.println("Welcome! This program will convert miles to KM.");
    //declare our variables.
    Double miles, km;
    System.out.println("Please enter the amount of miles:");
    Scanner keyboard = new Scanner(System.in);
    miles = keyboard.nextDouble();
    km = miles * 1.609;
    System.out.println(miles + "is equal to " + km);
  }
}