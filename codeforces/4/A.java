import java.util.Scanner;
public class P4A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int w;
        w = in.nextInt();
        if(w<4)
            System.out.println("NO");
        else{
            if(w%2==0)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}
