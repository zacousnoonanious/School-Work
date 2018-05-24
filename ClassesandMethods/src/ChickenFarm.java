
public class ChickenFarm {
	String breed;
	int hens = 0;
	double eggs = 0;

	public static void main(String[] args) {

	}

	public int setHens(int setHens) {
		// sets number of hens to a specified integer value.
		setHens = hens;
		return hens;
	}

	public double setEggs(double setEggs) {
		// sets average number of eggs collected per day to to specified double
		// value.
		setEggs = eggs;
		return eggs;
	}

	public int getEggsPerHen(int getHens, double getEggs) {
		return setHens(hens);
	}
}
