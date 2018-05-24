
package dog;

public class Dog {

    public String name;
    public String breed;
    public int age;
    
    public void writeOutput()
    {
        System.out.println("Name: " + name);
        System.out.println("Breed: " + breed);
        System.out.println("Age in callendar years: " + getAgeInHumanYears());
    }
    
    public int getAgeInHumanYears()
    {
        int humanAge = 0;
        if (age <= 2)
        {
            humanAge = age * 11;
        }
        else
        {
            humanAge = 22 + ((age-2) * 5);
        }
        return humanAge;
    }
    
    
    public static void main(String[] args) 
    {
        Dog balto = new Dog();
        balto.name = "Balto";
        balto.age = 8;
        balto.breed = "husky";
        balto.writeOutput();
        
    }
    
}
