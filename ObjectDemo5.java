
class ObjectDemo5
{
    public static void main(String A[])
    {
        Student sobj = new Student("Sagar", 21, 89);

        System.out.println(sobj);

    }
}

class Student
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
    public String toString()
    {
        System.out.println("Inside toString maethod");
        return Name+" "+Age+" "+Mark;
    }
}


