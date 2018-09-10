import java.util.Scanner;
public class P617A {
    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);
        int n;
        n = scr.nextInt();
        int ans = n/5;
        if(n%5!=0)
            ans++;
        System.out.println(ans);
    }
}
