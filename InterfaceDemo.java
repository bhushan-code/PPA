


class InterfaceDemo
{
    public static void main(String A[])
    {
        System.out.println("Tax rate is : "+RBI.TaxRate);                   //we call taxrate because interface characteristic is static

        SBI sobj = new SBI();
        BOI bobj = new BOI();

        System.out.println("Interst rate of SBI : "+sobj.CalculateInterest());
        System.out.println("Interst rate of BOI : "+bobj.CalculateInterest());

    }
}


interface RBI
{
    int TaxRate = 30;                                                         //its public static and final (constant)
    public float CalculateInterest();                                         //all function are abstract

}

class SBI implements RBI
{
    public float CalculateInterest()
    {
        return 7.5f;

    }
}
class BOI implements RBI
{
    public float CalculateInterest()
    {
        return 8.5f;
    }
}

