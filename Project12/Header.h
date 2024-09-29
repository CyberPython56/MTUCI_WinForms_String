#pragma once
#include <tchar.h>
using namespace System;
using namespace System::Windows::Forms;

String^ Insert(String^ str, int& n);
String^ DelSpace(String^ str);
void fill(RichTextBox^ RB, String^ str);