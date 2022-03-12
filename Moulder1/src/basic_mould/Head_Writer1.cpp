#include <iostream>
#include <cstring>

using namespace std;

char * write_normal_head() {
	char * result = NULL;
	result = (char *)malloc(1000 * sizeof(char));
	result[0] = '\0';

	strcat(result, "/*Program of Moulder1*/\n");
	strcat(result, "#include<QApplication>\n");
	strcat(result, "#include<QLabel>\n");
	strcat(result, "#include<QDialog>\n");
	strcat(result, "#include<QPushButton>\n");

	return result;
}

char * write_normal_body_head() {
	char * result = NULL;
	result = (char *)malloc(1000 * sizeof(char));
	result[0] = '\0';

	strcat(result, "/*Begin of body*/\n");
	strcat(result, "int main(int argc,char *argv[]){\n");
	strcat(result, "    QApplication a(argc, argv);\n");

	return result;
}

char * write_normal_body_tail() {
	char * result = NULL;
	result = (char *)malloc(1000 * sizeof(char));
	result[0] = '\0';

	strcat(result, "/*End of body*/\n");
	strcat(result, "    return a.exec();\n");
	strcat(result, "}\n");

	return result;
}
