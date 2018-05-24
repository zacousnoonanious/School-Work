import java.util.Arrays;
public class Person {

	private String name;

	public Person() {
		name = "nothing yet!";
	}
	
	public Person(String initialName)
	{
		name = initialName;
	}
	
	public void setName(String newName)
	{
		name = newName;
	}
	
	public String getName()
	{
		return name;
	}
	
	public void writeOutput(){
		System.out.println("Name: " + name);
		
	}
	
	public boolean sameName(Person otherPerson){
		return (this.name.equalsIgnoreCase(otherPerson.getName()));
	}
	
	public static void main(String[] args){
		Person p1 = new Person();
		p1.writeOutput();
		
		
		
	}
	
	public static Person everyMusician(){
		
	}
	
}
