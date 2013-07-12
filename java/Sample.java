import java.util.*;
public class Sample {

    public static void main(String[] args) {

        List<Integer>  iList = new ArrayList<Integer>();
        for (int i = 0; i != 100; i++)
            iList.add(i);

        int addValue = 1000;
        for (Integer i: iList) {
            if (i%10 == 0) {
                iList.add(addValue++);
            }
        }

    }
}
