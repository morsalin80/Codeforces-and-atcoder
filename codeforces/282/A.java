import java.util.Scanner;
public class P282 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n;
        n = in.nextInt();
        String test;
        int ini= 0;
        for(int i=0;i<n;i++){
            test = in.next();
            if(test.charAt(0)=='+' || test.charAt(2)=='+')
                ini++;
            else
                ini--;
        }
        System.out.println(ini);
    }
}
