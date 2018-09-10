import java.util.Scanner;
public class P208A {
    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);
        String str;
        str = scr.next();
        int len = str.length();
        boolean space = false;
        for(int i=0;i<len;i++){
            if((i<len-2)&&str.charAt(i)=='W'&&str.charAt(i+1)=='U'&&str.charAt(i+2)=='B'){
                if(i!=0 && space){
                    System.out.print(" ");
                    space = false;
                }
                i+=2;
                continue;
            }
            System.out.print(str.charAt(i));
            space = true;
        }
    }
}
