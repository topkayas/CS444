// This is the ReadFileScatter function that is used for Scatter/Gather I/O
BOOL WINAPI ReadFileScatter(
  _In_       HANDLE               hFile,
  _In_       FILE_SEGMENT_ELEMENT aSegmentArray[],
  _In_       DWORD                nNumberOfBytesToRead,
  _Reserved_ LPDWORD              lpReserved,
  _Inout_    LPOVERLAPPED         lpOverlapped
);

