package practicals_20_30;

import java.io.*;
import java.net.*;
import java.util.*;

public class JQ_23 {

	public static void main(String[] args)throws Exception
	{
		
		int c;
		URL obj1=new URL("http://www.amazon.in ");
		URLConnection objCon=obj1.openConnection();
		long d =objCon.getDate();
		if(d==0)
		
			System.out.println("No date Info available ");
		
		else
			System.out.println("Date: "+new Date(d));
		System.out.println("Content-Type: "+objCon.getContentType());
		
      d=objCon.getExpiration();
     if(d==0)
     
    	 System.out.println("No excepiration available ");
     
     else
    	 System.out.println("Expires :"+new Date(d));
        
     d=objCon.getLastModified();
     if(d==0)
    	 System.out.println("No last modified information ");
     else
    	 System.out.println("Last-Modified :"+new Date(d));
     
     
     
     long len=objCon.getContentLengthLong();
     if(len==-1)
     
    	 System.out.println("No content length available ");
     
    	 else
    		 System.out.println("Conent-Length :"+len);
    	 if(len!=0)
    	 {
    		 System.out.println("~~~~~~~~~~~~~~~~~~~Content~~~~~~~~~~~~~~~~~ ");
    		 InputStream input=objCon.getInputStream();
    		 while(((c=input.read()) !=-1))
    		 {
    			 System.out.println((char)c);
    	 }
    		 input.close();
     }//end of if
    	 
    	 else
    		 System.out.println("No content available ");
	}//end of main
	

}//end of class