package practicals_20_30;

import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class JQ_28 extends Applet implements ActionListener, KeyListener {

	String msg = " ";
	int X = 10, Y = 20;

	public void init() {
		addKeyListener(this);
	}

	public void keyPressed(KeyEvent ke) {
		showStatus("Key pressed");
	}

	public void keyReleased(KeyEvent ke) {
		showStatus("Key Released");
	}

	public void keyTyped(KeyEvent ke) {
		msg += ke.getKeyChar();
		repaint();
	}

	public void paint(Graphics g) {
		g.drawString(msg, X, Y);
	}

	@Override
	public void actionPerformed(ActionEvent arg0) {
		// TODO Auto-generated method stub

	}

}
