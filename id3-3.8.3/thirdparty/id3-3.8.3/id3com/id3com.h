

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for id3com.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __id3com_h__
#define __id3com_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IID3ComField_FWD_DEFINED__
#define __IID3ComField_FWD_DEFINED__
typedef interface IID3ComField IID3ComField;

#endif 	/* __IID3ComField_FWD_DEFINED__ */


#ifndef __IID3ComFrame_FWD_DEFINED__
#define __IID3ComFrame_FWD_DEFINED__
typedef interface IID3ComFrame IID3ComFrame;

#endif 	/* __IID3ComFrame_FWD_DEFINED__ */


#ifndef __IID3ComTag_FWD_DEFINED__
#define __IID3ComTag_FWD_DEFINED__
typedef interface IID3ComTag IID3ComTag;

#endif 	/* __IID3ComTag_FWD_DEFINED__ */


#ifndef __ID3ComTag_FWD_DEFINED__
#define __ID3ComTag_FWD_DEFINED__

#ifdef __cplusplus
typedef class ID3ComTag ID3ComTag;
#else
typedef struct ID3ComTag ID3ComTag;
#endif /* __cplusplus */

#endif 	/* __ID3ComTag_FWD_DEFINED__ */


#ifndef __ID3ComFrame_FWD_DEFINED__
#define __ID3ComFrame_FWD_DEFINED__

#ifdef __cplusplus
typedef class ID3ComFrame ID3ComFrame;
#else
typedef struct ID3ComFrame ID3ComFrame;
#endif /* __cplusplus */

#endif 	/* __ID3ComFrame_FWD_DEFINED__ */


#ifndef __ID3ComField_FWD_DEFINED__
#define __ID3ComField_FWD_DEFINED__

#ifdef __cplusplus
typedef class ID3ComField ID3ComField;
#else
typedef struct ID3ComField ID3ComField;
#endif /* __cplusplus */

#endif 	/* __ID3ComField_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_id3com_0000_0000 */
/* [local] */ 

typedef /* [public][public][public][helpstring][uuid] */  DECLSPEC_UUID("181CFC77-C770-11d3-841C-0008C782A257") 
enum __MIDL___MIDL_itf_id3com_0000_0000_0001
    {
        ID3_FIELD_NOFIELD	= 0,
        ID3_FIELD_TEXTENC	= ( ID3_FIELD_NOFIELD + 1 ) ,
        ID3_FIELD_TEXT	= ( ID3_FIELD_TEXTENC + 1 ) ,
        ID3_FIELD_URL	= ( ID3_FIELD_TEXT + 1 ) ,
        ID3_FIELD_DATA	= ( ID3_FIELD_URL + 1 ) ,
        ID3_FIELD_DESCRIPTION	= ( ID3_FIELD_DATA + 1 ) ,
        ID3_FIELD_OWNER	= ( ID3_FIELD_DESCRIPTION + 1 ) ,
        ID3_FIELD_EMAIL	= ( ID3_FIELD_OWNER + 1 ) ,
        ID3_FIELD_RATING	= ( ID3_FIELD_EMAIL + 1 ) ,
        ID3_FIELD_FILENAME	= ( ID3_FIELD_RATING + 1 ) ,
        ID3_FIELD_LANGUAGE	= ( ID3_FIELD_FILENAME + 1 ) ,
        ID3_FIELD_PICTURETYPE	= ( ID3_FIELD_LANGUAGE + 1 ) ,
        ID3_FIELD_IMAGEFORMAT	= ( ID3_FIELD_PICTURETYPE + 1 ) ,
        ID3_FIELD_MIMETYPE	= ( ID3_FIELD_IMAGEFORMAT + 1 ) ,
        ID3_FIELD_COUNTER	= ( ID3_FIELD_MIMETYPE + 1 ) ,
        ID3_FIELD_ID	= ( ID3_FIELD_COUNTER + 1 ) ,
        ID3_FIELD_VOLUMEADJ	= ( ID3_FIELD_ID + 1 ) ,
        ID3_FIELD_NUMBITS	= ( ID3_FIELD_VOLUMEADJ + 1 ) ,
        ID3_FIELD_NUMBER	= ( ID3_FIELD_NUMBITS + 1 ) ,
        ID3_FIELD_VOLCHGRIGHT	= ( ID3_FIELD_NUMBER + 1 ) ,
        ID3_FIELD_VOLCHGLEFT	= ( ID3_FIELD_VOLCHGRIGHT + 1 ) ,
        ID3_FIELD_PEAKVOLRIGHT	= ( ID3_FIELD_VOLCHGLEFT + 1 ) ,
        ID3_FIELD_PEAKVOLLEFT	= ( ID3_FIELD_PEAKVOLRIGHT + 1 ) ,
        ID3_FIELD_TIMESTAMPFORMAT	= ( ID3_FIELD_PEAKVOLLEFT + 1 ) ,
        ID3_FIELD_CONTENTTYPE	= ( ID3_FIELD_TIMESTAMPFORMAT + 1 ) ,
        ID3_FIELD_REVERBL	= ( ID3_FIELD_CONTENTTYPE + 1 ) ,
        ID3_FIELD_REVERBR	= ( ID3_FIELD_REVERBL + 1 ) ,
        ID3_FIELD_REVERBBOUNCESL	= ( ID3_FIELD_REVERBR + 1 ) ,
        ID3_FIELD_REVERBBOUNCESR	= ( ID3_FIELD_REVERBBOUNCESL + 1 ) ,
        ID3_FIELD_REVERBFEEDBACKL2L	= ( ID3_FIELD_REVERBBOUNCESR + 1 ) ,
        ID3_FIELD_REVERBFEEDBACKL2R	= ( ID3_FIELD_REVERBFEEDBACKL2L + 1 ) ,
        ID3_FIELD_REVERBFEEDBACKR2R	= ( ID3_FIELD_REVERBFEEDBACKL2R + 1 ) ,
        ID3_FIELD_REVERBFEEDBACKR2L	= ( ID3_FIELD_REVERBFEEDBACKR2R + 1 ) ,
        ID3_FIELD_PREMIXL2R	= ( ID3_FIELD_REVERBFEEDBACKR2L + 1 ) ,
        ID3_FIELD_PREMIXR2L	= ( ID3_FIELD_PREMIXL2R + 1 ) ,
        ID3_FIELD_LENGTH	= ( ID3_FIELD_PREMIXR2L + 1 ) ,
        ID3_FIELD_FLAGS	= ( ID3_FIELD_LENGTH + 1 ) ,
        ID3_FIELD_OFFSET	= ( ID3_FIELD_FLAGS + 1 ) ,
        ID3_FIELD_PRICE	= ( ID3_FIELD_OFFSET + 1 ) ,
        ID3_FIELD_8DATE	= ( ID3_FIELD_PRICE + 1 ) ,
        ID3_FIELD_SELLER	= ( ID3_FIELD_8DATE + 1 ) ,
        ID3_FIELD_DELIVERY	= ( ID3_FIELD_SELLER + 1 ) ,
        ID3_FIELD_BITSSIZE	= ( ID3_FIELD_DELIVERY + 1 ) ,
        ID3_FIELD_BYTESSIZE	= ( ID3_FIELD_BITSSIZE + 1 ) ,
        ID3_FIELD_LASTFIELDID	= ( ID3_FIELD_BYTESSIZE + 1 ) 
    } 	eID3FieldTypes;

typedef /* [public][public][public][public][public][public][helpstring][uuid] */  DECLSPEC_UUID("385B5F8C-1F3C-11d3-83C6-0008C782A257") 
enum __MIDL___MIDL_itf_id3com_0000_0000_0002
    {
        ID3_NOFRAME	= 0,
        ID3_AUDIOCRYPTO	= ( ID3_NOFRAME + 1 ) ,
        ID3_PICTURE	= ( ID3_AUDIOCRYPTO + 1 ) ,
        ID3_AUDIOSEEKPOINT	= ( ID3_PICTURE + 1 ) ,
        ID3_COMMENT	= ( ID3_AUDIOSEEKPOINT + 1 ) ,
        ID3_COMMERCIAL	= ( ID3_COMMENT + 1 ) ,
        ID3_CRYPTOREG	= ( ID3_COMMERCIAL + 1 ) ,
        ID3_EQUALIZATION2	= ( ID3_CRYPTOREG + 1 ) ,
        ID3_EQUALIZATION	= ( ID3_EQUALIZATION2 + 1 ) ,
        ID3_EVENTTIMING	= ( ID3_EQUALIZATION + 1 ) ,
        ID3_GENERALOBJECT	= ( ID3_EVENTTIMING + 1 ) ,
        ID3_GROUPINGREG	= ( ID3_GENERALOBJECT + 1 ) ,
        ID3_INVOLVEDPEOPLE	= ( ID3_GROUPINGREG + 1 ) ,
        ID3_LINKEDINFO	= ( ID3_INVOLVEDPEOPLE + 1 ) ,
        ID3_CDID	= ( ID3_LINKEDINFO + 1 ) ,
        ID3_MPEGLOOKUP	= ( ID3_CDID + 1 ) ,
        ID3_OWNERSHIP	= ( ID3_MPEGLOOKUP + 1 ) ,
        ID3_PRIVATE	= ( ID3_OWNERSHIP + 1 ) ,
        ID3_PLAYCOUNTER	= ( ID3_PRIVATE + 1 ) ,
        ID3_POPULARIMETER	= ( ID3_PLAYCOUNTER + 1 ) ,
        ID3_POSITIONSYNC	= ( ID3_POPULARIMETER + 1 ) ,
        ID3_BUFFERSIZE	= ( ID3_POSITIONSYNC + 1 ) ,
        ID3_VOLUMEADJ2	= ( ID3_BUFFERSIZE + 1 ) ,
        ID3_VOLUMEADJ	= ( ID3_VOLUMEADJ2 + 1 ) ,
        ID3_REVERB	= ( ID3_VOLUMEADJ + 1 ) ,
        ID3_SEEKFRAME	= ( ID3_REVERB + 1 ) ,
        ID3_SIGNATURE	= ( ID3_SEEKFRAME + 1 ) ,
        ID3_SYNCEDLYRICS	= ( ID3_SIGNATURE + 1 ) ,
        ID3_SYNCEDTEMPO	= ( ID3_SYNCEDLYRICS + 1 ) ,
        ID3_ALBUM	= ( ID3_SYNCEDTEMPO + 1 ) ,
        ID3_BPM	= ( ID3_ALBUM + 1 ) ,
        ID3_COMPOSER	= ( ID3_BPM + 1 ) ,
        ID3_CONTENTTYPE	= ( ID3_COMPOSER + 1 ) ,
        ID3_COPYRIGHT	= ( ID3_CONTENTTYPE + 1 ) ,
        ID3_DATE	= ( ID3_COPYRIGHT + 1 ) ,
        ID3_ENCODINGTIME	= ( ID3_DATE + 1 ) ,
        ID3_PLAYLISTDELAY	= ( ID3_ENCODINGTIME + 1 ) ,
        ID3_ORIGRELEASETIME	= ( ID3_PLAYLISTDELAY + 1 ) ,
        ID3_RECORDINGTIME	= ( ID3_ORIGRELEASETIME + 1 ) ,
        ID3_RELEASETIME	= ( ID3_RECORDINGTIME + 1 ) ,
        ID3_TAGGINGTIME	= ( ID3_RELEASETIME + 1 ) ,
        ID3_INVOLVEDPEOPLE2	= ( ID3_TAGGINGTIME + 1 ) ,
        ID3_ENCODEDBY	= ( ID3_INVOLVEDPEOPLE2 + 1 ) ,
        ID3_LYRICIST	= ( ID3_ENCODEDBY + 1 ) ,
        ID3_FILETYPE	= ( ID3_LYRICIST + 1 ) ,
        ID3_TIME	= ( ID3_FILETYPE + 1 ) ,
        ID3_CONTENTGROUP	= ( ID3_TIME + 1 ) ,
        ID3_TITLE	= ( ID3_CONTENTGROUP + 1 ) ,
        ID3_SUBTITLE	= ( ID3_TITLE + 1 ) ,
        ID3_INITIALKEY	= ( ID3_SUBTITLE + 1 ) ,
        ID3_LANGUAGE	= ( ID3_INITIALKEY + 1 ) ,
        ID3_SONGLEN	= ( ID3_LANGUAGE + 1 ) ,
        ID3_MUSICIANCREDITLIST	= ( ID3_SONGLEN + 1 ) ,
        ID3_MEDIATYPE	= ( ID3_MUSICIANCREDITLIST + 1 ) ,
        ID3_MOOD	= ( ID3_MEDIATYPE + 1 ) ,
        ID3_ORIGALBUM	= ( ID3_MOOD + 1 ) ,
        ID3_ORIGFILENAME	= ( ID3_ORIGALBUM + 1 ) ,
        ID3_ORIGLYRICIST	= ( ID3_ORIGFILENAME + 1 ) ,
        ID3_ORIGARTIST	= ( ID3_ORIGLYRICIST + 1 ) ,
        ID3_ORIGYEAR	= ( ID3_ORIGARTIST + 1 ) ,
        ID3_FILEOWNER	= ( ID3_ORIGYEAR + 1 ) ,
        ID3_LEADARTIST	= ( ID3_FILEOWNER + 1 ) ,
        ID3_BAND	= ( ID3_LEADARTIST + 1 ) ,
        ID3_CONDUCTOR	= ( ID3_BAND + 1 ) ,
        ID3_MIXARTIST	= ( ID3_CONDUCTOR + 1 ) ,
        ID3_PARTINSET	= ( ID3_MIXARTIST + 1 ) ,
        ID3_PRODUCEDNOTICE	= ( ID3_PARTINSET + 1 ) ,
        ID3_PUBLISHER	= ( ID3_PRODUCEDNOTICE + 1 ) ,
        ID3_TRACKNUM	= ( ID3_PUBLISHER + 1 ) ,
        ID3_RECORDINGDATES	= ( ID3_TRACKNUM + 1 ) ,
        ID3_NETRADIOSTATION	= ( ID3_RECORDINGDATES + 1 ) ,
        ID3_NETRADIOOWNER	= ( ID3_NETRADIOSTATION + 1 ) ,
        ID3_SIZE	= ( ID3_NETRADIOOWNER + 1 ) ,
        ID3_ALBUMSORTORDER	= ( ID3_SIZE + 1 ) ,
        ID3_PERFORMERSORTORDER	= ( ID3_ALBUMSORTORDER + 1 ) ,
        ID3_TITLESORTORDER	= ( ID3_PERFORMERSORTORDER + 1 ) ,
        ID3_ISRC	= ( ID3_TITLESORTORDER + 1 ) ,
        ID3_ENCODERSETTINGS	= ( ID3_ISRC + 1 ) ,
        ID3_SETSUBTITLE	= ( ID3_ENCODERSETTINGS + 1 ) ,
        ID3_USERTEXT	= ( ID3_SETSUBTITLE + 1 ) ,
        ID3_YEAR	= ( ID3_USERTEXT + 1 ) ,
        ID3_UNIQUEFILEID	= ( ID3_YEAR + 1 ) ,
        ID3_TERMSOFUSE	= ( ID3_UNIQUEFILEID + 1 ) ,
        ID3_UNSYNCEDLYRICS	= ( ID3_TERMSOFUSE + 1 ) ,
        ID3_WWWCOMMERCIALINFO	= ( ID3_UNSYNCEDLYRICS + 1 ) ,
        ID3_WWWCOPYRIGHT	= ( ID3_WWWCOMMERCIALINFO + 1 ) ,
        ID3_WWWAUDIOFILE	= ( ID3_WWWCOPYRIGHT + 1 ) ,
        ID3_WWWARTIST	= ( ID3_WWWAUDIOFILE + 1 ) ,
        ID3_WWWAUDIOSOURCE	= ( ID3_WWWARTIST + 1 ) ,
        ID3_WWWRADIOPAGE	= ( ID3_WWWAUDIOSOURCE + 1 ) ,
        ID3_WWWPAYMENT	= ( ID3_WWWRADIOPAGE + 1 ) ,
        ID3_WWWPUBLISHER	= ( ID3_WWWPAYMENT + 1 ) ,
        ID3_WWWUSER	= ( ID3_WWWPUBLISHER + 1 ) ,
        ID3_METACRYPTO	= ( ID3_WWWUSER + 1 ) ,
        ID3_METACOMPRESSION	= ( ID3_METACRYPTO + 1 ) ,
        ID3_LASTFRAMEID	= ( ID3_METACOMPRESSION + 1 ) 
    } 	eID3FrameTypes;



extern RPC_IF_HANDLE __MIDL_itf_id3com_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_id3com_0000_0000_v0_0_s_ifspec;

#ifndef __IID3ComField_INTERFACE_DEFINED__
#define __IID3ComField_INTERFACE_DEFINED__

/* interface IID3ComField */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IID3ComField;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A513A24E-C749-11D3-841C-0008C782A257")
    IID3ComField : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Text( 
            /* [in] */ long ItemNum,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Text( 
            /* [in] */ long ItemNum,
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Long( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Long( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CopyDataToFile( 
            BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CopyDataFromFile( 
            BSTR FileName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumTextItems( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Binary( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Binary( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IID3ComFieldVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IID3ComField * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IID3ComField * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IID3ComField * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IID3ComField * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IID3ComField * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IID3ComField * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IID3ComField * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IID3ComField * This,
            /* [in] */ long ItemNum,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Text )( 
            IID3ComField * This,
            /* [in] */ long ItemNum,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Long )( 
            IID3ComField * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Long )( 
            IID3ComField * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IID3ComField * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CopyDataToFile )( 
            IID3ComField * This,
            BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CopyDataFromFile )( 
            IID3ComField * This,
            BSTR FileName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumTextItems )( 
            IID3ComField * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Binary )( 
            IID3ComField * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Binary )( 
            IID3ComField * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IID3ComFieldVtbl;

    interface IID3ComField
    {
        CONST_VTBL struct IID3ComFieldVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IID3ComField_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IID3ComField_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IID3ComField_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IID3ComField_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IID3ComField_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IID3ComField_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IID3ComField_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IID3ComField_get_Text(This,ItemNum,pVal)	\
    ( (This)->lpVtbl -> get_Text(This,ItemNum,pVal) ) 

#define IID3ComField_put_Text(This,ItemNum,newVal)	\
    ( (This)->lpVtbl -> put_Text(This,ItemNum,newVal) ) 

#define IID3ComField_get_Long(This,pVal)	\
    ( (This)->lpVtbl -> get_Long(This,pVal) ) 

#define IID3ComField_put_Long(This,newVal)	\
    ( (This)->lpVtbl -> put_Long(This,newVal) ) 

#define IID3ComField_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IID3ComField_CopyDataToFile(This,FileName)	\
    ( (This)->lpVtbl -> CopyDataToFile(This,FileName) ) 

#define IID3ComField_CopyDataFromFile(This,FileName)	\
    ( (This)->lpVtbl -> CopyDataFromFile(This,FileName) ) 

#define IID3ComField_get_NumTextItems(This,pVal)	\
    ( (This)->lpVtbl -> get_NumTextItems(This,pVal) ) 

#define IID3ComField_get_Binary(This,pVal)	\
    ( (This)->lpVtbl -> get_Binary(This,pVal) ) 

#define IID3ComField_put_Binary(This,newVal)	\
    ( (This)->lpVtbl -> put_Binary(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IID3ComField_INTERFACE_DEFINED__ */


#ifndef __IID3ComFrame_INTERFACE_DEFINED__
#define __IID3ComFrame_INTERFACE_DEFINED__

/* interface IID3ComFrame */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IID3ComFrame;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AEBA98BE-C36C-11D3-841B-0008C782A257")
    IID3ComFrame : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Field( 
            /* [in] */ eID3FieldTypes FieldType,
            /* [retval][out] */ IID3ComField **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ID( 
            /* [retval][out] */ eID3FrameTypes *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ID( 
            /* [in] */ eID3FrameTypes newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FrameName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Compressed( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Compressed( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IID3ComFrameVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IID3ComFrame * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IID3ComFrame * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IID3ComFrame * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IID3ComFrame * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IID3ComFrame * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IID3ComFrame * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IID3ComFrame * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Field )( 
            IID3ComFrame * This,
            /* [in] */ eID3FieldTypes FieldType,
            /* [retval][out] */ IID3ComField **pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IID3ComFrame * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IID3ComFrame * This,
            /* [retval][out] */ eID3FrameTypes *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ID )( 
            IID3ComFrame * This,
            /* [in] */ eID3FrameTypes newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrameName )( 
            IID3ComFrame * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Compressed )( 
            IID3ComFrame * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Compressed )( 
            IID3ComFrame * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        END_INTERFACE
    } IID3ComFrameVtbl;

    interface IID3ComFrame
    {
        CONST_VTBL struct IID3ComFrameVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IID3ComFrame_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IID3ComFrame_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IID3ComFrame_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IID3ComFrame_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IID3ComFrame_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IID3ComFrame_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IID3ComFrame_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IID3ComFrame_get_Field(This,FieldType,pVal)	\
    ( (This)->lpVtbl -> get_Field(This,FieldType,pVal) ) 

#define IID3ComFrame_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IID3ComFrame_get_ID(This,pVal)	\
    ( (This)->lpVtbl -> get_ID(This,pVal) ) 

#define IID3ComFrame_put_ID(This,newVal)	\
    ( (This)->lpVtbl -> put_ID(This,newVal) ) 

#define IID3ComFrame_get_FrameName(This,pVal)	\
    ( (This)->lpVtbl -> get_FrameName(This,pVal) ) 

#define IID3ComFrame_get_Compressed(This,pVal)	\
    ( (This)->lpVtbl -> get_Compressed(This,pVal) ) 

#define IID3ComFrame_put_Compressed(This,newVal)	\
    ( (This)->lpVtbl -> put_Compressed(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IID3ComFrame_INTERFACE_DEFINED__ */


#ifndef __IID3ComTag_INTERFACE_DEFINED__
#define __IID3ComTag_INTERFACE_DEFINED__

/* interface IID3ComTag */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IID3ComTag;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AEBA98BC-C36C-11D3-841B-0008C782A257")
    IID3ComTag : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Link( 
            BSTR *FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HasChanged( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindFrame( 
            /* [in] */ eID3FrameTypes FrameID,
            /* [defaultvalue][in] */ VARIANT_BOOL CreateNewIfNotFound,
            /* [retval][out] */ IID3ComFrame **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long FrameNum,
            /* [retval][out] */ IID3ComFrame **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveV1Tag( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StripV1Tag( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveV2Tag( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StripV2Tag( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Artist( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Artist( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Album( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Album( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Title( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Title( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Comment( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Comment( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Genre( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Genre( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Year( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Year( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Track( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Track( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastPlayed( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LastPlayed( 
            /* [in] */ DATE newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HasV1Tag( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HasV2Tag( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HasLyrics( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindFrameString( 
            /* [in] */ eID3FrameTypes FrameID,
            /* [in] */ eID3FieldTypes FieldType,
            /* [in] */ BSTR FindString,
            /* [defaultvalue][in] */ VARIANT_BOOL CreateNewIfNotFound,
            /* [retval][out] */ IID3ComFrame **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PlayCount( 
            /* [in] */ BSTR EMailAddress,
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PlayCount( 
            /* [in] */ BSTR EMailAddress,
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Popularity( 
            /* [in] */ BSTR EMailAddress,
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Popularity( 
            /* [in] */ BSTR EMailAddress,
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TagCreated( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TagCreated( 
            /* [in] */ DATE newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PercentVolumeAdjust( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PercentVolumeAdjust( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Padding( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UnSync( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VersionString( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveFrame( 
            /* [in] */ eID3FrameTypes FrameID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveFrameByNum( 
            /* [in] */ long FrameNum) = 0;
        
        virtual /* [restricted][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IID3ComTagVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IID3ComTag * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IID3ComTag * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IID3ComTag * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IID3ComTag * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IID3ComTag * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IID3ComTag * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IID3ComTag * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Link )( 
            IID3ComTag * This,
            BSTR *FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IID3ComTag * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasChanged )( 
            IID3ComTag * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindFrame )( 
            IID3ComTag * This,
            /* [in] */ eID3FrameTypes FrameID,
            /* [defaultvalue][in] */ VARIANT_BOOL CreateNewIfNotFound,
            /* [retval][out] */ IID3ComFrame **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IID3ComTag * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IID3ComTag * This,
            /* [in] */ long FrameNum,
            /* [retval][out] */ IID3ComFrame **pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveV1Tag )( 
            IID3ComTag * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StripV1Tag )( 
            IID3ComTag * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveV2Tag )( 
            IID3ComTag * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StripV2Tag )( 
            IID3ComTag * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Artist )( 
            IID3ComTag * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Artist )( 
            IID3ComTag * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Album )( 
            IID3ComTag * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Album )( 
            IID3ComTag * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            IID3ComTag * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Title )( 
            IID3ComTag * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Comment )( 
            IID3ComTag * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Comment )( 
            IID3ComTag * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Genre )( 
            IID3ComTag * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Genre )( 
            IID3ComTag * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Year )( 
            IID3ComTag * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Year )( 
            IID3ComTag * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Track )( 
            IID3ComTag * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Track )( 
            IID3ComTag * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastPlayed )( 
            IID3ComTag * This,
            /* [retval][out] */ DATE *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LastPlayed )( 
            IID3ComTag * This,
            /* [in] */ DATE newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasV1Tag )( 
            IID3ComTag * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasV2Tag )( 
            IID3ComTag * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasLyrics )( 
            IID3ComTag * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindFrameString )( 
            IID3ComTag * This,
            /* [in] */ eID3FrameTypes FrameID,
            /* [in] */ eID3FieldTypes FieldType,
            /* [in] */ BSTR FindString,
            /* [defaultvalue][in] */ VARIANT_BOOL CreateNewIfNotFound,
            /* [retval][out] */ IID3ComFrame **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PlayCount )( 
            IID3ComTag * This,
            /* [in] */ BSTR EMailAddress,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PlayCount )( 
            IID3ComTag * This,
            /* [in] */ BSTR EMailAddress,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Popularity )( 
            IID3ComTag * This,
            /* [in] */ BSTR EMailAddress,
            /* [retval][out] */ short *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Popularity )( 
            IID3ComTag * This,
            /* [in] */ BSTR EMailAddress,
            /* [in] */ short newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TagCreated )( 
            IID3ComTag * This,
            /* [retval][out] */ DATE *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TagCreated )( 
            IID3ComTag * This,
            /* [in] */ DATE newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PercentVolumeAdjust )( 
            IID3ComTag * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PercentVolumeAdjust )( 
            IID3ComTag * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Padding )( 
            IID3ComTag * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UnSync )( 
            IID3ComTag * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VersionString )( 
            IID3ComTag * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveFrame )( 
            IID3ComTag * This,
            /* [in] */ eID3FrameTypes FrameID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveFrameByNum )( 
            IID3ComTag * This,
            /* [in] */ long FrameNum);
        
        /* [restricted][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IID3ComTag * This,
            /* [retval][out] */ IUnknown **pRetVal);
        
        END_INTERFACE
    } IID3ComTagVtbl;

    interface IID3ComTag
    {
        CONST_VTBL struct IID3ComTagVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IID3ComTag_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IID3ComTag_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IID3ComTag_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IID3ComTag_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IID3ComTag_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IID3ComTag_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IID3ComTag_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IID3ComTag_Link(This,FileName)	\
    ( (This)->lpVtbl -> Link(This,FileName) ) 

#define IID3ComTag_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IID3ComTag_get_HasChanged(This,pVal)	\
    ( (This)->lpVtbl -> get_HasChanged(This,pVal) ) 

#define IID3ComTag_FindFrame(This,FrameID,CreateNewIfNotFound,pVal)	\
    ( (This)->lpVtbl -> FindFrame(This,FrameID,CreateNewIfNotFound,pVal) ) 

#define IID3ComTag_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IID3ComTag_get_Item(This,FrameNum,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,FrameNum,pVal) ) 

#define IID3ComTag_SaveV1Tag(This)	\
    ( (This)->lpVtbl -> SaveV1Tag(This) ) 

#define IID3ComTag_StripV1Tag(This)	\
    ( (This)->lpVtbl -> StripV1Tag(This) ) 

#define IID3ComTag_SaveV2Tag(This)	\
    ( (This)->lpVtbl -> SaveV2Tag(This) ) 

#define IID3ComTag_StripV2Tag(This)	\
    ( (This)->lpVtbl -> StripV2Tag(This) ) 

#define IID3ComTag_get_Artist(This,pVal)	\
    ( (This)->lpVtbl -> get_Artist(This,pVal) ) 

#define IID3ComTag_put_Artist(This,newVal)	\
    ( (This)->lpVtbl -> put_Artist(This,newVal) ) 

#define IID3ComTag_get_Album(This,pVal)	\
    ( (This)->lpVtbl -> get_Album(This,pVal) ) 

#define IID3ComTag_put_Album(This,newVal)	\
    ( (This)->lpVtbl -> put_Album(This,newVal) ) 

#define IID3ComTag_get_Title(This,pVal)	\
    ( (This)->lpVtbl -> get_Title(This,pVal) ) 

#define IID3ComTag_put_Title(This,newVal)	\
    ( (This)->lpVtbl -> put_Title(This,newVal) ) 

#define IID3ComTag_get_Comment(This,pVal)	\
    ( (This)->lpVtbl -> get_Comment(This,pVal) ) 

#define IID3ComTag_put_Comment(This,newVal)	\
    ( (This)->lpVtbl -> put_Comment(This,newVal) ) 

#define IID3ComTag_get_Genre(This,pVal)	\
    ( (This)->lpVtbl -> get_Genre(This,pVal) ) 

#define IID3ComTag_put_Genre(This,newVal)	\
    ( (This)->lpVtbl -> put_Genre(This,newVal) ) 

#define IID3ComTag_get_Year(This,pVal)	\
    ( (This)->lpVtbl -> get_Year(This,pVal) ) 

#define IID3ComTag_put_Year(This,newVal)	\
    ( (This)->lpVtbl -> put_Year(This,newVal) ) 

#define IID3ComTag_get_Track(This,pVal)	\
    ( (This)->lpVtbl -> get_Track(This,pVal) ) 

#define IID3ComTag_put_Track(This,newVal)	\
    ( (This)->lpVtbl -> put_Track(This,newVal) ) 

#define IID3ComTag_get_LastPlayed(This,pVal)	\
    ( (This)->lpVtbl -> get_LastPlayed(This,pVal) ) 

#define IID3ComTag_put_LastPlayed(This,newVal)	\
    ( (This)->lpVtbl -> put_LastPlayed(This,newVal) ) 

#define IID3ComTag_get_HasV1Tag(This,pVal)	\
    ( (This)->lpVtbl -> get_HasV1Tag(This,pVal) ) 

#define IID3ComTag_get_HasV2Tag(This,pVal)	\
    ( (This)->lpVtbl -> get_HasV2Tag(This,pVal) ) 

#define IID3ComTag_get_HasLyrics(This,pVal)	\
    ( (This)->lpVtbl -> get_HasLyrics(This,pVal) ) 

#define IID3ComTag_FindFrameString(This,FrameID,FieldType,FindString,CreateNewIfNotFound,pVal)	\
    ( (This)->lpVtbl -> FindFrameString(This,FrameID,FieldType,FindString,CreateNewIfNotFound,pVal) ) 

#define IID3ComTag_get_PlayCount(This,EMailAddress,pVal)	\
    ( (This)->lpVtbl -> get_PlayCount(This,EMailAddress,pVal) ) 

#define IID3ComTag_put_PlayCount(This,EMailAddress,newVal)	\
    ( (This)->lpVtbl -> put_PlayCount(This,EMailAddress,newVal) ) 

#define IID3ComTag_get_Popularity(This,EMailAddress,pVal)	\
    ( (This)->lpVtbl -> get_Popularity(This,EMailAddress,pVal) ) 

#define IID3ComTag_put_Popularity(This,EMailAddress,newVal)	\
    ( (This)->lpVtbl -> put_Popularity(This,EMailAddress,newVal) ) 

#define IID3ComTag_get_TagCreated(This,pVal)	\
    ( (This)->lpVtbl -> get_TagCreated(This,pVal) ) 

#define IID3ComTag_put_TagCreated(This,newVal)	\
    ( (This)->lpVtbl -> put_TagCreated(This,newVal) ) 

#define IID3ComTag_get_PercentVolumeAdjust(This,pVal)	\
    ( (This)->lpVtbl -> get_PercentVolumeAdjust(This,pVal) ) 

#define IID3ComTag_put_PercentVolumeAdjust(This,newVal)	\
    ( (This)->lpVtbl -> put_PercentVolumeAdjust(This,newVal) ) 

#define IID3ComTag_put_Padding(This,newVal)	\
    ( (This)->lpVtbl -> put_Padding(This,newVal) ) 

#define IID3ComTag_put_UnSync(This,newVal)	\
    ( (This)->lpVtbl -> put_UnSync(This,newVal) ) 

#define IID3ComTag_get_VersionString(This,pVal)	\
    ( (This)->lpVtbl -> get_VersionString(This,pVal) ) 

#define IID3ComTag_RemoveFrame(This,FrameID)	\
    ( (This)->lpVtbl -> RemoveFrame(This,FrameID) ) 

#define IID3ComTag_RemoveFrameByNum(This,FrameNum)	\
    ( (This)->lpVtbl -> RemoveFrameByNum(This,FrameNum) ) 

#define IID3ComTag_get__NewEnum(This,pRetVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IID3ComTag_INTERFACE_DEFINED__ */



#ifndef __ID3COM_LIBRARY_DEFINED__
#define __ID3COM_LIBRARY_DEFINED__

/* library ID3COM */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ID3COM;

EXTERN_C const CLSID CLSID_ID3ComTag;

#ifdef __cplusplus

class DECLSPEC_UUID("AEBA98BD-C36C-11D3-841B-0008C782A257")
ID3ComTag;
#endif

EXTERN_C const CLSID CLSID_ID3ComFrame;

#ifdef __cplusplus

class DECLSPEC_UUID("AEBA98BF-C36C-11D3-841B-0008C782A257")
ID3ComFrame;
#endif

EXTERN_C const CLSID CLSID_ID3ComField;

#ifdef __cplusplus

class DECLSPEC_UUID("A513A24F-C749-11D3-841C-0008C782A257")
ID3ComField;
#endif
#endif /* __ID3COM_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


