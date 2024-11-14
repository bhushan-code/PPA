import java.awt.*;
import java.awt.event.*;


class MarvellousCalculator
{
    public static void main(String A[])
    {
        Calculator cobj = new Calculator(400,400, "Marvellous Calculator");
    }
}

class Calculator extends WindowAdapter implements ActionListener
{
    public Frame mainframe;
    public Button Add, Sub, Multi, Div;
    public TextField t1,t2;
    public Label lobj;
    Integer no1, no2;                       //buffer class

    public Calculator(int Width, int Height, String Title)
    {
        mainframe = new Frame(Title);
        mainframe.setSize(Width,Height);
        mainframe.addWindowListener(this);

        //create buttons

        Add = new Button("ADD");
        Sub = new Button("SUB");
        Multi = new Button("MULT");
        Div = new Button("DIV");

        t1 = new TextField();
        t2 = new TextField();

        lobj = new Label();

        //Set position of buttons

        Add.setBounds(8,300,90,40);                    //X axis, Y axis, W, H
        Sub.setBounds(106,300,90,40);
        Multi.setBounds(204,300,90,40);
        Div.setBounds(302,300,90,40);
        
        t1.setBounds(80,100,100,40);
        t2.setBounds(220,100,100,40);

        lobj.setBounds(150,170,200,100);

        //Add componet to freme

        mainframe.add(Add);
        mainframe.add(Sub);
        mainframe.add(Multi);
        mainframe.add(Div);
        
        mainframe.add(t1);
        mainframe.add(t2);

        mainframe.add(lobj);

        //Add Action Listeners

        Add.addActionListener(this);
        Sub.addActionListener(this);
        Multi.addActionListener(this);
        Div.addActionListener(this);
        
        mainframe.setLayout(null);
        mainframe.setVisible(true);
    }

    public void windowClosing(WindowEvent wobj)
    {
        System.exit(0);
    }

    public void actionPerformed(ActionEvent aobj)
    {
        try
        {
            //parse for buffer class

            no1 = Integer.parseInt(t1.getText());
            no2 = Integer.parseInt(t2.getText());

            if(aobj.getSource() == Add)
            {
                lobj.setText("Addition is : "+(no1+no2));
            }
            else if(aobj.getSource() == Sub)
            {
                lobj.setText("Substraction is : "+(no1-no2));
            }  
            else if(aobj.getSource() == Multi)
            {
                lobj.setText("Multiplication is : "+(no1*no2));
            }  
            else if(aobj.getSource() == Div)
            {
                lobj.setText("Division is : "+(no1/no2));
            }
        }
        catch(Exception eobj)
        {}
    }
}