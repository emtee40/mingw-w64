/*** Autogenerated by WIDL 9.0-rc2 from include/wsdattachment.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __wsdattachment_h__
#define __wsdattachment_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IWSDAttachment_FWD_DEFINED__
#define __IWSDAttachment_FWD_DEFINED__
typedef interface IWSDAttachment IWSDAttachment;
#ifdef __cplusplus
interface IWSDAttachment;
#endif /* __cplusplus */
#endif

#ifndef __IWSDInboundAttachment_FWD_DEFINED__
#define __IWSDInboundAttachment_FWD_DEFINED__
typedef interface IWSDInboundAttachment IWSDInboundAttachment;
#ifdef __cplusplus
interface IWSDInboundAttachment;
#endif /* __cplusplus */
#endif

#ifndef __IWSDOutboundAttachment_FWD_DEFINED__
#define __IWSDOutboundAttachment_FWD_DEFINED__
typedef interface IWSDOutboundAttachment IWSDOutboundAttachment;
#ifdef __cplusplus
interface IWSDOutboundAttachment;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <objidl.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#ifndef _INC_WSDAPI
#error Please include wsdapi.h instead of this header. This header cannot be used directly.
#endif

#ifndef __IWSDAttachment_FWD_DEFINED__
#define __IWSDAttachment_FWD_DEFINED__
typedef interface IWSDAttachment IWSDAttachment;
#ifdef __cplusplus
interface IWSDAttachment;
#endif /* __cplusplus */
#endif

#ifndef __IWSDInboundAttachment_FWD_DEFINED__
#define __IWSDInboundAttachment_FWD_DEFINED__
typedef interface IWSDInboundAttachment IWSDInboundAttachment;
#ifdef __cplusplus
interface IWSDInboundAttachment;
#endif /* __cplusplus */
#endif

#ifndef __IWSDOutboundAttachment_FWD_DEFINED__
#define __IWSDOutboundAttachment_FWD_DEFINED__
typedef interface IWSDOutboundAttachment IWSDOutboundAttachment;
#ifdef __cplusplus
interface IWSDOutboundAttachment;
#endif /* __cplusplus */
#endif


/*****************************************************************************
 * IWSDAttachment interface
 */
#ifndef __IWSDAttachment_INTERFACE_DEFINED__
#define __IWSDAttachment_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWSDAttachment, 0x5d55a616, 0x9df8, 0x4b09, 0xb1,0x56, 0x9b,0xa3,0x51,0xa4,0x8b,0x76);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("5d55a616-9df8-4b09-b156-9ba351a48b76")
IWSDAttachment : public IUnknown
{
};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWSDAttachment, 0x5d55a616, 0x9df8, 0x4b09, 0xb1,0x56, 0x9b,0xa3,0x51,0xa4,0x8b,0x76)
#endif
#else
typedef struct IWSDAttachmentVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWSDAttachment *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWSDAttachment *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWSDAttachment *This);

    END_INTERFACE
} IWSDAttachmentVtbl;

interface IWSDAttachment {
    CONST_VTBL IWSDAttachmentVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWSDAttachment_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWSDAttachment_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWSDAttachment_Release(This) (This)->lpVtbl->Release(This)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IWSDAttachment_QueryInterface(IWSDAttachment* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IWSDAttachment_AddRef(IWSDAttachment* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IWSDAttachment_Release(IWSDAttachment* This) {
    return This->lpVtbl->Release(This);
}
#endif
#endif

#endif


#endif  /* __IWSDAttachment_INTERFACE_DEFINED__ */


/*****************************************************************************
 * IWSDInboundAttachment interface
 */
#ifndef __IWSDInboundAttachment_INTERFACE_DEFINED__
#define __IWSDInboundAttachment_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWSDInboundAttachment, 0x5bd6ca65, 0x233c, 0x4fb8, 0x9f,0x7a, 0x26,0x41,0x61,0x96,0x55,0xc9);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("5bd6ca65-233c-4fb8-9f7a-2641619655c9")
IWSDInboundAttachment : public IWSDAttachment
{
    virtual HRESULT STDMETHODCALLTYPE Read(
        BYTE *pBuffer,
        DWORD dwBytesToRead,
        LPDWORD pdwNumberOfBytesRead) = 0;

    virtual HRESULT STDMETHODCALLTYPE Close(
        ) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWSDInboundAttachment, 0x5bd6ca65, 0x233c, 0x4fb8, 0x9f,0x7a, 0x26,0x41,0x61,0x96,0x55,0xc9)
#endif
#else
typedef struct IWSDInboundAttachmentVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWSDInboundAttachment *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWSDInboundAttachment *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWSDInboundAttachment *This);

    /*** IWSDInboundAttachment methods ***/
    HRESULT (STDMETHODCALLTYPE *Read)(
        IWSDInboundAttachment *This,
        BYTE *pBuffer,
        DWORD dwBytesToRead,
        LPDWORD pdwNumberOfBytesRead);

    HRESULT (STDMETHODCALLTYPE *Close)(
        IWSDInboundAttachment *This);

    END_INTERFACE
} IWSDInboundAttachmentVtbl;

interface IWSDInboundAttachment {
    CONST_VTBL IWSDInboundAttachmentVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWSDInboundAttachment_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWSDInboundAttachment_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWSDInboundAttachment_Release(This) (This)->lpVtbl->Release(This)
/*** IWSDInboundAttachment methods ***/
#define IWSDInboundAttachment_Read(This,pBuffer,dwBytesToRead,pdwNumberOfBytesRead) (This)->lpVtbl->Read(This,pBuffer,dwBytesToRead,pdwNumberOfBytesRead)
#define IWSDInboundAttachment_Close(This) (This)->lpVtbl->Close(This)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IWSDInboundAttachment_QueryInterface(IWSDInboundAttachment* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IWSDInboundAttachment_AddRef(IWSDInboundAttachment* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IWSDInboundAttachment_Release(IWSDInboundAttachment* This) {
    return This->lpVtbl->Release(This);
}
/*** IWSDInboundAttachment methods ***/
static __WIDL_INLINE HRESULT IWSDInboundAttachment_Read(IWSDInboundAttachment* This,BYTE *pBuffer,DWORD dwBytesToRead,LPDWORD pdwNumberOfBytesRead) {
    return This->lpVtbl->Read(This,pBuffer,dwBytesToRead,pdwNumberOfBytesRead);
}
static __WIDL_INLINE HRESULT IWSDInboundAttachment_Close(IWSDInboundAttachment* This) {
    return This->lpVtbl->Close(This);
}
#endif
#endif

#endif


#endif  /* __IWSDInboundAttachment_INTERFACE_DEFINED__ */


/*****************************************************************************
 * IWSDOutboundAttachment interface
 */
#ifndef __IWSDOutboundAttachment_INTERFACE_DEFINED__
#define __IWSDOutboundAttachment_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWSDOutboundAttachment, 0xaa302f8d, 0x5a22, 0x4ba5, 0xb3,0x92, 0xaa,0x84,0x86,0xf4,0xc1,0x5d);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("aa302f8d-5a22-4ba5-b392-aa8486f4c15d")
IWSDOutboundAttachment : public IWSDAttachment
{
    virtual HRESULT STDMETHODCALLTYPE Write(
        const BYTE *pBuffer,
        DWORD dwBytesToWrite,
        LPDWORD pdwNumberOfBytesWritten) = 0;

    virtual HRESULT STDMETHODCALLTYPE Close(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Abort(
        ) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWSDOutboundAttachment, 0xaa302f8d, 0x5a22, 0x4ba5, 0xb3,0x92, 0xaa,0x84,0x86,0xf4,0xc1,0x5d)
#endif
#else
typedef struct IWSDOutboundAttachmentVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWSDOutboundAttachment *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWSDOutboundAttachment *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWSDOutboundAttachment *This);

    /*** IWSDOutboundAttachment methods ***/
    HRESULT (STDMETHODCALLTYPE *Write)(
        IWSDOutboundAttachment *This,
        const BYTE *pBuffer,
        DWORD dwBytesToWrite,
        LPDWORD pdwNumberOfBytesWritten);

    HRESULT (STDMETHODCALLTYPE *Close)(
        IWSDOutboundAttachment *This);

    HRESULT (STDMETHODCALLTYPE *Abort)(
        IWSDOutboundAttachment *This);

    END_INTERFACE
} IWSDOutboundAttachmentVtbl;

interface IWSDOutboundAttachment {
    CONST_VTBL IWSDOutboundAttachmentVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWSDOutboundAttachment_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWSDOutboundAttachment_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWSDOutboundAttachment_Release(This) (This)->lpVtbl->Release(This)
/*** IWSDOutboundAttachment methods ***/
#define IWSDOutboundAttachment_Write(This,pBuffer,dwBytesToWrite,pdwNumberOfBytesWritten) (This)->lpVtbl->Write(This,pBuffer,dwBytesToWrite,pdwNumberOfBytesWritten)
#define IWSDOutboundAttachment_Close(This) (This)->lpVtbl->Close(This)
#define IWSDOutboundAttachment_Abort(This) (This)->lpVtbl->Abort(This)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IWSDOutboundAttachment_QueryInterface(IWSDOutboundAttachment* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IWSDOutboundAttachment_AddRef(IWSDOutboundAttachment* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IWSDOutboundAttachment_Release(IWSDOutboundAttachment* This) {
    return This->lpVtbl->Release(This);
}
/*** IWSDOutboundAttachment methods ***/
static __WIDL_INLINE HRESULT IWSDOutboundAttachment_Write(IWSDOutboundAttachment* This,const BYTE *pBuffer,DWORD dwBytesToWrite,LPDWORD pdwNumberOfBytesWritten) {
    return This->lpVtbl->Write(This,pBuffer,dwBytesToWrite,pdwNumberOfBytesWritten);
}
static __WIDL_INLINE HRESULT IWSDOutboundAttachment_Close(IWSDOutboundAttachment* This) {
    return This->lpVtbl->Close(This);
}
static __WIDL_INLINE HRESULT IWSDOutboundAttachment_Abort(IWSDOutboundAttachment* This) {
    return This->lpVtbl->Abort(This);
}
#endif
#endif

#endif


#endif  /* __IWSDOutboundAttachment_INTERFACE_DEFINED__ */


HRESULT WINAPI WSDCreateOutboundAttachment(IWSDOutboundAttachment **ppAttachment);
#endif
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __wsdattachment_h__ */
