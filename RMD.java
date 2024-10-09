class RMD
{
    public static void main(String A[])
    {
        Base bobj = new Derived();            //upcasting
        // Base bobj = new Base();            //no casting
        // Derived dobj = new Base();         //downcasting 
        //  Derived dobj = new Derived();     //no casting

        bobj.Fun();                           //Derived
        bobj.Gun();                           //Base
        bobj.Sun();                           //Derived
        bobj.Run();                           //Base
        //bobj.Mun();                           //error
        //bobj.Bun();                           //error
    }
}

class Base
{
    public int A,B;
 
    public void Fun()
    {        System.out.println("Inside Base Fun");    }        
    public void Gun()   
    {        System.out.println("Inside Base Gun");    }        
    public void Sun()
    {        System.out.println("Inside Base Sun");    }
    public void Run()
    {        System.out.println("Inside Base Run");    }
}

class Derived extends Base
{
    public int X,Y;
 
    public void Fun()
    {        System.out.println("Inside Derived Fun");    }
    public void Sun()
    {        System.out.println("Inside Derived Sun");    }
    public void Mun()
    {        System.out.println("Inside Derived Mun");    }
    public void Bun()
    {        System.out.println("Inside Derived Bun");    }

}