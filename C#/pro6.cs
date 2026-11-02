using System;

interface IPrinter
{
    void Print(string msg);
}
delegate void MyDelegate(string msg);
class Demo : IPrinter
{
    public void Print(string msg)
    {
        Console.WriteLine("Interface Print: " + msg);
    }
    public static void Show(string msg)
    {
        Console.WriteLine("Delegate Call: " + msg);
    }
}
class Program
{
    static void Main()
    {
        IPrinter printer = new Demo();
        printer.Print("Hello BCA");
        MyDelegate del = Demo.Show;
        del("Welcome to C#");
        try
        {
            int a = 10, b = 0;
            int result = a / b;
        }
        catch (DivideByZeroException ex)
        {
            Console.WriteLine("Exception Caught: " + ex.Message);
        }
        finally
        {
            Console.WriteLine("Finally block executed.");
        }
    }
}
