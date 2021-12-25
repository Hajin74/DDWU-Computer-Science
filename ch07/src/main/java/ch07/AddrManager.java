/*유하진 20200988 컴퓨터학과 크롬 */
package ch07;

import java.util.*;

public class AddrManager {
	List<AddrBean> addrlist = new ArrayList<AddrBean>();
	
	public void add(AddrBean ab) {
		addrlist.add(ab);
	}
	
	public List<AddrBean> getAddrList() {
		return addrlist;
	}
}
