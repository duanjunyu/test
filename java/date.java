import java.util.*;

public class date{
    public static void main(String[] args) {

//        String x = "10000000";
//        String x = "0";
//        String x = "86400000";
        String x = "86300000";
        long l = new Long(x).longValue();
        System.out.println("Long value: " + l);

        Calendar c = new GregorianCalendar();
        c.setTimeInMillis(l);
        System.out.println("Calendar time in Millis: " + c.getTimeInMillis());

        String origDate = c.get(Calendar.YEAR) + "-" + c.get(Calendar.MONTH) + "-" + c.get(Calendar.DAY_OF_MONTH);  
        System.out.println("Date in YYYY-MM-DD format: " + origDate);

        x = "1000000000000";
        l = new Long(x).longValue();
        System.out.println("\nLong value: " + l);

        c.setTimeInMillis(l);
        System.out.println("Calendar time in Millis: " + c.getTimeInMillis());

        origDate = c.get(Calendar.YEAR) + "-" + c.get(Calendar.MONTH) + "-" + c.get(Calendar.DAY_OF_MONTH);  
        System.out.println("Date in YYYY-MM-DD format: " + origDate);
    }
}
