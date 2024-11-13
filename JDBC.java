import java.sql.*;          // 1
import java.sql.SQLException;

class Database
{
    public static void main(String arg[]) throws Exception
    {
        String URL = "jdbc:mysql://localhost:3306/vamp";
        String Username = "myuser";
        String Password = "mypassword";
        String Query = "select * from student";

        Connection cobj = DriverManager.getConnection(URL,Username,Password);   // 2
        
        Statement sobj = cobj.createStatement();        // 3

        ResultSet robj = sobj.executeQuery(Query);      // 4

        while(robj.next())          // 5
        {
            System.out.println("RID : "+robj.getInt("rno"));
            System.out.println("Name : "+robj.getString("name"));
            System.out.println("City : "+robj.getString("city"));
            System.out.println("Marks : "+robj.getInt("marks"));                                    
        }
    }
}

// execute()            Create table
// executeQuery()       select
// executeUpdate()      delete / update / alter / insert

/*
sudo mysql -uroot
create database vamp
use vamp
create table student(rno int, name varchar(255),city varchar(255),marks int)
inser into student values(11,'bhushan','pune',88);

GRANT ALL PRIVILEGES ON vamp.* TO 'myuser'@'localhost'; (giving vamp vamp databaseto myuser)
FLUSH PRIVILEGES;


close databse 

seperate terminal

javac Database.java
jar file same folde

java -cp .:mysql-connector-j-9.1.0.jar Database.java
*/
