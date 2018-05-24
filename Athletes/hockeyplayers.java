
public class HockeyPlayers extends StudentAthlete{

	private int goals;
	private int assists;

	public HockeyPlayers(){
		
		goals = 0;
		assists = 0;
		
	}
	
	public HockeyPlayers(String name){
		super();
	}
	
	public HockeyPlayers(String name, int studentNumber){
		super.getName();
	}
	
	public HockeyPlayers(String name, int studentNumber, int jerseyNumber, double GPA, int theseGoals, int theseAssists){
		super(name);
		setStudentNumber(studentNumber);
		setJerserNumber(jerseyNumber);
		setGpa(GPA);
		setGoals(theseGoals);
		setAssists(theseAssists);
		setPoints(theseGoals, theseAssists);
	}
	public int getPoints(){
		return goals + assists;
	}
	public int getGoals(){
		return goals;
	}
	public int getAssists(){
		return assists;
	}
	
	public void setGoals(int newGoals){
		goals = newGoals;
	}
	
	public void setAssists( int newAssists){
		assists = newAssists;
	}
	public void setPoints(int newGoals, int newAssists){
		goals = newGoals;
		assists = newAssists;
	}
	
	

public void writeOutput() {
		System.out.println(getName());
		System.out.println(getStudentNumber());
		System.out.println(getJerserNumber());
		System.out.println(getgpa());
		System.out.println(getPoints());
	}
	
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//DESCRIPTION:	This is the main method for the HockeyPlayers class
//
//INPUTS:		name, student number, jersey number, gpa, and points
//
//OUTPUTS:		name, student number, jersey number, gpa, and points to a string
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	public static void main(String[] args){
		HockeyPlayers h1 = new HockeyPlayers("adam", 1231231, 27, 2.8, 5, 7);
		h1.writeOutput();
	}
	
	
}
