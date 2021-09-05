#include <iostream>
#include <Windows.h>

int main()
{
	const char* m_pTestCommand = "echo \"Here is SendMessageA Test\"";

	const HWND m_hEngine = FindWindowA("Valve001", 0);
	COPYDATASTRUCT m_cData;
	m_cData.cbData = strlen(m_pTestCommand) + 1;
	m_cData.dwData = 0;
	m_cData.lpData = (void*)m_pTestCommand;
	SendMessageA(m_hEngine, WM_COPYDATA, 0, (LPARAM)&m_cData);
}
