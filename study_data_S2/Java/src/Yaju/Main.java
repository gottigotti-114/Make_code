package Yaju;

import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;

import javax.swing.JFrame;

public class Main extends JFrame implements KeyListener {
	static char prev = ' ';
	static int flag = 0;
    public Main() {
        setTitle("キー判定テスト");
        setSize(300, 200);
        setLocationRelativeTo(null);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        addKeyListener(this);
    }

    @Override
    public void keyPressed(KeyEvent e) {
    	char key = e.getKeyChar();
    	if(key == 's') {
    		prev = 's';
    		flag++;
    	}else if(key == 'e' && prev == 's') {
    		prev = 'e';
    		flag++;    		
    	}else if(key == 'x' && prev == 'e' && flag == 2) {
    		System.out.println("イキスギぃー！！");
    		prev =  ' ';
    		flag = 0;
    	}else {
    		prev = ' ';
    		flag = 0;
    	}
    }

    @Override
    public void keyReleased(KeyEvent e) {
//        System.out.println("離されたキー: " + e.getKeyChar());
    }

    @Override
    public void keyTyped(KeyEvent e) {
//        System.out.println("タイプされたキー: " + e.getKeyChar());
    }

    public static void main(String[] args) {
        new Main().setVisible(true);  // クラス名を修正
    }
}