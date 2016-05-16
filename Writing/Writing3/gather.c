//This is the WriteFileGather function that is used for Scatter/Gather I/O
BOOL WINAPI WriteFileGather(
  _In_       HANDLE               hFile,
  _In_       FILE_SEGMENT_ELEMENT aSegmentArray[],
  _In_       DWORD                nNumberOfBytesToWrite,
  _Reserved_ LPDWORD              lpReserved,
  _Inout_    LPOVERLAPPED         lpOverlapped
);


