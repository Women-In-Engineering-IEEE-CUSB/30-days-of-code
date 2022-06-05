import java.io.*;
import java.util.*;

// Read only region start class UserMainCode
class differentAlphabetsCharArraysSingleSum {
    public static int SumofDifferentAlpha(char[] input1, char[] input2) {
        int n1 = input1.length;
        int n2 = input2.length;
        Arrays.sort(input1);
        Arrays.sort(input2);
        int sum = 0;
        int i = 0, j = 0;

        while (i < n1 && j < n2) {

            if (input1[i] < input2[j]) {
                sum += (int) input1[i];

                i++;
            } else if (input2[j] < input1[i]) {

                sum += (int) input2[j];
                j++;
            } else {
                i++;
                j++;
            }
        }
        while (i < n1) {
            sum += (int) input1[i];
            i++;
        }
        while (j < n2) {
            sum += (int) input2[j];
            j++;
        }
        int singlesum = 0;
        if (sum == 0) {
            return 0;
        }
        singlesum = (sum % 9 == 0) ? 9 : (sum % 9);
        return singlesum;
    }

    public static void main(String[] args)
    {
        char arr1[] = { 'a', 'b', 'c','f'};
        char arr2[] = { 'a', 'b', 'd','f','g' };

        int sum=SumofDifferentAlpha(arr1, arr2);
        System.out.println(sum);
    }
}