using System;
class Program
{
    void Main(string[] args)
    {
        CharFreq cf = new CharFre();

        string msg = "hello world";

        cf.ASCIIMethod(msg);
    }
}