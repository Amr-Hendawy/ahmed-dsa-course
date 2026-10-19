
using System;

public class CharFreq
{
    public CharFreq() { }

    // ASCII Code Method
    public void ASCIIMethod(string message)
    {
        Console.WriteLine("ASCIIMethod");

        int[] freq = new int[128];

        for (int i = 0; i < message.Length; i++)
        {
            int current_code = (int)message[i];

            freq[current_code]++;
        }

        for (int i = 0; i < freq.Length; i++)
        {
            if (freq[i] > 0)
            {
                char c = (char)i;

                Console.WriteLine(c + " " + freq[i]);
            }
        }
    }
}

class Program
{
    static void Main(string[] args)
    {
        CharFreq cf = new CharFreq();

        string msg = "hello world";

        cf.ASCIIMethod(msg);
    }
}
