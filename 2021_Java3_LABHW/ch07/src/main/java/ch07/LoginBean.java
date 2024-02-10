/*유하진 20200988 컴퓨터학과 크롬 */

package ch07;

public class LoginBean {
	private String userid;
	private String userpw;
	
	final String _userid = "myuser";
	final String _userpw = "1234";
	
	public boolean checkUser() {
		if(userid.equals(_userid) && userpw.equals(_userpw)) {
			return true;
		} else {
			return false;
		}
	}

	public String getUserid() {
		return userid;
	}

	public void setUserid(String userid) {
		this.userid = userid;
	}

	public String getUserpw() {
		return userpw;
	}

	public void setUserpw(String userpw) {
		this.userpw = userpw;
	}

	public String get_userid() {
		return _userid;
	}

	public String get_userpw() {
		return _userpw;
	}
	
	
}
