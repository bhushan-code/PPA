
class ObjectDemo4
{
    public static void main(String A[])
    {
        try
        {
                    
            Student sobj = new Student("Bhushan",25,86);

            Student sobjX = (Student)sobj.clone();                  //Deep copy seperate memory  


            System.out.println("Name is : "+sobj.Name);
            System.out.println("Age is : "+sobj.Age);
            System.out.println("Mark is : "+sobj.Mark);

            System.out.println("NameX is : "+sobjX.Name);
            System.out.println("AgeX is : "+sobjX.Age);
            System.out.println("MarkX is : "+sobjX.Mark);
        }   
        catch(Exception obj)
        {

        }
        //Student sobjX = sobj;                                      //salow copy no new memory allocate , dont use


    }
}

class Student implements Cloneable            //class student extends Object implemet Cloneable                       //interface(cloneable)
{
    public String Name;
    public int Age;
    public int Mark;

    public Student(String A, int B, int C)
    {
        this.Name = A;
        this.Age = B;
        this.Mark = C;
    }
    public Object clone() throws CloneNotSupportedException
    {
        return super.clone();
    }

}