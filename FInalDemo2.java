class FinalDemo2
{
    public static void main(String Arg[])
    {
        System.out.println("Inside main");
    }
}

class Base
{

    final public void Fun()
    {
        System.out.println("Inside Base Fun");
    }
    public void Gun()
    {
        System.out.println("Inside Base Gun");
    }
}

class Derived extends Base
{
    public void Fun()
    {
        System.out.println("Inside Derived Fun");
    }
    public void Gun()
    {
        System.out.println("Inside Derived Gun");
    }
}