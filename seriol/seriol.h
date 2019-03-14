#ifndef SERIOL_H
#define SERIOL_H

#include <QtWidgets/QMainWindow>
#include "ui_seriol.h"

#include <QMainWindow>
#include <QByteArray>
#include <QString>
#include <Win_QextSerialPort>
#include <QTimer>

class seriol : public QMainWindow
{
	Q_OBJECT

public:
	explicit seriol(QWidget *parent = 0);
	~seriol();

	static QByteArray QString2Hex(QString str);    //转换为16进制函数
	static char ConvertHexChar(char ch);

	private slots:
	void ReadMycom();  //读取串口中的数据
	void on_SendButton_clicked();
	void on_Close_clicked();
	void on_ClearReceive_clicked();
	void on_ClearSend_clicked();

private:
	Ui::seriolClass ui;

	Win_QextSerialPort *myCom;
	QTimer *timer;  //用于声明定时器

};

#endif // SERIOL_H
