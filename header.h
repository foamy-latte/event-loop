// header.h
#ifndef EVENT_LOOP_HEADER_H
#define EVENT_LOOP_HEADER_H

// Default datatypes
#define EL_STDCALL __stdcall void
#define EL_TYPEDEF_PFNPROCDT(name) typedef EL_STDCALL (* name)(EL_PVOID arg)

// System-specific datatypes
#define EL_INTEGER unsigned long int
#define EL_PVOID void*
#define EL_MAINCALL EL_STDCALL

// Function typedefs macros
EL_TYPEDEF_PFNPROCDT(EL_STACKPUSH);
EL_TYPEDEF_PFNPROCDT(EL_STACKPOP);
EL_TYPEDEF_PFNPROCDT(EL_MALLOC);
EL_TYPEDEF_PFNPROCDT(EL_FREE);

#endif // #ifndef EVENT_LOOP_HEADER_H