import java.util.Scanner;

class ExceptionDemo1
{
    public static void main(String A[])
    {

        Scanner sobj = new Scanner(System.in);
        int Arr[] = {10,20,30,40,50};

        int index = 0;

        System.out.println("Enter the index : ");
        index = sobj.nextInt();

        System.out.println("Value at the given index is : "+Arr[index]);
        
    }
}



/*index 6

Exception in thread "main" java.lang.ArrayIndexOutOfBoundsException: Index 6 out of bounds for length 5

*/
