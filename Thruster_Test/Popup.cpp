#include "Popup.h"

void DisplayBadPortChoice(void)
{
	System::Windows::Forms::DialogResult
		result = System::Windows::Forms::MessageBox::Show(L"Choose correct port or Port does not exist", L"No Port Has Been Chosen",
			System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Question);

}
void DisplayConnectionOpened(void)
{
	System::Windows::Forms::DialogResult
		result = System::Windows::Forms::MessageBox::Show(L"Port already open", L"No Port Has Been Chosen",
			System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Warning);

}
void DisplayNoConnection(void)
{
	System::Windows::Forms::DialogResult
		result = System::Windows::Forms::MessageBox::Show(L"Connect first to send a message", L"No Connection",
			System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
}
void DisplayConnectionLost(void)
{
	System::Windows::Forms::DialogResult
		result = System::Windows::Forms::MessageBox::Show(L"Connection has been lost. Check the cable, click connect again", L"Connection Lost",
			System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
}