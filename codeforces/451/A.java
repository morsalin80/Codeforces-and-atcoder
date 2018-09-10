import java.util.Scanner;
public class P451A {
    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);
        int n,m;
        n = scr.nextInt();
        m = scr.nextInt();
        int choto;
        choto = Math.min(m, n);
        if(choto%2==0)
            System.out.println("Malvika");
        else
            System.out.println("Akshat");
    }
}
