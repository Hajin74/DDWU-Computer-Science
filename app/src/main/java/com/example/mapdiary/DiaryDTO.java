package com.example.mapdiary;

import java.io.Serializable;

public class DiaryDTO implements Serializable {
    private long id;
    private String location;
    private String content;

    public long getId() {
        return id;
    }

    public void setId(long id) {
        this.id = id;
    }

    public String getLocation() {
        return location;
    }

    public void setLocation(String location) {
        this.location = location;
    }

    public String getContent() {
        return content;
    }

    public void setContent(String content) {
        this.content = content;
    }

    @Override
    public String toString() {
        return "DiaryDTO{" +
                "id=" + id +
                ", location='" + location + '\'' +
                ", content='" + content + '\'' +
                '}';
    }
}
