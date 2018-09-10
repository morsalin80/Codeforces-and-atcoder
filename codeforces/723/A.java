import java.util.Scanner;
import java.util.Arrays;
public class P723A {
    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);
        int[] a = new int[3];
        for(int i=0;i<3;i++)
            a[i] = scr.nextInt();
        Arrays.sort(a);
        System.out.println(a[2]-a[0]);
    }
}
