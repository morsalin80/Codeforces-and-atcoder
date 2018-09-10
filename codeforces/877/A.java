import java.util.Scanner;
public class P877A {
    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);
        String[] s1 = {"Danil","Olya","Slava","Ann","Nikita"};
        String str;
        str = scr.next();
        int milse = 0;
        int len = str.length();
        for(int i=0;i<len;i++){
            if((i<len-4)&&str.charAt(i)=='D' && str.charAt(i+1)=='a' &&str.charAt(i+2)=='n' && str.charAt(i+3)=='i' &&str.charAt(i+4)=='l')milse++;
            if((i<len-3)&&str.charAt(i)=='O' && str.charAt(i+1)=='l' &&str.charAt(i+2)=='y' && str.charAt(i+3)=='a') milse++;
            if((i<len-4)&&str.charAt(i)=='S' && str.charAt(i+1)=='l' &&str.charAt(i+2)=='a' && str.charAt(i+3)=='v' && str.charAt(i+4)=='a')milse++;
            if((i<len-2)&&str.charAt(i)=='A' && str.charAt(i+1)=='n' &&str.charAt(i+2)=='n')milse++;
            if((i<len-5)&&str.charAt(i)=='N' && str.charAt(i+1)=='i' &&str.charAt(i+2)=='k' && str.charAt(i+3)=='i' &&str.charAt(i+4)=='t' && str.charAt(i+5)=='a')milse++;
        }
        if(milse==1)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}
