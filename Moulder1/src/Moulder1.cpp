//============================================================================
// Name        : Moulder1.cpp
// Author      : Martin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <codecvt>
#include <fstream>
#include <cstring>
#include "basic_mould\Head_Writer1.h"
#include "frame_mould\Body_Writer_PartA.h"

using namespace std;

int main() {
	char main_prog_name[30] = "main.cpp";
	char main_disk_name[10] = "d:\\";
	char main_fold_name[100] = "QtProjects\\sample1\\";
	char main_target_folder[300] = "";
	char main_target_folder_file[500] = "";
	char * head_content = write_normal_head();
	char * body_head_content = write_normal_body_head();
	char * body_content = write_body_frameA();
	char * body_tail_content = write_normal_body_tail();
	//const int UTF8_TXT_FLG = 0xbfbbef;
	//auto LocUtf8=locale(locale(""),new codecvt_utf8<wchar_t>);

	strcat(main_target_folder,main_disk_name);
	strcat(main_target_folder,main_fold_name);

	strcat(main_target_folder_file,main_target_folder);
	strcat(main_target_folder_file,main_prog_name);

	cout << "***Ready to generate QT application code:" << endl;
	cout << "Main program name is: " << main_prog_name << endl;
	cout << "Main target folder name is: " << main_target_folder << endl;

	//wofstream wfo(main_target_folder_file);
	//wfo.imbue(LocUtf8);
	//wfo << head_content << endl;
	//free(head_content);

	ofstream main_out_file;
	main_out_file.open(main_target_folder_file);

	main_out_file << head_content << endl;
	main_out_file << body_head_content << endl;
	main_out_file << body_content << endl;
	main_out_file << body_tail_content << endl;
	free(head_content);
	free(body_head_content);
	free(body_content);
	free(body_tail_content);

	main_out_file.close();
	//wfo.close();

	//cout << "Begin to generate code! " << endl;
	//write_normal_head();
	cout << "***End! " << endl;
	return 0;
}
