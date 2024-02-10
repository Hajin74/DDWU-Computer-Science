package ddwu.mobile.network.myretrofittest.model.json;

import java.util.List;

public class BoxOfficeResult {
    private List<DailyBoxOffice> dailyBoxOffice;

    public List<DailyBoxOffice> getDailyBoxOffice() {
        return dailyBoxOffice;
    }

    public void setDailyBoxOffice(List<DailyBoxOffice> dailyBoxOffice) {
        this.dailyBoxOffice = dailyBoxOffice;
    }
}
