public class Musician {

	String instrument;
	double income;

	public Musician() {

		instrument = "not yet specified!";
		income = 0;

	}

	public void setMusician(String instrumentName, double individualIncome) {
		instrument = instrumentName;
		income = individualIncome;
	}

	public String getMusicianInstrument() {
		return instrument;
	}

	public double getMusicianIncome() {
		return income;
	}
	
	public void writeOutput(){
		System.out.println("Name: " + Person.class.getName());
		System.out.println("Instrument: " + instrument);
		System.out.println("Income: " + income);
	}
	
	public boolean sameInstrument(Musician otherMusician){
		return (this.instrument.equalsIgnoreCase(otherMusician.getMusicianInstrument()));
		
		
	}
	
	public boolean sameIncome(Musician otherMusician){
		return (this.income == (otherMusician.getMusicianIncome()));
		
		
	}
	


}