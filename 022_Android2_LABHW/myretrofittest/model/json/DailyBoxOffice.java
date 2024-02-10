package ddwu.mobile.network.myretrofittest.model.json;

public class DailyBoxOffice {
    private String rank;
    private String movieNm;
    private String movieCd;
    private String openDt;

    public void setRank(String rank) {
        this.rank = rank;
    }

    public void setMovieNm(String movieNm) {
        this.movieNm = movieNm;
    }

    public void setMovieCd(String movieCd) {
        this.movieCd = movieCd;
    }

    public void setOpenDt(String openDt) {
        this.openDt = openDt;
    }

    @Override
    public String toString() {
        return "DailyBoxOffice{" +
                "rank='" + rank + '\'' +
                ", movieNm='" + movieNm + '\'' +
                ", movieCd='" + movieCd + '\'' +
                ", openDt='" + openDt + '\'' +
                '}';
    }
}
