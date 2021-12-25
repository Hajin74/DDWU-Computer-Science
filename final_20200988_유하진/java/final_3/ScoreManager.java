/* 컴퓨터학과 20200988 유하진 크롬
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
