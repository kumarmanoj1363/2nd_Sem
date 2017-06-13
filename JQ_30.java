package practicals_20_30;

import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class JQ_30 extends Applet implements ActionListener {

	String msg = "";
	Button B1 = new Button("Yes");
	Button B2 = new Button("No");

	public void init() {
		add(B1);
		add(B2);
		B1.addActionListener(this);
		B2.addActionListener(this);
	}

	public void paint(Graphics g) {
		g.drawString(msg, 50, 50);
		showStatus("                     MY APPLET ");
	}

	public void actionPerformed(ActionEvent ae) {
		if (ae.getSource() == B1) {
			msg = "You pressed YES";
			repaint();
		} else {
			msg = "You pressed NO";
			repaint();
		}
	}
}
