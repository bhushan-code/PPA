
class ObjectDemo3
{
    public static void main(String A[])
    {
        Demo obj = new Demo();
        System.out.println(obj.hashCode());

        obj = null;

        System.gc();

    }
}

class Demo
{
    public Demo()
    {
        System.out.println("Inside Constructor");

    }
    
    protected void finalize()
    {
        System.out.println("Inside finalise method");
    }
}