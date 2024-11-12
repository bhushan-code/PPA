
class Assignment
{
    public static void main(String A[])
        {
            try
            {
                Demo dobj = new Demo();
                Demo dobjX = (Demo) dobj.clone();

                dobj.fun();
                dobjX.fun();
            }    

            catch(Exception obj)
            {

            }
        }

}

class Demo implements Cloneable 
{
    public int no;
    public String str;

    public void fun()
    {
        System.out.println("inside fun");
    }
    public Object clone() throws CloneNotSupportedException
    {
        return super.clone();
    }
}