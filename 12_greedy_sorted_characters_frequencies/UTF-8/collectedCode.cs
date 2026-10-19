using System.Collections;

public class CharFreq
{
    public CharFreq() { }
    public void AnyCodeMethod(string message)
    {
        Console.WriteLine("Any Code Method");

        Hashtable freq = new Hashtable();


        for (int i = 0; i < message.Length; i++)
        {
            if (freq[message[i]] == null)
            {
                freq[message[i]] = 1;
            }
            else
            {
                freq[message[i]] = (int)freq[message[i]] + 1;
            }
        }
        foreach (char k in freq.Keys)
        {
            Console.Write(k + "");
            Console.WriteLine(freq[k]);
        }
        SortHash(freq);
    }
    public void SortHash(Hashtable freq)
    {
        int[,] freqArray = new int[freq.Count, 2];
        int i = 0;
        foreach (char k in freq.Keys)
        {
            freqArray[i, 0] = (int)k;
            freqArray[i, 1] = (int)freq[k];
            i++;
        }
        this.sort(freqArray, 0, freq.Count - 1);
        Console.WriteLine("========= Print Sorted Data ==========");

        for (i = 0; i < freq.Count; i++)
        {
            Console.Write((char)freqArray[i, 0] + " ");
            Console.WriteLine(freqArray[i, 1]);
        }

    }

    public void sort(int[,] array, int start, int end)
    {
        if (end <= start) return;
        int midpoint = (end + start) / 2;
        sort(array, start, midpoint);
        sort(array, midpoint + 1, end);

        Merge(array, start, midpoint, end);
    }
    public void Merge(int[,] array, int start, int mid, int end)
    {
        int i, j, k;
        int left_length = mid - start + 1;
        int right_length = end - mid;

        int[,] left_array = new int[left_length, 2];
        int[,] right_array = new int[right_length, 2];

        for (i = 0; i < left_length; i++)
        {
            left_array[i, 0] = array[start + i, 0];
            left_array[i, 1] = array[start + i, 1];
        }

        for (j = 0; j < right_length; j++)
        {
            right_array[j, 0] = array[mid + 1 + j, 0];
            right_array[j, 1] = array[mid + 1 + j, 1];
        }
        i = 0;
        j = 0;
        k = start;

        while (i < left_length && j < right_length)
        {
            if (left_array[i, 1] <= right_array[j, 1])
            {
                array[k, 0] = left_array[i, 0];
                array[k, 1] = left_array[i, 1];
                i++;
            }
            else
            {
                array[k, 0] = right_array[j, 0];
                array[k, 1] = right_array[j, 1];
                j++;
            }
            k++;
        }
        while (i < left_length)
        {
            array[k, 0] = left_array[i, 0];
            array[k, 1] = left_array[i, 1];
            i++;
            k++;
        }
        while (j < right_length)
        {
            array[k, 0] = right_array[j, 0];
            array[k, 1] = right_array[j, 1];
            j++;
            k++;
        }
    }
    // I finished the code of sort
}


class Program
{
    public static void Main(string[] args)
    {
        CharFreq cf = new CharFreq();

        string msg = "This article is about classification of programming languages. For definition of the term programming model, see Programming model.A programming paradigm is a relatively high-level way to conceptualize and structure the implementation of a computer program. A programming language can be classified as supporting one or many paradigms.Paradigms are separated along and described by different dimensions of programming. Some paradigms are about implications of the execution model, such as allowing side effects, or whether the sequence of operations is defined by the execution model. Other paradigms are about the way code is organized, such as grouping into units that include both state and behavior. Yet others are about syntax and grammar";
        cf.AnyCodeMethod(msg);
    }
}