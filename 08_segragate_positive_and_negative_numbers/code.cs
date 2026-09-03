using System;

class Program
{
    public static void segregate(int[] array, int start, int end)
    {
        if (end <= start) return;
        int mid = (end + start) / 2;

        segregate(array, start, mid);
        segregate(array, mid + 1, end);
    }

    public static void merge(int[] array, int start, int mid, int end)
    {
        // left [3,8]  right [2,5]
        int i, j, k;
        int left_length = mid - start + 1;
        int right_length = end - mid;

        int[] left_array = new int[left_length];
        int[] right_array = new int[right_length];

        for (i = 0; i < left_length; i++)
        {
            left_array[i] = array[start + i];
        }

        for (j = 0; j < right_length; j++)
        {
            right_array[j] = array[mid + i + 1];
        }
        i = 0;
        j = 0;
        k = start;

        while (i < left_array && left_array[i] <= 0)
        {
            array[k] = left_array[i];
            i++;
            k++;
        }

        while (j < right_array && right_array[i] <= 0)
        {
            array[k] = right_array[j];
            j++;
            k++;
        }
        while (i < left_length)
        {
            array[k] = left_array[i];

        }
        while (j < right_length)
        {
            array[k] = right_array[j];
        }
    }

}

