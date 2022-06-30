package ddwu.mobile.finalreport.finalreport_02_20200988;

import java.io.Serializable;

public class Memo implements Serializable {

    long _id;
    String title;
    String content;
    String date;
    String img;

    public Memo(String title, String content, String date) {
        this.title = title;
        this.content = content;
        this.date = date;
    }

    public Memo(long _id, String title, String content, String date) {
        this._id = _id;
        this.title = title;
        this.content = content;
        this.date = date;
    }

    public Memo(String title, String content, String date, String img) {
        this.title = title;
        this.content = content;
        this.date = date;
        this.img = img;
    }

    public Memo(long _id, String title, String content, String date, String img) {
        this._id = _id;
        this.title = title;
        this.content = content;
        this.date = date;
        this.img = img;
    }

    public long get_id() {
        return _id;
    }

    public void set_id(long _id) {
        this._id = _id;
    }

    public String getTitle() {
        return title;
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public String getContent() {
        return content;
    }

    public void setContent(String content) {
        this.content = content;
    }

    public String getDate() {
        return date;
    }

    public void setDate(String date) {
        this.date = date;
    }

    public String getImg() {
        return img;
    }

    public void setImg(String img) {
        this.img = img;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append(_id);
        sb.append(".\t\t");
        sb.append(title);
        sb.append("\n");
        sb.append(content);
        sb.append("\n");
        sb.append(date);
        sb.append("\n");
        sb.append(img);

        return sb.toString();
    }

}
