import java.util.*;
public class HW1_4 {

    public static void main (String[] args)
    {
        int maxPidgeotto = 0;
        int maxPidgy = 0;
        int xp = 0;
        int candy = 0;
        int pidgy = 0;
        int pidgeotto = 0;
        int evolveQuantity = 0;
        int evolvecandyBack = 0;
        int pidgypidgeottotoCandy = 0;
        int evolvecandyCost = 12;
        int evoxpGain = 500;
        Scanner userInput = new Scanner(System.in);
        System.out.print("Please input number of candies you have: ");
        candy = userInput.nextInt();
        System.out.print("Please input number of pidgeys you have: ");
        pidgy = userInput.nextInt();
        while ((candy + pidgy + pidgeotto >= 12))
        {
            for (int i = 0; i < (candy + pidgy);)
            {
                if (((candy + i) % 12) == 0)
                {
                    maxPidgy = i;
                    break;
                }
                else
                    i++;
            }
            candy += maxPidgy;
            if (pidgy > 0)
                pidgy -= maxPidgy;
            System.out.println("pidgy exchange to candy needed for next evolve: " + maxPidgy);
            System.out.println("candy: " + candy);
            System.out.println("pidgys you currently have: " + pidgy);

            evolveQuantity = (candy / evolvecandyCost);
            System.out.println("can afford " + evolveQuantity + " evolves.");
            xp += evolveQuantity * evoxpGain;
            candy -= (evolveQuantity * evolvecandyCost);
            candy += evolveQuantity;
            System.out.println("Gained " + evolveQuantity + " candie from the evolve process.");
            pidgeotto += evolveQuantity;
            pidgy = pidgy - evolveQuantity;
            if (pidgy >= 0)
                System.out.println("candy: " + candy + " pidgey: " + pidgy + " pidgeoto: " + pidgeotto);
        }
        System.out.println("Player xp has increased to " + xp);
        System.out.println("No further action can be taken.");
    }
}
