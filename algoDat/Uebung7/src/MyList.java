public class MyList<T>{
    public static class Node<T> {
        T value;
        Node<T> next;
        Node(T value) {
            this.value = value;
            this.next = null;
        }
    }
    private Node<T> first;
    private Node<T> last;
    int size = 0;
    public boolean addNode(T value) {
        Node<T> newNode = new Node<>(value);
        if(first == null) {
            size++;
            first = newNode;
            last = newNode;
            return true;
        }
        else {
            size++;
            last.next = newNode;
            last = newNode;
            return true;
        }
    }
    public int getSize(){
        return size;
    }
    public T getValue(int index){
        if(index < 0){
            throw new IndexOutOfBoundsException("Index must be greater than 0");
        }
        Node<T> current = first;
        int counter = 0;
        while(current != null){
            if(counter == index){
                return current.value;
            }
            current = current.next;
            counter++;
        }
        throw new IndexOutOfBoundsException("Index out of bounds");
    }
    public T removeNode(int index){
        if(index < 0 || index >= size){
            throw new IndexOutOfBoundsException("Index must be greater than 0");
        }
        T valueToRemove = getValue(index);
        Node<T> current = first;
        int counter = 0;
        if(index == 0){
            first = current.next;
            current.next = null;
            size--;
            return valueToRemove;
        }
        while(current != null){
            if(counter == index -1){
                Node<T> nodeToRemove = current.next;
                current.next = current.next.next;
                nodeToRemove = null;
                size--;
                return valueToRemove;
                }
            current = current.next;
            counter++;
        }

        return valueToRemove;
    }
/*public static void main(String[] args){
        MyList l = new MyList();
    for (int i=1; i<=10; ++i)
    l.addNode(8*i);
    l.removeNode(2);
    for (int i=0; i< l.getSize(); i++)
    System.out.print(" " + l.getValue(i));
    System.out.println();
}*/
}