package com.hanul.study;

public class FruitDTO {
	//멤버 변수 : 과일명(name), 단가(cost), 수량(su), 가격(price)
	private String name;
	private int cost;
	private int su;
	private int price;
	
	//디폴트 생성자 메서드
	public FruitDTO() {}

	//생성자 메소드 초기화
	public FruitDTO(String name, int cost, int su) {
		super();
		this.name = name;
		this.cost = cost;
		this.su = su;
	}

	//Getters & Setters 메소드
	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getCost() {
		return cost;
	}

	public void setCost(int cost) {
		this.cost = cost;
	}

	public int getSu() {
		return su;
	}

	public void setSu(int su) {
		this.su = su;
	}

	public int getPrice() {
		return price;
	}

	public void setPrice(int price) {
		this.price = price;
	}
	
}//class
