
class Encapsulation
{
    public static void main(String Arg[])
    {
        System.out.println("Inside Main Function");
        Arithematic aobj1 = new Arithematic();              //dynamic memory allocation is must in java
        Arithematic aobj2 = new Arithematic(11,10);

        int Ret = 0;

        Ret = aobj2.Addition();
        System.out.println("Addition is : "+Ret);

        Ret = aobj2.Substraction();
        System.out.println("Substraction is : "+Ret);
    }
}


class Arithematic
{
    public int No1;
    public int No2;

    public Arithematic()
    {
        System.out.println("Inside Default Constructor");
        this.No1 = 0;
        this.No2 = 0;
    }

    public Arithematic(int A, int B)
    {
        System.out.println("Inside Parametrised Constructor");
        this.No1 = A;
        this.No2 = B;
    }

    public int Addition()
    {
        int Ans = 0;
        Ans = this.No1 + this.No2;
        return Ans;
    }

    public int Substraction()
    {
        int Ans = 0;
        Ans = this.No1 - this.No2;
        return Ans;
    }
}
