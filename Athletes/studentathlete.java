
public class StudentAthlete extends Student { // gets the attributes from Student class

	private int jerseyNumber; //create our new data types
	private double gpa; // ------------------------------

	public StudentAthlete() {
		super.getName(); //calls getName method from the Student class.
		jerseyNumber = 0;
		gpa = 0;

	}
	//generic
	public StudentAthlete(String thisName) {
		setName(thisName);
	}
	//just name and student number
	public StudentAthlete(String thisName, int thisStudentNumber) {
		setName(thisName);
	}
	//name, student number, jersey number, and gpa
	public StudentAthlete(String thisName, int thisStudentNumber, int thisjerseyNumber, double thisgpa) {
		setName(thisName);
		setStudentNumber(thisStudentNumber);
		setJerserNumber(thisjerseyNumber);
		setGpa(thisgpa);

	}

	//getters
	public int getJerserNumber() {
		return jerseyNumber;
	}
	//getters
	public double getgpa() {
		return gpa;
	}
	//setter
	public void setStudentAthlete(int thisJerseyNumber, double thisgpa) {
		jerseyNumber = thisJerseyNumber;
		gpa = thisgpa;
	}
	
	public void setJerserNumber(int thisJersey){
		jerseyNumber = thisJersey;
	}
	
	public void setGpa(double thisgpa){
		gpa = thisgpa;
	}
	//to output our jersey number and GPA.
	public void writeOutput() {
		System.out.println("Name: " + getName());
		System.out.println("Student number: " + getStudentNumber());
		System.out.println("Jersey Number: " + jerseyNumber);
		System.out.println("GPA: " + gpa);
	}
	
	public boolean equals(StudentAthlete otherStudentAthlete)
    {
        return (this.sameName(otherStudentAthlete)
             && (this.jerseyNumber == otherStudentAthlete.jerseyNumber));
    }
	
	
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//DESCRIPTION:	This is the main method for the StudentAthlete class
//
//INPUTS:		name, student number, jersey number, and gpa
//
//OUTPUTS:		name, student number, jersey number, and gpa to a string
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//main method with 4 objects created.
	public static void main(String[] args) {
		StudentAthlete a1 = new StudentAthlete("Bob Smith", 2120222, 10, 3.2);
		StudentAthlete a2 = new StudentAthlete("Joe Smoe", 8188345, 22, 2.0);
		StudentAthlete a3 = new StudentAthlete("Gill Thrill", 2929316, 7, 3.8);
		StudentAthlete a4 = new StudentAthlete("Jesse Bigshoe", 1082127, 28, 2.75);
		
		//some operations on the objects.
//		System.out.println(a1.getgpa());
//		a3.jerseyNumber = a2.jerseyNumber;
//		System.out.println(a3.jerseyNumber);
//		a1.setName("John Jensenny");
//		System.out.println(a1.getName());
//		System.out.println(a4);

		a1.writeOutput();
		a2.writeOutput();
		a3.writeOutput();
		a4.writeOutput();
	}

}
