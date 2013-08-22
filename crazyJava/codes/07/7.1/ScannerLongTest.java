
import java.util.*;
/**
 * Description:
 * <br/>网站: <a href="http://www.crazyit.org">疯狂Java联盟</a> 
 * <br/>Copyright (C), 2001-2012, Yeeku.H.Lee
 * <br/>This program is protected by copyright laws.
 * <br/>Program Name:
 * <br/>Date:
 * @author Yeeku.H.Lee kongyeeku@163.com
 * @version 1.0
 */
public class ScannerLongTest
{
	public static void main(String[] args)
	{
		//System.in代表标准输入，就是键盘输入
		Scanner sc = new Scanner(System.in);
		//判断是否还有下一个long整数
		while(sc.hasNextLong())
		{
			//输出输入项
			System.out.println("键盘输入的内容是："
				+ sc.nextLong());
		}
	}
}
