import java.util.ArrayList;
import java.util.Scanner;

public class PetClass {
	
	
	public static String PetName(String myPet)
	{
		return myPet;

	}
	
	
	
	public static void main(String[] args)
	{
		
		ArrayList<String> PetList = new ArrayList<String>();
		
		String animal = null;
		do
		{
			if (animal == "none")
				break;
			System.out.println("enter animal: ");
			Scanner keyboard = new Scanner(System.in);
			animal = keyboard.next();
			PetList.add(animal);
			
		}
		while (animal != "none");
		
		
		for (int i = 0; i < PetList.size(); i++)
		{
			System.out.println(PetList.get(i));
		}
		
	}
	
	
}
