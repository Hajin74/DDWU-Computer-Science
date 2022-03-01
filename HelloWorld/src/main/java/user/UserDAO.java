package user;

import java.sql.PreparedStatement;

import util.DatabaseUtil;

import java.sql.Connection;

// 실제로 데이터베이스와 연동되는 곳 Database Access Object
public class UserDAO {
	
	public int join(String userID, String userPassword) {
		String SQL = "INSERT INTO USER VALUES (?, ?)";
		
		try {
			Connection conn = DatabaseUtil.getConnection();
			PreparedStatement pstmt  = conn.prepareStatement(SQL);
			pstmt.setString(1, userID);
			pstmt.setString(2, userPassword);
			
			return pstmt.executeUpdate();
		} catch (Exception e) {
			e.printStackTrace();
		}
		
		return -1;
	}
}
