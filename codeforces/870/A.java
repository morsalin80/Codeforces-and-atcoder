import java.util.Arrays;
import java.util.Scanner;
public class P870A {
    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);
        int a,b;
        a = scr.nextInt();
        b = scr.nextInt();
        int[] arr1 = new int[a];
        int[] arr2 = new int[b];
        for(int i=0;i<a;i++)
            arr1[i] = scr.nextInt();
        for(int i=0;i<b;i++)
            arr2[i] = scr.nextInt();
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        boolean chkb=false,chka = false;
        int same = 0;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                //System.out.println(arr2[j]+"=="+arr1[i]);
            if(arr1[i]==arr2[j]){
                same = arr1[i];
                chka = true;
                break;
            }
            if(chka)
                break;
            }}
        if(chka)
            System.out.print(same);
        else if(arr1[0]<arr2[0]){
        System.out.print(arr1[0]);
        System.out.print(arr2[0]);
        }
        else if(arr1[0]==arr2[0])
            System.out.println(arr1[0]);
        else{
            System.out.print(arr2[0]);
            System.out.print(arr1[0]);
    }}
}
