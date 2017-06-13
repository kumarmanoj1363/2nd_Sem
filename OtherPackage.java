package p17_b;

public class OtherPackage {
	OtherPackage(){
		p17_a.Protection p = new p17_a.Protection();
		System.out.println("Other package constructor.");
		System.out.println("n_pub = " + p.n_pub);
	}
}
