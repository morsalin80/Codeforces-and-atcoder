import java.util.Scanner;
public class P41A {
    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);
        String a,b;
        a = scr.next();
        b = scr.next();
        int j,i;
        boolean same = true;
        for( i=0, j=b.length()-1;i<a.length();i++,j--){
            if(a.charAt(i)!=b.charAt(j)){
                same = false;
                break;
            }
        }
        if(same)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}
