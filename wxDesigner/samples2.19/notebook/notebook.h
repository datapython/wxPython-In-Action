/////////////////////////////////////////////////////////////////////////////
// Name:        notebook.h
// Author:      XX
// Created:     XX/XX/XX
// Copyright:   
/////////////////////////////////////////////////////////////////////////////

#ifndef __notebook_H__
#define __notebook_H__

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
    #pragma interface "notebook.h"
#endif

// Include wxWindows' headers

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

//----------------------------------------------------------------------------
//   constants
//----------------------------------------------------------------------------

#define ID_TEST     100

// WDR: class declarations

//----------------------------------------------------------------------------
// MyFrame
//----------------------------------------------------------------------------

class MyFrame: public wxFrame
{
public:
    // constructors and destructors
    MyFrame( wxWindow *parent, wxWindowID id, const wxString &title,
        const wxPoint& pos = wxDefaultPosition,
        const wxSize& size = wxDefaultSize,
        long style = wxDEFAULT_FRAME_STYLE );
    
private:
    // WDR: method declarations for MyFrame
    void CreateMyMenuBar();
    
private:
    // WDR: member variable declarations for MyFrame
    
private:
    // WDR: handler declarations for MyFrame
    void OnAbout( wxCommandEvent &event );
    void OnTest( wxCommandEvent &event );
    void OnQuit( wxCommandEvent &event );
    void OnCloseWindow( wxCloseEvent &event );
    
private:
    DECLARE_EVENT_TABLE()
};

//----------------------------------------------------------------------------
// MyApp
//----------------------------------------------------------------------------

class MyApp: public wxApp
{
public:
    MyApp();
    
    virtual bool OnInit();
    virtual int OnExit();
};

#endif
