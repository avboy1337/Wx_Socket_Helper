#pragma once
#include <Windows.h>
#define  DEFAULT_ACCESS_VALUE  (PROCESS_CREATE_THREAD | PROCESS_VM_OPERATION | PROCESS_VM_READ | PROCESS_VM_WRITE \
	| PROCESS_SUSPEND_RESUME | PROCESS_TERMINATE | PROCESS_SET_SESSIONID | PROCESS_DUP_HANDLE | PROCESS_CREATE_PROCESS \
	|  PROCESS_SET_QUOTA | PROCESS_SET_INFORMATION | PROCESS_QUERY_INFORMATION)

class CProcessOpt
{
public:
	CProcessOpt(DWORD dwProcessID,DWORD dwAccess=DEFAULT_ACCESS_VALUE);
	~CProcessOpt(void);
	HANDLE GetProcessHandle(){return m_hProcess;}
	HANDLE m_hProcess;
};
