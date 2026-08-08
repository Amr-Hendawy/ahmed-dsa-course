using System;

// [2,7,5,4,11]
// 2 + 11 / 2 ==> 6.5
// 11 - 2 / 2 ==> 4.5

class Program
{

    static public void MergeSort(int[] array, int start, int end)
    {
        // Don't continue if end aequals or greater than start
        // That is to stop the portion
        if (start >= end) return;
        // Calculate the midpoint = ( end - start ) / 2
        // it works only if start is ZERO 
        //* Better use start + ( end - start ) / 2
        // ( end  - start) / 2
        int midpoint = start + (end - start) / 2;

        // Divide the portion of the array into new two arrays
        // call yourself twice, once for the left portion 
        // the other for the right portion
        // merge two potions
        // print x
        MergeSort(array, start, midpoint);
        MergeSort(array, midpoint + 1, end);

        Merge(array, start, midpoint, end);

    }


    public static void Merge(int[] array, int start, int midpoint, int end)
    {
        // I need some variables for looops
        int i, j, k;
        // The first one "i" I want its length to reserve a place that fits it
        // This is related to the nature of loop some languages don't need and other need it
        //  In this case we need its length from the very start

        int left_length = midpoint - start + 1;
        int right_length = end - midpoint;

        int[] left_array = new int[left_length];
        int[] right_array = new int[right_length];

        for (i = 0; i < left_length; i++)
        {
            left_array[i] = array[start + i];
        }

        for (j = 0; j < right_length; j++)
        {
            right_array[j] = array[midpoint + 1 + j];
        }

        i = j = 0;
        k = start;
        while (i < left_length && j < right_length)
        {
            if (left_array[i] <= right_array[j])
            {
                array[k] = left_array[i];
                i++;
            }
            else
            {

                array[k] = right_array[j];
                j++;
            }
            k++;
        }

        // Move remain items
        // One of them will work not the following two whiles
        // left_array = [2, 5, 8]
        // right_array = [3, 7]
        // array = [2,3,5,7,......]
        // i  = 2
        // j = 2
        // left array:
        // index 0 => 2     index 1 ==> 5     index 2 ==> 8
        // index 0 => 3     index 1 ==> 7     
        while (i < left_length)
        {
            array[k] = left_array[i];
            i++;
            k++;
        }
        while (j < right_length)
        {
            array[k] = right_array[j];
            j++;
            k++;
        }
    }

    // When I call an array into a function I pass its pointer to a function not the array itself
    // that means I modify the original array not the copied one
    // It wasn't deleted from heap and stack as long as the program is working or its scope is working

    public static void Main(string[] args)
    {
        int[] array = { 3,7,5,9,6,4,1,2 };

        Console.WriteLine(String.Join(", ", array));
        MergeSort(array, 0, array.Length - 1);
        Console.WriteLine(String.Join(", ", array));

    }
};
