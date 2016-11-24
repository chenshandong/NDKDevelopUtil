package com.chensd.ndkdeveloputil;

/**
 * Created by chensd on 2016/11/23.
 */
public class JniTest {

    static{
        System.loadLibrary("jnitest");
    }

    public native String test();
}
