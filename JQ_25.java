package practicals_20_30;

import java.applet.*;
import java.awt.*;
import java.awt.event.*;

public class JQ_25 extends Applet implements Runnable {
	String msg = "Applet";
	Thread t = null;

  volatile boolean stopFlag;

	public void init() {
		setBackground(Color.BLUE);
	}
	public void start() {
		t = new Thread(this);
		stopFlag = false;
		t.start();
	}

	public void run() {
		for (;;) {
			try {
				repaint();
				Thread.sleep(1000);
				if (stopFlag)
					break;
			} catch (InterruptedException e) {
				System.out.println("Thread Interupped");
			}
		}
	}

	public void stop() {
		stopFlag = true;
		t = null;
	}

	public void paint(Graphics g) {
		char ch;
		ch = msg.charAt(0);
		msg = msg.substring(1, msg.length());
		msg += ch;
		g.drawString(msg, 50, 50);
		showStatus("          This is a test applet ");
	}

	public void actionPerformed(ActionEvent e) {
		// TODO Auto-generated method stub

	}
}