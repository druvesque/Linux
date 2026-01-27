// INTRODUCTION
//
// - All applications running on your machine are called process (unique id)
//   # of processes on a 32-bit machine is 2^32
//   # of processes on a 64-bit machine is 2^64
//
// - Windows file is boot file (boot file is actually written in assembly language)
// - Linux file is kernel file (similarly, kernel is written in assembly language)
// - They are very small piece of code may be 1024 bytes or multiple of 1024 bytes.
// - 1024 bytes = 1kB size (so, it could be 2kB, 4kB and so on)
//
// - When you switch on your machine it is read through BIOS (Basic I/O System) and 
//   loaded into RAM.
//
// - OS manages different kinds of applications (that have different frequencies and 
//   it manages the entire process together)
//
// LINUX OS Architecture (top-down)
//
// - AUI (Application User Interface)
//   Applications: compilers, word processors, X-based GUI
//   LINUX Shell : csh / ksh / tcsh / bash / zsh etc.
//
// - API (Application Programming Interface)
//   Language Libraries, System Call Interface
//
// - Kernel
//   Memory Management, File Management, Process Management 
//   Device Drivers, BIOS
//
// - Computer Hardware
//
//
