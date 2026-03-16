// java me coding started

class QueueArray{

  int[] q;
  int front;
  int rear;
  int capacity;

    public QueueArray(int size) {
      capacity = size;
      q = new int[capacity];
      front = -1;
      rear = -1;
    }

    boolean isEmpty(){

      return front > rear || front == -1;
        
    }

    boolean isFull(){
      return rear == capacity - 1;
    }

    void enqueue(int data){
      if(isFull()){
        System.out.println("Queue overflow");
        return;
      }

      if(front == -1){
        front = 0;
      }

      rear++;
      q[rear] = data;
    }

    int dequeue(){
      if(isEmpty()) {
        System.out.println("Queue underflow");
        return -1;
      }

      int removed = q[front];
      front++;
      return removed;
    }

    int peek(){
      if(isEmpty()){
        return -1;
      }

      return q[front];
    }
    
    void display(){
      if(isEmpty()) return;

      for (int i = 0; i < capacity; i++) {
          System.out.println(q[i] + " ");
      }
      System.out.println();
    }
    
}


public class QueueUsingArray{
  public static void main(String[] args) {
    QueueArray q = new QueueArray(5);

    q.enqueue(10);
    q.enqueue(11);
    q.enqueue(12);
    q.enqueue(13);
    System.out.println(q.peek());
    q.display();
    q.dequeue();
    q.isEmpty();
    q.isFull();

  }

}