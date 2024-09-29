#include "stdafx.h"


String^ Insert(String^ str, int& n) {
	str = DelSpace(str);
	array <TCHAR>^ dlm = { ' ' };
	array <String^>^ words = str->Split(dlm);
	for (int i = 0; i < words->Length; i++) {
		if (words[i]->Length % 2 == 0) { 
			words[i] = words[i]->Insert(int(words[i]->Length / 2), "K");
			n++;
		}
	}
	String^ res = res->Join(" ", words);
	return res;
}

String^ DelSpace(String^ str) {
	str = str->Replace(",", " ");
	str = str->Replace(".", " ");
	str = str->Replace("-", " ");
	str = str->Trim();
	while (str->IndexOf("  ") >= 0) str = str->Replace("  ", " ");
	return str;
}

void fill(RichTextBox^ RB, String^ str)
{
	array <String^>^ words = str->Split();
	for (int i = 0; i < words->Length; i++) {
		if (words[i]->Length % 2 == 1 && words[i]->IndexOf("K") == int(words[i]->Length / 2))
		 {
			RB->SelectionStart = str->IndexOf(words[i]);
			RB->SelectionLength = words[i]->Length;
			RB->SelectionColor = System::Drawing::Color::White;

			RB->SelectionStart = str->IndexOf(words[i]) + words[i]->IndexOf("K");
			RB->SelectionLength = 1;
			RB->SelectionColor = System::Drawing::Color::Aqua;

		}
	}
}