// import java.util.*;

class A {
    public static void main(String args[]) {

        String start = "*";
        String last = "**********";

        for (int i = start.length(); i <= last.length() * last.length(); i++) {
            System.out.println(i);
        }

    }
}
