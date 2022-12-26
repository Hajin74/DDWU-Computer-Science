package com.example.mapdiary;

import java.io.Serializable;

public class Diary implements Serializable {
    private String location;
    private String content;

    public Diary(String location, String content) {
        this.location = location;
        this.content = content;
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
}
