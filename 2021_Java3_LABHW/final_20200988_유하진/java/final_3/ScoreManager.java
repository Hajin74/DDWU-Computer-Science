/* ��ǻ���а� 20200988 ������ ũ��
 * ScoreManager.java
 */
package final_3;

import java.util.ArrayList;
import java.util.List;

public class ScoreManager {
	List<ScoreBean> scorelist = new ArrayList<ScoreBean>();
	
	public void add(ScoreBean sb) {
		scorelist.add(sb);
	}
	
	public List<ScoreBean> getScoreList() {
		return scorelist;
	}
}
