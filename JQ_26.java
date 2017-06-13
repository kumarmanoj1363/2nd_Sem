package practicals_20_30;
import java.applet.*;
import java.awt.*;
import java.net.*;
/*
 <applet code="JQ_26" width=300 height=400>
 </applet>
 
 */
public class JQ_26 extends Applet {

	public void paint(Graphics g)
	{
		String msg;
		URL url=getCodeBase();
		msg="Code Base: "+url;
		g.drawString(msg, 20, 40);
		url=getDocumentBase();
		msg="Document base "+url;
		
		g.drawString(msg, 20, 60);
		setBackground(Color.blue);
		showStatus("           BASE FILE LOCATION  ");
		
	}

}
