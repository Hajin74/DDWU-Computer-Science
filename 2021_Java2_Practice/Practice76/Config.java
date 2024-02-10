// 20200988 컴퓨터학과 유하진, 76
public class Config {
	private int size;
	private int range;
	private int key;
	
	public Config() {

	}
	
	public Config(int size, int range, int key) {
		this.size = size;
		this.range = range;
		this.key = key;
	}
	
	public void setSize(int size) {
		this.size = size;
	}
	
	public int getSize() {
		return size;
	}
	
	public void setRange(int range) {
		this.range = range;
	}
	
	public int getRange() {
		return range;
	}
	
	public void setKey(int key) {
		this.key = key;
	}
	
	public int getKey() {
		return key;
	}
}
