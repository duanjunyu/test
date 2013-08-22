import java.util.*;

public class Byte {
    private static byte[] mPdu;
    protected static int count;

    public static void setPdu(byte[] pdu) {
        mPdu = pdu;
    }

    public static byte[] getPdu() {
        return mPdu;
    }

    public static void main(String[] args) {
        byte[] bt = getPdu();
        if(null == bt)
        {
            System.out.println("NULL!!");
        }
        count = bt.length;
    }
}
