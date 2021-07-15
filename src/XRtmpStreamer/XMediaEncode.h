#pragma once
#include "XData.h"
class AVCodecContext;
enum XSampleFMT {
	X_S16 = 1,
	X_FLATP = 8
};


//����Ƶ����ӿ���
class XMediaEncode
{
public:

	//�������
	int inWidth = 640;
	int inHeight = 480;
	int inPixSize = 3;//���ش�С
	int channels = 2;
	int sampleRate = 44100;
	XSampleFMT inSampleFmt = X_S16;

	//�������
	int outWidth = 640;
	int outHeight = 480;
	int bitrate = 4000000;//ѹ����ÿ����Ƶ��bitλ��С 50kB
	int fps = 25;
	XSampleFMT outSampleFmt = X_FLATP;
	int nbSamples = 1024;

	//������������
	static XMediaEncode* Get(unsigned char index = 0);
	
	//��ʼ�����ظ�ʽת���������ĳ�ʼ��
	virtual bool InitScale() = 0;//����ɴ��麯������������ʵ�ַ���

	//��Ƶ�ز��������ĳ�ʼ��
	virtual bool InitResample() = 0;

	//����ֵ�������������
	virtual XData Resample(XData d) = 0;

	//����ֵ�������������
	virtual XData RGBToYUV(XData rgb) = 0;//���ô��麯��

	//��Ƶ��������ʼ��
	virtual bool InitVideoCodec() = 0;

	//��Ƶ��������ʼ��
	virtual bool InitAudioCodec() = 0;

	//��Ƶ���� ����ֵ�������������
	virtual XData EncodeVideo(XData frame) = 0;

	//��Ƶ���� ����ֵ�������������
	virtual XData EncodeAudio(XData frame) = 0;
	virtual void Close() = 0;
	virtual ~XMediaEncode();

	AVCodecContext* vc = 0;	//��Ƶ������������
	AVCodecContext* ac = 0;//��Ƶ������������
protected:
	XMediaEncode();
};

