public class RestrictedCounter extends Counter{

	private int counterMaxCapacity;
	public RestrictedCounter(int counterCapacity) {
		super();
		counterMaxCapacity = counterCapacity;	
}
	public void increment(){
		if ( get() < counterMaxCapacity)
			super.increment();
		else 
			System.out.println("max capacity reached");
} 
	public int freeCapacity(){
		return counterMaxCapacity - get();
}
}
			
