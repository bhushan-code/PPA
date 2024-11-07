class ThreadDemo2
{
    public static void main(String A[])
    {
        System.out.println("Inside main thread");

        Demo dobj = new Demo();
        Thread tobj = new Thread(dobj);

        tobj.start();
    }
}

class Demo implements Runnable
{
    public void run()
    {
        System.out.println("Thread is Running");
    }
}

//System.out.println("Name of current thread is : "+Thread.currentThread().getName());