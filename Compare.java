public class Compare {
    public static void main(String[] args) {
        int a = 128;
        int b = 128;

        Integer c = 128;
        Integer d = 128;
        System.out.println(a==b);   //int compares values not ref
        System.out.println(c==d);   //Integer is an object wrapper for int so compares object references, not values (unless unboxed).  Java caches Integer objects from -128 to 127
    }
}
