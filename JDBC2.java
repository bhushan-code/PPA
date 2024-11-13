import java.sql.*;          // 1
import java.sql.SQLException;

class JDBC2
{
    public static void main(String arg[]) throws Exception
    {
        String URL = "jdbc:mysql://localhost:3306/PPA51";
        String Username = "myuser";
        String Password = "mypassword";
        String Query = "select Customer.CID, Customer.Name, OrderX.Product from Customer right join OrderX on Customer.CID = OrderX.CID";

        Connection cobj = DriverManager.getConnection(URL,Username,Password);   // 2
        
        Statement sobj = cobj.createStatement();        // 3

        ResultSet robj = sobj.executeQuery(Query);      // 4

        while(robj.next())          // 5
        {
            System.out.println("CID : "+robj.getInt("CID"));
            System.out.println("Name : "+robj.getString("Name"));
            System.out.println("Product : "+robj.getString("Product"));
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

javac JDBC.java

jar file same folder

java -cp .:mysql-connector-j-9.1.0.jar JDBC.java
*/
