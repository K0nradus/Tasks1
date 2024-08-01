public class CounterTest {
	
	public static void main(String[] args) {
		Counter a = new Counter();
		for (int i = 0; i < 5; i++){
		a.increment();
		a.increment();
		a.decrement();
}
//a.save();
a.decrement();
a.restore();
System.out.println("a nach loop = " + a.get());
}
}

