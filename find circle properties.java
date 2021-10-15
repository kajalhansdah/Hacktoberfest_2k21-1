import java.util.Scanner;
import java.lang.Math;

public class Main {
    public static void main(String[] args)
 {
        Scanner sc = new Scanner(System.in);
        int x1,y1,x2,y2;
        double d,r;
        System.out.println("Enter x and y co ordinates of center of circle");
        x1 = sc.nextInt();
        y1 = sc.nextInt();
        System.out.println("Enter x and y co ordinates of any arbitrary point ");
        x2 = sc.nextInt();
        y2 = sc.nextInt();
        System.out.println("Enter radius of circle ");
        r=sc.nextInt();
        d=Math.sqrt(Math.pow((x2-x1),2)+Math.pow((y2-y1),2));
        if(r==d)
        System.out.println("point is on the circle");
        else
        if(d<r)
        System.out.println("point in inside the circle");
        else
        System.out.println("point is outside the circle");

}
}
       
