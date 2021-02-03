public class ProductMain01 {
	public static void main(String[] args) {
		Product p1 = new Product();		// Product Class를 이용하여 객체 p1를 생성
		p1.num = 1;				// p1(인스턴스 변수)의 멤버변수 num에 1을 할당
		p1.name = "컴퓨터";		// p1(or 레퍼런스 변수)의 멤버변수 name에 컴퓨터를 할당
		
		Product p2 = new Product();
		p2.num = 2;
		p2.name = "노트북";
		
		Product p3 = new Product();
		p3.num = 3;
		p3.name = "프린터";
		
		System.out.println("객체 p1의 정보");
		System.out.println("num : " + p1.num);
		System.out.println("name : " + p1.name);
		System.out.println("===============");
		
		System.out.println("객체 p2의 정보");
		System.out.println("num : " + p2.num);
		System.out.println("name : " + p2.name);
		System.out.println("===============");
		
		System.out.println("객체 p3의 정보");
		System.out.println("num : " + p3.num);
		System.out.println("name : " + p3.name);
		System.out.println("===============");
		
	}//main()
}//class
