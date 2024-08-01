public class Counter {
	private int x;
	private int help;
	private boolean saved = false;
	public Counter() {
		x = 0;
}

	public void increment() {
		x++;
}

	public int get() {
		return x;
}
	public void reset() {
		x = 0;
}
	public void decrement() {
		if (x > 0)
			x--;
}
	public void save() {
		help = x;
		saved = true;
}
	public void restore() {
		if(saved){
			x = help;
}		else{
			System.out.println("Error kein save vor restore gefunden!");

}
}
}
