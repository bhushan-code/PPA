//CMD   
//javac Command.java
//java Command.java Hello 21 Marvellous

class Command
{
    public static void main(String A[])
    {
        System.out.println("Number of command line arguement are : "+A.length);

        for(int i = 0; i < A.length; i++)
        {
            System.out.println(A[i]);
        }

    }
}