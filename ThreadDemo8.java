class ThreadDemo7
{
    public static void main(String A[]) throws Exception
    {

        Demo dobj1 = new Demo();
        Thread tobj1 = new Thread(dobj1);
        tobj1.setName("PPA");
        tobj1.setPriority(1);

        tobj1.start();
    }
}

class Demo extends Thread
{
    public void run()
    {
        System.out.println("Thread is Running with Thread Name : "+Thread.currentThread().getName());
        System.out.println("Thread Priority is : "+Thread.currentThread().getPriority());
    }
}
