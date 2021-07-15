#pragma once
#include "XData.h"
class AVCodecContext;
enum XSampleFMT {
	X_S16 = 1,
	X_FLATP = 8
};


//音视频编码接口类
class XMediaEncode
{
public:

	//输入参数
	int inWidth = 640;
	int inHeight = 480;
	int inPixSize = 3;//像素大小
	int channels = 2;
	int sampleRate = 44100;
	XSampleFMT inSampleFmt = X_S16;

	//输出参数
	int outWidth = 640;
	int outHeight = 480;
	int bitrate = 4000000;//压缩后每秒视频的bit位大小 50kB
	int fps = 25;
	XSampleFMT outSampleFmt = X_FLATP;
	int nbSamples = 1024;

	//工厂生产方法
	static XMediaEncode* Get(unsigned char index = 0);
	
	//初始化像素格式转换的上下文初始化
	virtual bool InitScale() = 0;//定义成纯虚函数，在子类中实现方法

	//音频重采样上下文初始化
	virtual bool InitResample() = 0;

	//返回值无需调用者清理
	virtual XData Resample(XData d) = 0;

	//返回值无需调用者清理
	virtual XData RGBToYUV(XData rgb) = 0;//设置纯虚函数

	//视频编码器初始化
	virtual bool InitVideoCodec() = 0;

	//音频编码器初始化
	virtual bool InitAudioCodec() = 0;

	//视频编码 返回值无需调用者清理
	virtual XData EncodeVideo(XData frame) = 0;

	//音频编码 返回值无需调用者清理
	virtual XData EncodeAudio(XData frame) = 0;
	virtual void Close() = 0;
	virtual ~XMediaEncode();

	AVCodecContext* vc = 0;	//视频编码器上下文
	AVCodecContext* ac = 0;//音频编码器上下文
protected:
	XMediaEncode();
};

