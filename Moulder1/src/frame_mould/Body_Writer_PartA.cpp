/*
 * Body_Writer_PartA.cpp
 *
 *  Created on: 2022年3月10日
 *      Author: majun
 */
#include <iostream>
#include <cstring>

using namespace std;

char * write_body_frameA() {
	char * result = NULL;
	result = (char *)malloc(2000 * sizeof(char));
	result[0] = '\0';

	strcat(result, "/*Part of frame*/\n");
	strcat(result, "    QDialog w;\n");
	strcat(result, "    w.resize(300, 200);\n");
	strcat(result, "    QLabel label(&w);\n");
	strcat(result, "    label.move(5,5);\n");
	strcat(result, "    label.setText(QString::fromUtf8(\"我是机器产生！\"));\n");
	strcat(result, "    QPushButton button1(QString::fromUtf8(\"请点击\"),&w);\n");
	strcat(result, "    button1.setGeometry(50,50,100,50);\n");
	//strcat(result, "    //QObject::connect(&button1,&QPushButton::clicked,&button1,&QPushButton::hide);\n");
	strcat(result, "    w.show();\n");

	return result;
}
