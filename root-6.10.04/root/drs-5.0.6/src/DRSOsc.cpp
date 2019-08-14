///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 27 2012)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "DRSOsc.h"

#include "down.xpm"
#include "drsosc.xpm"
#include "left.xpm"
#include "pos.xpm"
#include "right.xpm"
#include "up.xpm"

///////////////////////////////////////////////////////////////////////////

DOFrame_fb::DOFrame_fb( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	m_menubar1 = new wxMenuBar( 0 );
	m_menu1 = new wxMenu();
	wxMenuItem* m_menuSave;
	m_menuSave = new wxMenuItem( m_menu1, wxID_ANY, wxString( wxT("&Save...") ) + wxT('\t') + wxT("Ctrl+S"), wxEmptyString, wxITEM_NORMAL );
	m_menu1->Append( m_menuSave );
	
	wxMenuItem* m_menuPrint;
	m_menuPrint = new wxMenuItem( m_menu1, wxID_ANY, wxString( wxT("&Print") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu1->Append( m_menuPrint );
	
	m_menu1->AppendSeparator();
	
	wxMenuItem* m_menuExit;
	m_menuExit = new wxMenuItem( m_menu1, wxID_ANY, wxString( wxT("E&xit") ) + wxT('\t') + wxT("Ctrl+X"), wxEmptyString, wxITEM_NORMAL );
	m_menu1->Append( m_menuExit );
	
	m_menubar1->Append( m_menu1, wxT("&File") ); 
	
	m_menu4 = new wxMenu();
	wxMenuItem* m_menuCursorA;
	m_menuCursorA = new wxMenuItem( m_menu4, ID_CURSORA, wxString( wxT("Cursor A") ) + wxT('\t') + wxT("Ctrl+A"), wxEmptyString, wxITEM_NORMAL );
	m_menu4->Append( m_menuCursorA );
	
	wxMenuItem* m_menuCursorB;
	m_menuCursorB = new wxMenuItem( m_menu4, ID_CURSORB, wxString( wxT("Cursor B") ) + wxT('\t') + wxT("Ctrl+B"), wxEmptyString, wxITEM_NORMAL );
	m_menu4->Append( m_menuCursorB );
	
	wxMenuItem* m_menuItem13;
	m_menuItem13 = new wxMenuItem( m_menu4, wxID_ANY, wxString( wxT("Snap Cursor") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu4->Append( m_menuItem13 );
	
	m_menubar1->Append( m_menu4, wxT("C&ursor") ); 
	
	m_menu3 = new wxMenu();
	wxMenuItem* m_menuConfig;
	m_menuConfig = new wxMenuItem( m_menu3, wxID_ANY, wxString( wxT("Config...") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu3->Append( m_menuConfig );
	
	wxMenuItem* m_menuMeasure;
	m_menuMeasure = new wxMenuItem( m_menu3, wxID_ANY, wxString( wxT("Measure...") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu3->Append( m_menuMeasure );
	
	wxMenuItem* m_menuDisplay;
	m_menuDisplay = new wxMenuItem( m_menu3, wxID_ANY, wxString( wxT("Display...") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu3->Append( m_menuDisplay );
	
	m_menubar1->Append( m_menu3, wxT("&Tools") ); 
	
	m_menu2 = new wxMenu();
	wxMenuItem* m_menuAbout;
	m_menuAbout = new wxMenuItem( m_menu2, wxID_ANY, wxString( wxT("About...") ) + wxT('\t') + wxT("F1"), wxEmptyString, wxITEM_NORMAL );
	m_menu2->Append( m_menuAbout );
	
	m_menubar1->Append( m_menu2, wxT("&Help") ); 
	
	this->SetMenuBar( m_menubar1 );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxHORIZONTAL );
	
	m_pnScreen = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER );
	bSizer1->Add( m_pnScreen, 1, wxEXPAND, 5 );
	
	m_pnControls = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
	m_pnControls->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer1;
	sbSizer1 = new wxStaticBoxSizer( new wxStaticBox( m_pnControls, wxID_ANY, wxT("Trigger") ), wxVERTICAL );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );
	
	m_slTrgLevel = new wxSlider( m_pnControls, ID_TR_LEVEL, -250, -500, 500, wxDefaultPosition, wxSize( 20,120 ), wxSL_VERTICAL|wxSTATIC_BORDER );
	m_slTrgLevel->SetToolTip( wxT("Set Trigger Level") );
	
	bSizer4->Add( m_slTrgLevel, 0, 0, 5 );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer32;
	bSizer32 = new wxBoxSizer( wxHORIZONTAL );
	
	m_btRun = new wxButton( m_pnControls, ID_RUN, wxT("Stop"), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_btRun->SetToolTip( wxT("Start/Stop Acquisition") );
	
	bSizer32->Add( m_btRun, 1, wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_btSingle = new wxButton( m_pnControls, ID_SINGLE, wxT("Single"), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_btSingle->SetToolTip( wxT("Arm for Single Trigger") );
	
	bSizer32->Add( m_btSingle, 1, wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer5->Add( bSizer32, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer18;
	sbSizer18 = new wxStaticBoxSizer( new wxStaticBox( m_pnControls, wxID_ANY, wxT("Type") ), wxHORIZONTAL );
	
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );
	
	m_rbNormal = new wxRadioButton( m_pnControls, ID_TR_NORMAL, wxT("Normal"), wxDefaultPosition, wxDefaultSize, wxRB_GROUP );
	m_rbNormal->SetValue( true ); 
	m_rbNormal->SetToolTip( wxT("Set Normal Trigger Mode") );
	
	bSizer7->Add( m_rbNormal, 0, 0, 5 );
	
	m_rbAuto = new wxRadioButton( m_pnControls, ID_TR_AUTO, wxT("Auto"), wxDefaultPosition, wxDefaultSize, 0 );
	m_rbAuto->SetToolTip( wxT("Set Auto Trigger Mode") );
	
	bSizer7->Add( m_rbAuto, 0, 0, 5 );
	
	
	sbSizer18->Add( bSizer7, 0, 0, 5 );
	
	m_bpPolarity = new wxBitmapButton( m_pnControls, ID_TR_POLARITY, wxBitmap( pos_xpm ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	m_bpPolarity->SetToolTip( wxT("Set Trigger Polarity") );
	
	sbSizer18->Add( m_bpPolarity, 0, wxALIGN_CENTER|wxRIGHT|wxLEFT, 2 );
	
	m_btTrgCfg = new wxButton( m_pnControls, ID_TRGCFG, wxT("CFG"), wxDefaultPosition, wxSize( 45,-1 ), 0 );
	m_btTrgCfg->SetToolTip( wxT("Show advanced trigger configuration") );
	
	sbSizer18->Add( m_btTrgCfg, 1, wxALIGN_CENTER, 5 );
	
	
	bSizer5->Add( sbSizer18, 0, 0, 5 );
	
	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText59 = new wxStaticText( m_pnControls, wxID_ANY, wxT("Max"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText59->Wrap( -1 );
	bSizer31->Add( m_staticText59, 0, wxRIGHT|wxLEFT|wxALIGN_BOTTOM, 5 );
	
	m_staticText60 = new wxStaticText( m_pnControls, wxID_ANY, wxT("Delay"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticText60->Wrap( -1 );
	bSizer31->Add( m_staticText60, 1, wxRIGHT|wxLEFT|wxALIGN_BOTTOM, 5 );
	
	m_staticText61 = new wxStaticText( m_pnControls, wxID_ANY, wxT("Min"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText61->Wrap( -1 );
	bSizer31->Add( m_staticText61, 0, wxALIGN_BOTTOM|wxRIGHT|wxLEFT, 5 );
	
	
	bSizer5->Add( bSizer31, 0, wxEXPAND, 5 );
	
	m_slTrgDelay = new wxSlider( m_pnControls, ID_TR_DELAY, 100, 0, 100, wxDefaultPosition, wxSize( -1,20 ), wxSL_HORIZONTAL|wxSTATIC_BORDER );
	m_slTrgDelay->SetToolTip( wxT("Set Trigger Delay") );
	
	bSizer5->Add( m_slTrgDelay, 0, wxEXPAND, 5 );
	
	
	bSizer4->Add( bSizer5, 1, wxEXPAND, 5 );
	
	
	sbSizer1->Add( bSizer4, 1, wxEXPAND, 2 );
	
	wxString m_rbSourceChoices[] = { wxT("1"), wxT("2"), wxT("3"), wxT("4"), wxT("E") };
	int m_rbSourceNChoices = sizeof( m_rbSourceChoices ) / sizeof( wxString );
	m_rbSource = new wxRadioBox( m_pnControls, ID_TR_SOURCE, wxEmptyString, wxDefaultPosition, wxDefaultSize, m_rbSourceNChoices, m_rbSourceChoices, 1, wxRA_SPECIFY_ROWS );
	m_rbSource->SetSelection( 1 );
	m_rbSource->SetToolTip( wxT("Select channel to trigger on (E for external)") );
	
	sbSizer1->Add( m_rbSource, 0, wxALIGN_CENTER, 0 );
	
	
	bSizer2->Add( sbSizer1, 0, 0, 5 );
	
	wxStaticBoxSizer* sbSizer2;
	sbSizer2 = new wxStaticBoxSizer( new wxStaticBox( m_pnControls, wxID_ANY, wxT("Horizontal") ), wxVERTICAL );
	
	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxHORIZONTAL );
	
	m_bpButton2 = new wxBitmapButton( m_pnControls, ID_HSCALEDOWN, wxBitmap( left_xpm ), wxDefaultPosition, wxSize( -1,32 ), wxBU_AUTODRAW );
	bSizer20->Add( m_bpButton2, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 10 );
	
	m_stHScale = new wxStaticText( m_pnControls, wxID_ANY, wxT("ns/div"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE|wxST_NO_AUTORESIZE );
	m_stHScale->Wrap( -1 );
	m_stHScale->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 75, 90, 90, false, wxEmptyString ) );
	
	bSizer20->Add( m_stHScale, 1, wxALIGN_CENTER_VERTICAL, 5 );
	
	m_bpButton3 = new wxBitmapButton( m_pnControls, ID_HSCALEUP, wxBitmap( right_xpm ), wxDefaultPosition, wxSize( -1,32 ), wxBU_AUTODRAW );
	bSizer20->Add( m_bpButton3, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 10 );
	
	
	sbSizer2->Add( bSizer20, 0, wxEXPAND, 5 );
	
	m_slHOffset = new wxSlider( m_pnControls, ID_HOR_POS, 0, -1000, 1000, wxDefaultPosition, wxSize( -1,20 ), wxSL_HORIZONTAL|wxSTATIC_BORDER );
	m_slHOffset->SetToolTip( wxT("Set Horizontal Position") );
	
	sbSizer2->Add( m_slHOffset, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 3 );
	
	
	bSizer2->Add( sbSizer2, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer3;
	sbSizer3 = new wxStaticBoxSizer( new wxStaticBox( m_pnControls, wxID_ANY, wxT("Vertical") ), wxHORIZONTAL );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );
	
	m_btCh1 = new wxToggleButton( m_pnControls, ID_CHON1, wxT("1"), wxDefaultPosition, wxSize( 30,27 ), 0 );
	m_btCh1->SetValue( true ); 
	m_btCh1->SetFont( wxFont( 12, 74, 90, 92, false, wxEmptyString ) );
	m_btCh1->SetToolTip( wxT("Enable Channel 1") );
	
	bSizer9->Add( m_btCh1, 0, wxALIGN_CENTER, 5 );
	
	m_slPos1 = new wxSlider( m_pnControls, ID_POS1, 0, -250, 250, wxDefaultPosition, wxSize( -1,70 ), wxSL_VERTICAL|wxSTATIC_BORDER );
	m_slPos1->SetBackgroundColour( wxColour( 255, 255, 0 ) );
	m_slPos1->SetToolTip( wxT("Move Channel 1 Vertical Position") );
	m_slPos1->SetMinSize( wxSize( -1,70 ) );
	m_slPos1->SetMaxSize( wxSize( -1,70 ) );
	
	bSizer9->Add( m_slPos1, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_bpButton4 = new wxBitmapButton( m_pnControls, ID_SCALEUP1, wxBitmap( up_xpm ), wxDefaultPosition, wxSize( -1,22 ), wxBU_AUTODRAW );
	bSizer9->Add( m_bpButton4, 0, wxALIGN_CENTER_HORIZONTAL, 0 );
	
	m_stScale1 = new wxStaticText( m_pnControls, wxID_ANY, wxT("500mV"), wxDefaultPosition, wxSize( -1,-1 ), wxALIGN_CENTRE|wxST_NO_AUTORESIZE );
	m_stScale1->Wrap( -1 );
	m_stScale1->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 75, 90, 90, false, wxEmptyString ) );
	
	bSizer9->Add( m_stScale1, 0, wxALIGN_CENTER|wxALIGN_CENTER_HORIZONTAL, 0 );
	
	m_bpButton5 = new wxBitmapButton( m_pnControls, ID_SCALEDN1, wxBitmap( down_xpm ), wxDefaultPosition, wxSize( -1,22 ), wxBU_AUTODRAW );
	bSizer9->Add( m_bpButton5, 0, wxALIGN_CENTER_HORIZONTAL, 0 );
	
	
	sbSizer3->Add( bSizer9, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	m_btCh2 = new wxToggleButton( m_pnControls, ID_CHON2, wxT("2"), wxDefaultPosition, wxSize( 30,27 ), 0 );
	m_btCh2->SetValue( true ); 
	m_btCh2->SetFont( wxFont( 12, 74, 90, 92, false, wxEmptyString ) );
	m_btCh2->SetToolTip( wxT("Enable Channel 2") );
	
	bSizer10->Add( m_btCh2, 0, wxALIGN_CENTER, 5 );
	
	m_slPos2 = new wxSlider( m_pnControls, ID_POS2, 0, -250, 250, wxDefaultPosition, wxSize( -1,70 ), wxSL_VERTICAL|wxSTATIC_BORDER );
	m_slPos2->SetBackgroundColour( wxColour( 170, 170, 255 ) );
	m_slPos2->SetToolTip( wxT("Move Channel 2 Vertical Position") );
	m_slPos2->SetMinSize( wxSize( -1,70 ) );
	m_slPos2->SetMaxSize( wxSize( -1,70 ) );
	
	bSizer10->Add( m_slPos2, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_bpButton6 = new wxBitmapButton( m_pnControls, ID_SCALEUP2, wxBitmap( up_xpm ), wxDefaultPosition, wxSize( -1,22 ), wxBU_AUTODRAW );
	bSizer10->Add( m_bpButton6, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_stScale2 = new wxStaticText( m_pnControls, wxID_ANY, wxT("500mV"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE|wxST_NO_AUTORESIZE );
	m_stScale2->Wrap( -1 );
	m_stScale2->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 75, 90, 90, false, wxEmptyString ) );
	
	bSizer10->Add( m_stScale2, 0, wxALIGN_CENTER|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_bpButton7 = new wxBitmapButton( m_pnControls, ID_SCALEDN2, wxBitmap( down_xpm ), wxDefaultPosition, wxSize( -1,22 ), wxBU_AUTODRAW );
	bSizer10->Add( m_bpButton7, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	sbSizer3->Add( bSizer10, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );
	
	m_btCh3 = new wxToggleButton( m_pnControls, ID_CHON3, wxT("3"), wxDefaultPosition, wxSize( 30,27 ), 0 );
	m_btCh3->SetFont( wxFont( 12, 74, 90, 92, false, wxEmptyString ) );
	m_btCh3->SetToolTip( wxT("Enable Channel 3") );
	
	bSizer11->Add( m_btCh3, 0, wxALIGN_CENTER, 5 );
	
	m_slPos3 = new wxSlider( m_pnControls, ID_POS3, 0, -250, 250, wxDefaultPosition, wxSize( -1,70 ), wxSL_VERTICAL|wxSTATIC_BORDER );
	m_slPos3->SetBackgroundColour( wxColour( 255, 170, 170 ) );
	m_slPos3->SetToolTip( wxT("Move Channel 3 Vertical Position") );
	m_slPos3->SetMinSize( wxSize( -1,70 ) );
	m_slPos3->SetMaxSize( wxSize( -1,70 ) );
	
	bSizer11->Add( m_slPos3, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_bpButton8 = new wxBitmapButton( m_pnControls, ID_SCALEUP3, wxBitmap( up_xpm ), wxDefaultPosition, wxSize( -1,22 ), wxBU_AUTODRAW );
	bSizer11->Add( m_bpButton8, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_stScale3 = new wxStaticText( m_pnControls, wxID_ANY, wxT("500mV"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE|wxST_NO_AUTORESIZE );
	m_stScale3->Wrap( -1 );
	m_stScale3->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 75, 90, 90, false, wxEmptyString ) );
	
	bSizer11->Add( m_stScale3, 0, wxALIGN_CENTER|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_bpButton9 = new wxBitmapButton( m_pnControls, ID_SCALEDN3, wxBitmap( down_xpm ), wxDefaultPosition, wxSize( -1,22 ), wxBU_AUTODRAW );
	bSizer11->Add( m_bpButton9, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	sbSizer3->Add( bSizer11, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxVERTICAL );
	
	m_btCh4 = new wxToggleButton( m_pnControls, ID_CHON4, wxT("4"), wxDefaultPosition, wxSize( 30,27 ), 0 );
	m_btCh4->SetFont( wxFont( 12, 74, 90, 92, false, wxEmptyString ) );
	m_btCh4->SetToolTip( wxT("Enable Channel 4") );
	
	bSizer13->Add( m_btCh4, 0, wxALIGN_CENTER, 5 );
	
	m_slPos4 = new wxSlider( m_pnControls, ID_POS4, 0, -250, 250, wxDefaultPosition, wxSize( -1,70 ), wxSL_VERTICAL|wxSTATIC_BORDER );
	m_slPos4->SetBackgroundColour( wxColour( 170, 255, 170 ) );
	m_slPos4->SetToolTip( wxT("Move Channel 4 Vertical Position") );
	m_slPos4->SetMinSize( wxSize( -1,70 ) );
	m_slPos4->SetMaxSize( wxSize( -1,70 ) );
	
	bSizer13->Add( m_slPos4, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_bpButton10 = new wxBitmapButton( m_pnControls, ID_SCALEUP4, wxBitmap( up_xpm ), wxDefaultPosition, wxSize( -1,22 ), wxBU_AUTODRAW );
	bSizer13->Add( m_bpButton10, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_stScale4 = new wxStaticText( m_pnControls, wxID_ANY, wxT("500mV"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE|wxST_NO_AUTORESIZE );
	m_stScale4->Wrap( -1 );
	m_stScale4->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 75, 90, 90, false, wxEmptyString ) );
	
	bSizer13->Add( m_stScale4, 0, wxALIGN_CENTER|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_bpButton11 = new wxBitmapButton( m_pnControls, ID_SCALEDN4, wxBitmap( down_xpm ), wxDefaultPosition, wxSize( -1,22 ), wxBU_AUTODRAW );
	bSizer13->Add( m_bpButton11, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	sbSizer3->Add( bSizer13, 1, wxEXPAND, 5 );
	
	
	bSizer2->Add( sbSizer3, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer8;
	sbSizer8 = new wxStaticBoxSizer( new wxStaticBox( m_pnControls, wxID_ANY, wxEmptyString ), wxVERTICAL );
	
	wxBoxSizer* bSizer131;
	bSizer131 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText76 = new wxStaticText( m_pnControls, wxID_ANY, wxT("Cursor:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText76->Wrap( -1 );
	bSizer131->Add( m_staticText76, 0, wxALIGN_CENTER, 5 );
	
	m_toggleCursorA = new wxToggleButton( m_pnControls, ID_CURSORA, wxT("&A"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	m_toggleCursorA->SetToolTip( wxT("Activate Cursor A") );
	m_toggleCursorA->SetMinSize( wxSize( 40,-1 ) );
	m_toggleCursorA->SetMaxSize( wxSize( 40,-1 ) );
	
	bSizer131->Add( m_toggleCursorA, 0, wxALIGN_CENTER, 5 );
	
	m_toggleCursorB = new wxToggleButton( m_pnControls, ID_CURSORB, wxT("&B"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	m_toggleCursorB->SetToolTip( wxT("Activate Cursor B") );
	m_toggleCursorB->SetMinSize( wxSize( 40,-1 ) );
	m_toggleCursorB->SetMaxSize( wxSize( 40,-1 ) );
	
	bSizer131->Add( m_toggleCursorB, 0, wxALIGN_CENTER, 5 );
	
	m_checkBox8 = new wxCheckBox( m_pnControls, wxID_ANY, wxT("Snap"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer131->Add( m_checkBox8, 1, wxALIGN_CENTER|wxLEFT, 5 );
	
	
	sbSizer8->Add( bSizer131, 0, wxEXPAND, 5 );
	
	
	bSizer2->Add( sbSizer8, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer4;
	sbSizer4 = new wxStaticBoxSizer( new wxStaticBox( m_pnControls, wxID_ANY, wxEmptyString ), wxVERTICAL );
	
	wxGridSizer* gSizer1;
	gSizer1 = new wxGridSizer( 3, 2, 0, 0 );
	
	m_btConfig = new wxButton( m_pnControls, ID_CONFIG, wxT("&Config"), wxDefaultPosition, wxDefaultSize, 0 );
	m_btConfig->SetToolTip( wxT("Bring up Configuration Dialog") );
	
	gSizer1->Add( m_btConfig, 0, wxEXPAND, 5 );
	
	m_btSave = new wxButton( m_pnControls, ID_SAVE, wxT("&Save"), wxDefaultPosition, wxDefaultSize, 0 );
	m_btSave->SetToolTip( wxT("Save Waveforms") );
	
	gSizer1->Add( m_btSave, 0, wxEXPAND, 5 );
	
	m_btMeasure = new wxButton( m_pnControls, ID_MEASURE, wxT("&Measure"), wxDefaultPosition, wxDefaultSize, 0 );
	m_btMeasure->SetToolTip( wxT("Bring up Measurement Dialog") );
	
	gSizer1->Add( m_btMeasure, 0, wxEXPAND, 5 );
	
	m_btDisplay = new wxButton( m_pnControls, ID_MEASURE, wxT("&Display"), wxDefaultPosition, wxDefaultSize, 0 );
	m_btDisplay->SetToolTip( wxT("Bring up Measurement Dialog") );
	
	gSizer1->Add( m_btDisplay, 0, wxEXPAND, 5 );
	
	m_btPrint = new wxButton( m_pnControls, ID_PRINT, wxT("&Print"), wxDefaultPosition, wxDefaultSize, 0 );
	m_btPrint->SetToolTip( wxT("Print Waveforms") );
	
	gSizer1->Add( m_btPrint, 0, wxEXPAND, 5 );
	
	
	sbSizer4->Add( gSizer1, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer2->Add( sbSizer4, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer9;
	sbSizer9 = new wxStaticBoxSizer( new wxStaticBox( m_pnControls, wxID_ANY, wxEmptyString ), wxHORIZONTAL );
	
	wxGridSizer* gSizer4;
	gSizer4 = new wxGridSizer( 1, 2, 0, 0 );
	
	m_btAbout = new wxButton( m_pnControls, ID_ABOUT, wxT("About"), wxDefaultPosition, wxDefaultSize, 0 );
	m_btAbout->SetToolTip( wxT("Display About Box") );
	
	gSizer4->Add( m_btAbout, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );
	
	m_btExit = new wxButton( m_pnControls, ID_EXIT, wxT("E&xit"), wxDefaultPosition, wxDefaultSize, 0 );
	m_btExit->SetToolTip( wxT("Exit Program") );
	
	gSizer4->Add( m_btExit, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );
	
	
	sbSizer9->Add( gSizer4, 1, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer2->Add( sbSizer9, 0, wxALIGN_CENTER|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizer2->Add( bSizer3, 1, wxEXPAND, 5 );
	
	
	m_pnControls->SetSizer( bSizer2 );
	m_pnControls->Layout();
	bSizer2->Fit( m_pnControls );
	bSizer1->Add( m_pnControls, 0, wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 0 );
	
	
	this->SetSizer( bSizer1 );
	this->Layout();
	
	// Connect Events
	this->Connect( m_menuSave->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( DOFrame_fb::OnSave ) );
	this->Connect( m_menuPrint->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( DOFrame_fb::OnPrint ) );
	this->Connect( m_menuExit->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( DOFrame_fb::OnExit ) );
	this->Connect( m_menuCursorA->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( DOFrame_fb::OnCursor ) );
	this->Connect( m_menuCursorB->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( DOFrame_fb::OnCursor ) );
	this->Connect( m_menuItem13->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( DOFrame_fb::OnSnap ) );
	this->Connect( m_menuConfig->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( DOFrame_fb::OnConfig ) );
	this->Connect( m_menuMeasure->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( DOFrame_fb::OnMeasure ) );
	this->Connect( m_menuDisplay->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( DOFrame_fb::OnDisplay ) );
	this->Connect( m_menuAbout->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( DOFrame_fb::OnAbout ) );
	m_slTrgLevel->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( DOFrame_fb::OnTrgLevelChange ), NULL, this );
	m_slTrgLevel->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( DOFrame_fb::OnTrgLevelChange ), NULL, this );
	m_slTrgLevel->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( DOFrame_fb::OnTrgLevelChange ), NULL, this );
	m_slTrgLevel->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( DOFrame_fb::OnTrgLevelChange ), NULL, this );
	m_slTrgLevel->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( DOFrame_fb::OnTrgLevelChange ), NULL, this );
	m_slTrgLevel->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( DOFrame_fb::OnTrgLevelChange ), NULL, this );
	m_slTrgLevel->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( DOFrame_fb::OnTrgLevelChange ), NULL, this );
	m_slTrgLevel->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( DOFrame_fb::OnTrgLevelChange ), NULL, this );
	m_slTrgLevel->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( DOFrame_fb::OnTrgLevelChange ), NULL, this );
	m_slTrgLevel->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( DOFrame_fb::OnZero ), NULL, this );
	m_slTrgLevel->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( DOFrame_fb::OnZero ), NULL, this );
	m_btRun->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnTrigger ), NULL, this );
	m_btSingle->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnTrigger ), NULL, this );
	m_rbNormal->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( DOFrame_fb::OnTrgButton ), NULL, this );
	m_rbAuto->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( DOFrame_fb::OnTrgButton ), NULL, this );
	m_bpPolarity->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnTrgButton ), NULL, this );
	m_btTrgCfg->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnTrigger ), NULL, this );
	m_slTrgDelay->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( DOFrame_fb::OnTrgDelayChange ), NULL, this );
	m_slTrgDelay->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( DOFrame_fb::OnTrgDelayChange ), NULL, this );
	m_slTrgDelay->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( DOFrame_fb::OnTrgDelayChange ), NULL, this );
	m_slTrgDelay->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( DOFrame_fb::OnTrgDelayChange ), NULL, this );
	m_slTrgDelay->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( DOFrame_fb::OnTrgDelayChange ), NULL, this );
	m_slTrgDelay->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( DOFrame_fb::OnTrgDelayChange ), NULL, this );
	m_slTrgDelay->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( DOFrame_fb::OnTrgDelayChange ), NULL, this );
	m_slTrgDelay->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( DOFrame_fb::OnTrgDelayChange ), NULL, this );
	m_slTrgDelay->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( DOFrame_fb::OnTrgDelayChange ), NULL, this );
	m_rbSource->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( DOFrame_fb::OnTrgButton ), NULL, this );
	m_bpButton2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnHScaleChange ), NULL, this );
	m_bpButton3->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnHScaleChange ), NULL, this );
	m_slHOffset->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( DOFrame_fb::OnHOffsetChange ), NULL, this );
	m_slHOffset->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( DOFrame_fb::OnHOffsetChange ), NULL, this );
	m_slHOffset->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( DOFrame_fb::OnHOffsetChange ), NULL, this );
	m_slHOffset->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( DOFrame_fb::OnHOffsetChange ), NULL, this );
	m_slHOffset->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( DOFrame_fb::OnHOffsetChange ), NULL, this );
	m_slHOffset->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( DOFrame_fb::OnHOffsetChange ), NULL, this );
	m_slHOffset->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( DOFrame_fb::OnHOffsetChange ), NULL, this );
	m_slHOffset->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( DOFrame_fb::OnHOffsetChange ), NULL, this );
	m_slHOffset->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( DOFrame_fb::OnHOffsetChange ), NULL, this );
	m_slHOffset->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( DOFrame_fb::OnZero ), NULL, this );
	m_slHOffset->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( DOFrame_fb::OnZero ), NULL, this );
	m_btCh1->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnChnOn ), NULL, this );
	m_slPos1->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos1->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos1->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos1->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos1->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos1->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos1->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos1->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos1->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos1->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( DOFrame_fb::OnZero ), NULL, this );
	m_slPos1->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( DOFrame_fb::OnZero ), NULL, this );
	m_bpButton4->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnScaleChange ), NULL, this );
	m_bpButton5->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnScaleChange ), NULL, this );
	m_btCh2->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnChnOn ), NULL, this );
	m_slPos2->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos2->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos2->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos2->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos2->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos2->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos2->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos2->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos2->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos2->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( DOFrame_fb::OnZero ), NULL, this );
	m_slPos2->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( DOFrame_fb::OnZero ), NULL, this );
	m_bpButton6->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnScaleChange ), NULL, this );
	m_bpButton7->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnScaleChange ), NULL, this );
	m_btCh3->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnChnOn ), NULL, this );
	m_slPos3->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos3->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos3->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos3->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos3->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos3->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos3->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos3->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos3->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos3->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( DOFrame_fb::OnZero ), NULL, this );
	m_slPos3->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( DOFrame_fb::OnZero ), NULL, this );
	m_bpButton8->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnScaleChange ), NULL, this );
	m_bpButton9->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnScaleChange ), NULL, this );
	m_btCh4->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnChnOn ), NULL, this );
	m_slPos4->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos4->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos4->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos4->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos4->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos4->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos4->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos4->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos4->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos4->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( DOFrame_fb::OnZero ), NULL, this );
	m_slPos4->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( DOFrame_fb::OnZero ), NULL, this );
	m_bpButton10->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnScaleChange ), NULL, this );
	m_bpButton11->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnScaleChange ), NULL, this );
	m_toggleCursorA->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnCursor ), NULL, this );
	m_toggleCursorB->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnCursor ), NULL, this );
	m_checkBox8->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( DOFrame_fb::OnSnap ), NULL, this );
	m_btConfig->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnConfig ), NULL, this );
	m_btSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnSave ), NULL, this );
	m_btMeasure->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnMeasure ), NULL, this );
	m_btDisplay->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnDisplay ), NULL, this );
	m_btPrint->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnPrint ), NULL, this );
	m_btAbout->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnAbout ), NULL, this );
	m_btExit->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnExit ), NULL, this );
}

DOFrame_fb::~DOFrame_fb()
{
	// Disconnect Events
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( DOFrame_fb::OnSave ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( DOFrame_fb::OnPrint ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( DOFrame_fb::OnExit ) );
	this->Disconnect( ID_CURSORA, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( DOFrame_fb::OnCursor ) );
	this->Disconnect( ID_CURSORB, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( DOFrame_fb::OnCursor ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( DOFrame_fb::OnSnap ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( DOFrame_fb::OnConfig ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( DOFrame_fb::OnMeasure ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( DOFrame_fb::OnDisplay ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( DOFrame_fb::OnAbout ) );
	m_slTrgLevel->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( DOFrame_fb::OnTrgLevelChange ), NULL, this );
	m_slTrgLevel->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( DOFrame_fb::OnTrgLevelChange ), NULL, this );
	m_slTrgLevel->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( DOFrame_fb::OnTrgLevelChange ), NULL, this );
	m_slTrgLevel->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( DOFrame_fb::OnTrgLevelChange ), NULL, this );
	m_slTrgLevel->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( DOFrame_fb::OnTrgLevelChange ), NULL, this );
	m_slTrgLevel->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( DOFrame_fb::OnTrgLevelChange ), NULL, this );
	m_slTrgLevel->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( DOFrame_fb::OnTrgLevelChange ), NULL, this );
	m_slTrgLevel->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( DOFrame_fb::OnTrgLevelChange ), NULL, this );
	m_slTrgLevel->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( DOFrame_fb::OnTrgLevelChange ), NULL, this );
	m_slTrgLevel->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( DOFrame_fb::OnZero ), NULL, this );
	m_slTrgLevel->Disconnect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( DOFrame_fb::OnZero ), NULL, this );
	m_btRun->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnTrigger ), NULL, this );
	m_btSingle->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnTrigger ), NULL, this );
	m_rbNormal->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( DOFrame_fb::OnTrgButton ), NULL, this );
	m_rbAuto->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( DOFrame_fb::OnTrgButton ), NULL, this );
	m_bpPolarity->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnTrgButton ), NULL, this );
	m_btTrgCfg->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnTrigger ), NULL, this );
	m_slTrgDelay->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( DOFrame_fb::OnTrgDelayChange ), NULL, this );
	m_slTrgDelay->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( DOFrame_fb::OnTrgDelayChange ), NULL, this );
	m_slTrgDelay->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( DOFrame_fb::OnTrgDelayChange ), NULL, this );
	m_slTrgDelay->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( DOFrame_fb::OnTrgDelayChange ), NULL, this );
	m_slTrgDelay->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( DOFrame_fb::OnTrgDelayChange ), NULL, this );
	m_slTrgDelay->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( DOFrame_fb::OnTrgDelayChange ), NULL, this );
	m_slTrgDelay->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( DOFrame_fb::OnTrgDelayChange ), NULL, this );
	m_slTrgDelay->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( DOFrame_fb::OnTrgDelayChange ), NULL, this );
	m_slTrgDelay->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( DOFrame_fb::OnTrgDelayChange ), NULL, this );
	m_rbSource->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( DOFrame_fb::OnTrgButton ), NULL, this );
	m_bpButton2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnHScaleChange ), NULL, this );
	m_bpButton3->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnHScaleChange ), NULL, this );
	m_slHOffset->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( DOFrame_fb::OnHOffsetChange ), NULL, this );
	m_slHOffset->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( DOFrame_fb::OnHOffsetChange ), NULL, this );
	m_slHOffset->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( DOFrame_fb::OnHOffsetChange ), NULL, this );
	m_slHOffset->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( DOFrame_fb::OnHOffsetChange ), NULL, this );
	m_slHOffset->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( DOFrame_fb::OnHOffsetChange ), NULL, this );
	m_slHOffset->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( DOFrame_fb::OnHOffsetChange ), NULL, this );
	m_slHOffset->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( DOFrame_fb::OnHOffsetChange ), NULL, this );
	m_slHOffset->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( DOFrame_fb::OnHOffsetChange ), NULL, this );
	m_slHOffset->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( DOFrame_fb::OnHOffsetChange ), NULL, this );
	m_slHOffset->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( DOFrame_fb::OnZero ), NULL, this );
	m_slHOffset->Disconnect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( DOFrame_fb::OnZero ), NULL, this );
	m_btCh1->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnChnOn ), NULL, this );
	m_slPos1->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos1->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos1->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos1->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos1->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos1->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos1->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos1->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos1->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos1->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( DOFrame_fb::OnZero ), NULL, this );
	m_slPos1->Disconnect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( DOFrame_fb::OnZero ), NULL, this );
	m_bpButton4->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnScaleChange ), NULL, this );
	m_bpButton5->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnScaleChange ), NULL, this );
	m_btCh2->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnChnOn ), NULL, this );
	m_slPos2->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos2->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos2->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos2->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos2->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos2->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos2->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos2->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos2->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos2->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( DOFrame_fb::OnZero ), NULL, this );
	m_slPos2->Disconnect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( DOFrame_fb::OnZero ), NULL, this );
	m_bpButton6->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnScaleChange ), NULL, this );
	m_bpButton7->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnScaleChange ), NULL, this );
	m_btCh3->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnChnOn ), NULL, this );
	m_slPos3->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos3->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos3->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos3->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos3->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos3->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos3->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos3->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos3->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos3->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( DOFrame_fb::OnZero ), NULL, this );
	m_slPos3->Disconnect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( DOFrame_fb::OnZero ), NULL, this );
	m_bpButton8->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnScaleChange ), NULL, this );
	m_bpButton9->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnScaleChange ), NULL, this );
	m_btCh4->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnChnOn ), NULL, this );
	m_slPos4->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos4->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos4->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos4->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos4->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos4->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos4->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos4->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos4->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( DOFrame_fb::OnPosChange ), NULL, this );
	m_slPos4->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( DOFrame_fb::OnZero ), NULL, this );
	m_slPos4->Disconnect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( DOFrame_fb::OnZero ), NULL, this );
	m_bpButton10->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnScaleChange ), NULL, this );
	m_bpButton11->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnScaleChange ), NULL, this );
	m_toggleCursorA->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnCursor ), NULL, this );
	m_toggleCursorB->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnCursor ), NULL, this );
	m_checkBox8->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( DOFrame_fb::OnSnap ), NULL, this );
	m_btConfig->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnConfig ), NULL, this );
	m_btSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnSave ), NULL, this );
	m_btMeasure->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnMeasure ), NULL, this );
	m_btDisplay->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnDisplay ), NULL, this );
	m_btPrint->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnPrint ), NULL, this );
	m_btAbout->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnAbout ), NULL, this );
	m_btExit->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DOFrame_fb::OnExit ), NULL, this );
	
}

ConfigDialog_fb::ConfigDialog_fb( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer5111;
	sbSizer5111 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Board") ), wxVERTICAL );
	
	wxBoxSizer* bSizer37;
	bSizer37 = new wxBoxSizer( wxHORIZONTAL );
	
	wxArrayString m_cbBoardChoices;
	m_cbBoard = new wxChoice( this, ID_BSEL, wxDefaultPosition, wxDefaultSize, m_cbBoardChoices, 0 );
	m_cbBoard->SetSelection( 0 );
	bSizer37->Add( m_cbBoard, 1, wxALIGN_CENTER_VERTICAL|wxEXPAND|wxTOP|wxBOTTOM, 5 );
	
	m_btScan = new wxButton( this, wxID_ANY, wxT("Rescan"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer37->Add( m_btScan, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxLEFT, 5 );
	
	m_btInfo = new wxButton( this, wxID_ANY, wxT("Info"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer37->Add( m_btInfo, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxLEFT, 5 );
	
	
	sbSizer5111->Add( bSizer37, 1, wxEXPAND, 5 );
	
	m_cbMulti = new wxCheckBox( this, ID_MULTI, wxT("Configure multi-board daisy-chain"), wxDefaultPosition, wxDefaultSize, 0 );
	m_cbMulti->Enable( false );
	
	sbSizer5111->Add( m_cbMulti, 0, wxRIGHT|wxLEFT, 5 );
	
	
	bSizer12->Add( sbSizer5111, 0, wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	wxStaticBoxSizer* sbSizer511;
	sbSizer511 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Channels") ), wxVERTICAL );
	
	wxString m_rbChHalfChoices[] = { wxT("even channels"), wxT("odd channels"), wxT("combined") };
	int m_rbChHalfNChoices = sizeof( m_rbChHalfChoices ) / sizeof( wxString );
	m_rbChHalf = new wxRadioBox( this, ID_CH_HALF, wxT("2048-bin option"), wxDefaultPosition, wxDefaultSize, m_rbChHalfNChoices, m_rbChHalfChoices, 1, wxRA_SPECIFY_ROWS );
	m_rbChHalf->SetSelection( 0 );
	sbSizer511->Add( m_rbChHalf, 0, wxBOTTOM, 5 );
	
	m_cbClkOn = new wxCheckBox( this, wxID_ANY, wxT("Connect reference clock to all channels"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer511->Add( m_cbClkOn, 0, wxALIGN_CENTER_VERTICAL|wxTOP, 5 );
	
	
	bSizer12->Add( sbSizer511, 0, wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	wxStaticBoxSizer* sbSizer17;
	sbSizer17 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Input Range") ), wxVERTICAL );
	
	wxString m_rbRangeChoices[] = { wxT("-0.5V to +0.5V"), wxT("-0.05V to +0.95V"), wxT("0V to +1V") };
	int m_rbRangeNChoices = sizeof( m_rbRangeChoices ) / sizeof( wxString );
	m_rbRange = new wxRadioBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, m_rbRangeNChoices, m_rbRangeChoices, 1, wxRA_SPECIFY_ROWS );
	m_rbRange->SetSelection( 2 );
	sbSizer17->Add( m_rbRange, 0, 0, 5 );
	
	
	bSizer12->Add( sbSizer17, 0, wxRIGHT|wxLEFT, 5 );
	
	wxStaticBoxSizer* sbSizer512;
	sbSizer512 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Sampling Speed") ), wxVERTICAL );
	
	wxBoxSizer* bSizer1813;
	bSizer1813 = new wxBoxSizer( wxHORIZONTAL );
	
	m_tbFreq = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), wxTE_PROCESS_ENTER );
	m_tbFreq->SetMaxLength( 0 ); 
	bSizer1813->Add( m_tbFreq, 0, wxALIGN_CENTER|wxRIGHT|wxLEFT, 5 );
	
	m_staticText26 = new wxStaticText( this, wxID_ANY, wxT("GSPS"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText26->Wrap( -1 );
	bSizer1813->Add( m_staticText26, 0, wxALIGN_CENTER|wxBOTTOM|wxRIGHT|wxTOP, 5 );
	
	m_cbLocked = new wxCheckBox( this, wxID_ANY, wxT("Lock"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1813->Add( m_cbLocked, 0, wxALIGN_CENTER|wxLEFT, 10 );
	
	m_staticText261 = new wxStaticText( this, wxID_ANY, wxT("Actual speed:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText261->Wrap( -1 );
	bSizer1813->Add( m_staticText261, 0, wxALIGN_CENTER|wxLEFT, 40 );
	
	m_stActFreq = new wxStaticText( this, wxID_ANY, wxT("0.000 GSPS"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stActFreq->Wrap( -1 );
	bSizer1813->Add( m_stActFreq, 0, wxALIGN_CENTER|wxLEFT|wxRIGHT, 5 );
	
	
	sbSizer512->Add( bSizer1813, 0, wxEXPAND, 5 );
	
	
	bSizer12->Add( sbSizer512, 0, wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	wxStaticBoxSizer* sbSizer5;
	sbSizer5 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Voltage Calibration") ), wxVERTICAL );
	
	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxHORIZONTAL );
	
	m_cbCalOn = new wxCheckBox( this, wxID_ANY, wxT("Voltage on"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer18->Add( m_cbCalOn, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5 );
	
	m_teCal = new wxTextCtrl( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxSize( 40,-1 ), wxTE_PROCESS_ENTER );
	m_teCal->SetMaxLength( 0 ); 
	bSizer18->Add( m_teCal, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5 );
	
	m_slCal = new wxSlider( this, wxID_ANY, 0, -500, 500, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSTATIC_BORDER );
	bSizer18->Add( m_slCal, 1, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5 );
	
	m_staticText10 = new wxStaticText( this, wxID_ANY, wxT("mV"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	bSizer18->Add( m_staticText10, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5 );
	
	
	sbSizer5->Add( bSizer18, 1, wxEXPAND|wxTOP|wxBOTTOM, 5 );
	
	m_cbCalibrated = new wxCheckBox( this, ID_DISP_CALIBRATED, wxT("Apply Primary Calibration (Cell)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_cbCalibrated->SetValue(true); 
	sbSizer5->Add( m_cbCalibrated, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5 );
	
	m_cbCalibrated2 = new wxCheckBox( this, ID_DISP_CALIBRATED2, wxT("Apply Secondary Calibration (Readout)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_cbCalibrated2->SetValue(true); 
	sbSizer5->Add( m_cbCalibrated2, 0, wxRIGHT|wxLEFT, 5 );
	
	m_cbSpikes = new wxCheckBox( this, wxID_ANY, wxT("Remove Spikes"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer5->Add( m_cbSpikes, 0, wxRIGHT|wxLEFT, 5 );
	
	m_button13 = new wxButton( this, wxID_ANY, wxT("Execute Voltage Calibration"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer5->Add( m_button13, 0, wxALIGN_CENTER|wxALL, 5 );
	
	m_gaugeCalVolt = new wxGauge( this, wxID_ANY, 100, wxDefaultPosition, wxSize( -1,15 ), wxGA_HORIZONTAL );
	sbSizer5->Add( m_gaugeCalVolt, 1, wxEXPAND, 5 );
	
	
	bSizer12->Add( sbSizer5, 1, wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	wxStaticBoxSizer* sbSizer6;
	sbSizer6 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Timing Calibration") ), wxVERTICAL );
	
	m_cbRotated = new wxCheckBox( this, ID_DISP_ROTATED, wxT("Rotate waveforms relative to trigger"), wxDefaultPosition, wxDefaultSize, 0 );
	m_cbRotated->SetValue(true); 
	sbSizer6->Add( m_cbRotated, 0, wxRIGHT|wxLEFT, 5 );
	
	m_cbTCalOn = new wxCheckBox( this, ID_DISP_TCALIBRATED, wxT("Apply Timing Calibration"), wxDefaultPosition, wxDefaultSize, 0 );
	m_cbTCalOn->SetValue(true); 
	sbSizer6->Add( m_cbTCalOn, 0, wxRIGHT|wxLEFT, 5 );
	
	m_cbTrgCorr = new wxCheckBox( this, ID_DISP_TRGCORR, wxT("Correct horizontal trigger position"), wxDefaultPosition, wxDefaultSize, 0 );
	m_cbTrgCorr->SetValue(true); 
	sbSizer6->Add( m_cbTrgCorr, 0, wxRIGHT|wxLEFT, 5 );
	
	m_cbExtRefclk = new wxCheckBox( this, ID_REFCLK, wxT("Use external reference clock"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer6->Add( m_cbExtRefclk, 0, wxRIGHT|wxLEFT, 5 );
	
	m_button14 = new wxButton( this, wxID_ANY, wxT("Execute Timing Calibration"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer6->Add( m_button14, 0, wxALIGN_CENTER|wxALL, 5 );
	
	m_gaugeCalTime = new wxGauge( this, wxID_ANY, 100, wxDefaultPosition, wxSize( -1,15 ), wxGA_HORIZONTAL );
	sbSizer6->Add( m_gaugeCalTime, 1, wxEXPAND, 5 );
	
	
	bSizer12->Add( sbSizer6, 1, wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	m_button10 = new wxButton( this, wxID_ANY, wxT("&Close"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( m_button10, 0, wxALL|wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer12 );
	this->Layout();
	bSizer12->Fit( this );
	
	// Connect Events
	m_cbBoard->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( ConfigDialog_fb::OnBoardSelect ), NULL, this );
	m_btScan->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnRescan ), NULL, this );
	m_btInfo->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnInfo ), NULL, this );
	m_cbMulti->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnBoardSelect ), NULL, this );
	m_rbChHalf->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( ConfigDialog_fb::OnChannelHalf ), NULL, this );
	m_cbClkOn->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnClkOn ), NULL, this );
	m_rbRange->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( ConfigDialog_fb::OnInputRange ), NULL, this );
	m_tbFreq->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( ConfigDialog_fb::OnFreq ), NULL, this );
	m_cbLocked->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnLock ), NULL, this );
	m_cbCalOn->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnCalOn ), NULL, this );
	m_teCal->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( ConfigDialog_fb::OnCalEnter ), NULL, this );
	m_slCal->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( ConfigDialog_fb::OnCalSlider ), NULL, this );
	m_slCal->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( ConfigDialog_fb::OnCalSlider ), NULL, this );
	m_slCal->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( ConfigDialog_fb::OnCalSlider ), NULL, this );
	m_slCal->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( ConfigDialog_fb::OnCalSlider ), NULL, this );
	m_slCal->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( ConfigDialog_fb::OnCalSlider ), NULL, this );
	m_slCal->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( ConfigDialog_fb::OnCalSlider ), NULL, this );
	m_slCal->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( ConfigDialog_fb::OnCalSlider ), NULL, this );
	m_slCal->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( ConfigDialog_fb::OnCalSlider ), NULL, this );
	m_slCal->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( ConfigDialog_fb::OnCalSlider ), NULL, this );
	m_cbCalibrated->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnDisplayWaveforms ), NULL, this );
	m_cbCalibrated2->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnDisplayWaveforms ), NULL, this );
	m_cbSpikes->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnRemoveSpikes ), NULL, this );
	m_button13->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnButtonCalVolt ), NULL, this );
	m_cbRotated->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnDisplayWaveforms ), NULL, this );
	m_cbTCalOn->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnDisplayWaveforms ), NULL, this );
	m_cbTrgCorr->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnDisplayWaveforms ), NULL, this );
	m_cbExtRefclk->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnDisplayWaveforms ), NULL, this );
	m_button14->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnButtonCalTime ), NULL, this );
	m_button10->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnClose ), NULL, this );
}

ConfigDialog_fb::~ConfigDialog_fb()
{
	// Disconnect Events
	m_cbBoard->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( ConfigDialog_fb::OnBoardSelect ), NULL, this );
	m_btScan->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnRescan ), NULL, this );
	m_btInfo->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnInfo ), NULL, this );
	m_cbMulti->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnBoardSelect ), NULL, this );
	m_rbChHalf->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( ConfigDialog_fb::OnChannelHalf ), NULL, this );
	m_cbClkOn->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnClkOn ), NULL, this );
	m_rbRange->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( ConfigDialog_fb::OnInputRange ), NULL, this );
	m_tbFreq->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( ConfigDialog_fb::OnFreq ), NULL, this );
	m_cbLocked->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnLock ), NULL, this );
	m_cbCalOn->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnCalOn ), NULL, this );
	m_teCal->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( ConfigDialog_fb::OnCalEnter ), NULL, this );
	m_slCal->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( ConfigDialog_fb::OnCalSlider ), NULL, this );
	m_slCal->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( ConfigDialog_fb::OnCalSlider ), NULL, this );
	m_slCal->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( ConfigDialog_fb::OnCalSlider ), NULL, this );
	m_slCal->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( ConfigDialog_fb::OnCalSlider ), NULL, this );
	m_slCal->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( ConfigDialog_fb::OnCalSlider ), NULL, this );
	m_slCal->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( ConfigDialog_fb::OnCalSlider ), NULL, this );
	m_slCal->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( ConfigDialog_fb::OnCalSlider ), NULL, this );
	m_slCal->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( ConfigDialog_fb::OnCalSlider ), NULL, this );
	m_slCal->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( ConfigDialog_fb::OnCalSlider ), NULL, this );
	m_cbCalibrated->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnDisplayWaveforms ), NULL, this );
	m_cbCalibrated2->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnDisplayWaveforms ), NULL, this );
	m_cbSpikes->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnRemoveSpikes ), NULL, this );
	m_button13->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnButtonCalVolt ), NULL, this );
	m_cbRotated->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnDisplayWaveforms ), NULL, this );
	m_cbTCalOn->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnDisplayWaveforms ), NULL, this );
	m_cbTrgCorr->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnDisplayWaveforms ), NULL, this );
	m_cbExtRefclk->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnDisplayWaveforms ), NULL, this );
	m_button14->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnButtonCalTime ), NULL, this );
	m_button10->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigDialog_fb::OnClose ), NULL, this );
	
}

DisplayDialog_fb::DisplayDialog_fb( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer7;
	sbSizer7 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Options") ), wxVERTICAL );
	
	wxBoxSizer* bSizer34;
	bSizer34 = new wxBoxSizer( wxHORIZONTAL );
	
	m_checkBox7 = new wxCheckBox( this, wxID_ANY, wxT("Display Date/Time"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer34->Add( m_checkBox7, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_checkBox71 = new wxCheckBox( this, wxID_ANY, wxT("Show Grid"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBox71->SetValue(true); 
	bSizer34->Add( m_checkBox71, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox88 = new wxCheckBox( this, wxID_ANY, wxT("Lines"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBox88->SetValue(true); 
	bSizer34->Add( m_checkBox88, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	sbSizer7->Add( bSizer34, 1, wxEXPAND, 5 );
	
	m_checkBox73 = new wxCheckBox( this, wxID_ANY, wxT("Show hardware scalers"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer7->Add( m_checkBox73, 0, wxALL, 5 );
	
	
	bSizer12->Add( sbSizer7, 0, wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	wxStaticBoxSizer* sbSizer71;
	sbSizer71 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Display Mode") ), wxVERTICAL );
	
	m_rbShowSample = new wxRadioButton( this, ID_DISPSAMPLE, wxT("Sample"), wxDefaultPosition, wxDefaultSize, 0 );
	m_rbShowSample->SetValue( true ); 
	sbSizer71->Add( m_rbShowSample, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer39;
	bSizer39 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer( wxVERTICAL );
	
	m_rbShowAverage = new wxRadioButton( this, ID_DISPAVERAGE, wxT("Average"), wxDefaultPosition, wxDefaultSize, 0 );
	m_rbShowAverage->Enable( false );
	
	bSizer40->Add( m_rbShowAverage, 0, wxALL, 5 );
	
	m_rbShowPersist = new wxRadioButton( this, ID_DISPPERSIST, wxT("Persistance"), wxDefaultPosition, wxDefaultSize, 0 );
	m_rbShowPersist->Enable( false );
	
	bSizer40->Add( m_rbShowPersist, 0, wxALL, 5 );
	
	
	bSizer39->Add( bSizer40, 1, wxEXPAND, 5 );
	
	m_staticText59 = new wxStaticText( this, wxID_ANY, wxT("Number of waveforms:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText59->Wrap( -1 );
	bSizer39->Add( m_staticText59, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_cbNumber = new wxComboBox( this, ID_DISPNUMBER, wxT("16"), wxDefaultPosition, wxDefaultSize, 0, NULL, wxTE_PROCESS_ENTER );
	m_cbNumber->Append( wxT("2") );
	m_cbNumber->Append( wxT("4") );
	m_cbNumber->Append( wxT("8") );
	m_cbNumber->Append( wxT("16") );
	m_cbNumber->Append( wxT("32") );
	m_cbNumber->Append( wxT("64") );
	m_cbNumber->Append( wxT("128") );
	m_cbNumber->Append( wxT("256") );
	m_cbNumber->Enable( false );
	
	bSizer39->Add( m_cbNumber, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	
	sbSizer71->Add( bSizer39, 1, wxEXPAND, 5 );
	
	
	bSizer12->Add( sbSizer71, 0, wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	wxStaticBoxSizer* sbSizer711;
	sbSizer711 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Math Display") ), wxVERTICAL );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* gSizer2;
	gSizer2 = new wxFlexGridSizer( 3, 5, 0, 0 );
	gSizer2->SetFlexibleDirection( wxBOTH );
	gSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText11 = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	gSizer2->Add( m_staticText11, 0, wxALL, 5 );
	
	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("CH1"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	m_staticText12->SetFont( wxFont( 16, 74, 90, 90, false, wxEmptyString ) );
	m_staticText12->SetBackgroundColour( wxColour( 255, 255, 0 ) );
	
	gSizer2->Add( m_staticText12, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 2 );
	
	m_staticText13 = new wxStaticText( this, wxID_ANY, wxT("CH2"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	m_staticText13->SetFont( wxFont( 16, 74, 90, 90, false, wxEmptyString ) );
	m_staticText13->SetBackgroundColour( wxColour( 170, 170, 255 ) );
	
	gSizer2->Add( m_staticText13, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 2 );
	
	m_staticText14 = new wxStaticText( this, wxID_ANY, wxT("CH3"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14->Wrap( -1 );
	m_staticText14->SetFont( wxFont( 16, 74, 90, 90, false, wxEmptyString ) );
	m_staticText14->SetBackgroundColour( wxColour( 255, 170, 170 ) );
	
	gSizer2->Add( m_staticText14, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 2 );
	
	m_staticText15 = new wxStaticText( this, wxID_ANY, wxT("CH4"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText15->Wrap( -1 );
	m_staticText15->SetFont( wxFont( 16, 74, 90, 90, false, wxEmptyString ) );
	m_staticText15->SetBackgroundColour( wxColour( 170, 255, 170 ) );
	
	gSizer2->Add( m_staticText15, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 2 );
	
	m_staticText17 = new wxStaticText( this, wxID_ANY, wxT("Period Jitter"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	gSizer2->Add( m_staticText17, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox13 = new wxCheckBox( this, ID_PJ1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox13, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox14 = new wxCheckBox( this, ID_PJ2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox14, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox15 = new wxCheckBox( this, ID_PJ3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox15, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox16 = new wxCheckBox( this, ID_PJ4, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox16, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer14->Add( gSizer2, 0, 0, 5 );
	
	
	sbSizer711->Add( bSizer14, 1, wxEXPAND, 5 );
	
	
	bSizer12->Add( sbSizer711, 0, wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	m_button10 = new wxButton( this, wxID_ANY, wxT("&Close"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( m_button10, 0, wxALL|wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer12 );
	this->Layout();
	bSizer12->Fit( this );
	
	// Connect Events
	m_checkBox7->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( DisplayDialog_fb::OnDateTime ), NULL, this );
	m_checkBox71->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( DisplayDialog_fb::OnShowGrid ), NULL, this );
	m_checkBox88->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( DisplayDialog_fb::OnLines ), NULL, this );
	m_checkBox73->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( DisplayDialog_fb::OnScalers ), NULL, this );
	m_rbShowSample->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( DisplayDialog_fb::OnDisplayMode ), NULL, this );
	m_rbShowAverage->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( DisplayDialog_fb::OnDisplayMode ), NULL, this );
	m_rbShowPersist->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( DisplayDialog_fb::OnDisplayMode ), NULL, this );
	m_cbNumber->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( DisplayDialog_fb::OnDisplayMode ), NULL, this );
	m_cbNumber->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( DisplayDialog_fb::OnDisplayMode ), NULL, this );
	m_checkBox13->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( DisplayDialog_fb::OnButton ), NULL, this );
	m_checkBox14->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( DisplayDialog_fb::OnButton ), NULL, this );
	m_checkBox15->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( DisplayDialog_fb::OnButton ), NULL, this );
	m_checkBox16->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( DisplayDialog_fb::OnButton ), NULL, this );
	m_button10->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DisplayDialog_fb::OnClose ), NULL, this );
}

DisplayDialog_fb::~DisplayDialog_fb()
{
	// Disconnect Events
	m_checkBox7->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( DisplayDialog_fb::OnDateTime ), NULL, this );
	m_checkBox71->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( DisplayDialog_fb::OnShowGrid ), NULL, this );
	m_checkBox88->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( DisplayDialog_fb::OnLines ), NULL, this );
	m_checkBox73->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( DisplayDialog_fb::OnScalers ), NULL, this );
	m_rbShowSample->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( DisplayDialog_fb::OnDisplayMode ), NULL, this );
	m_rbShowAverage->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( DisplayDialog_fb::OnDisplayMode ), NULL, this );
	m_rbShowPersist->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( DisplayDialog_fb::OnDisplayMode ), NULL, this );
	m_cbNumber->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( DisplayDialog_fb::OnDisplayMode ), NULL, this );
	m_cbNumber->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( DisplayDialog_fb::OnDisplayMode ), NULL, this );
	m_checkBox13->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( DisplayDialog_fb::OnButton ), NULL, this );
	m_checkBox14->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( DisplayDialog_fb::OnButton ), NULL, this );
	m_checkBox15->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( DisplayDialog_fb::OnButton ), NULL, this );
	m_checkBox16->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( DisplayDialog_fb::OnButton ), NULL, this );
	m_button10->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DisplayDialog_fb::OnClose ), NULL, this );
	
}

MeasureDialog_fb::MeasureDialog_fb( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* gSizer2;
	gSizer2 = new wxFlexGridSizer( 17, 5, 0, 0 );
	gSizer2->SetFlexibleDirection( wxBOTH );
	gSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText11 = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	gSizer2->Add( m_staticText11, 0, wxALL, 5 );
	
	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("CH1"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	m_staticText12->SetFont( wxFont( 16, 74, 90, 90, false, wxEmptyString ) );
	m_staticText12->SetBackgroundColour( wxColour( 255, 255, 0 ) );
	
	gSizer2->Add( m_staticText12, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 2 );
	
	m_staticText13 = new wxStaticText( this, wxID_ANY, wxT("CH2"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	m_staticText13->SetFont( wxFont( 16, 74, 90, 90, false, wxEmptyString ) );
	m_staticText13->SetBackgroundColour( wxColour( 170, 170, 255 ) );
	
	gSizer2->Add( m_staticText13, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 2 );
	
	m_staticText14 = new wxStaticText( this, wxID_ANY, wxT("CH3"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14->Wrap( -1 );
	m_staticText14->SetFont( wxFont( 16, 74, 90, 90, false, wxEmptyString ) );
	m_staticText14->SetBackgroundColour( wxColour( 255, 170, 170 ) );
	
	gSizer2->Add( m_staticText14, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 2 );
	
	m_staticText15 = new wxStaticText( this, wxID_ANY, wxT("CH4"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText15->Wrap( -1 );
	m_staticText15->SetFont( wxFont( 16, 74, 90, 90, false, wxEmptyString ) );
	m_staticText15->SetBackgroundColour( wxColour( 170, 255, 170 ) );
	
	gSizer2->Add( m_staticText15, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 2 );
	
	m_staticText80 = new wxStaticText( this, wxID_ANY, wxT("Amplitude"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText80->Wrap( -1 );
	m_staticText80->SetFont( wxFont( 16, 74, 90, 92, false, wxEmptyString ) );
	
	gSizer2->Add( m_staticText80, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_staticText81 = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText81->Wrap( -1 );
	gSizer2->Add( m_staticText81, 0, wxALL, 5 );
	
	m_staticText82 = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText82->Wrap( -1 );
	gSizer2->Add( m_staticText82, 0, wxALL, 5 );
	
	m_staticText83 = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText83->Wrap( -1 );
	gSizer2->Add( m_staticText83, 0, wxALL, 5 );
	
	m_staticText84 = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText84->Wrap( -1 );
	gSizer2->Add( m_staticText84, 0, wxALL, 5 );
	
	m_staticText16 = new wxStaticText( this, wxID_ANY, wxT("Level"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText16->Wrap( -1 );
	gSizer2->Add( m_staticText16, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox9 = new wxCheckBox( this, ID_LEVEL1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox9, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox10 = new wxCheckBox( this, ID_LEVEL2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox10, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox11 = new wxCheckBox( this, ID_LEVEL3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox11, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox12 = new wxCheckBox( this, ID_LEVEL4, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox12, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText17 = new wxStaticText( this, wxID_ANY, wxT("Peak-Peak Amplitude"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	gSizer2->Add( m_staticText17, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox13 = new wxCheckBox( this, ID_PKPK1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox13, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox14 = new wxCheckBox( this, ID_PKPK2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox14, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox15 = new wxCheckBox( this, ID_PKPK3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox15, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox16 = new wxCheckBox( this, ID_PKPK4, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox16, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText19 = new wxStaticText( this, wxID_ANY, wxT("RMS"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText19->Wrap( -1 );
	gSizer2->Add( m_staticText19, 0, wxALL, 5 );
	
	m_checkBox17 = new wxCheckBox( this, ID_RMS1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox17, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_checkBox18 = new wxCheckBox( this, ID_RMS2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox18, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_checkBox19 = new wxCheckBox( this, ID_RMS3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox19, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_checkBox20 = new wxCheckBox( this, ID_RMS4, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox20, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText90 = new wxStaticText( this, wxID_ANY, wxT("Vertical slice"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText90->Wrap( -1 );
	gSizer2->Add( m_staticText90, 0, wxALL, 5 );
	
	m_checkBox74 = new wxCheckBox( this, ID_VS1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox74, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox75 = new wxCheckBox( this, ID_VS2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox75, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox76 = new wxCheckBox( this, ID_VS3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox76, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox77 = new wxCheckBox( this, ID_VS4, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox77, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText91 = new wxStaticText( this, wxID_ANY, wxT("Gated charge"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText91->Wrap( -1 );
	gSizer2->Add( m_staticText91, 0, wxALL, 5 );
	
	m_checkBox82 = new wxCheckBox( this, ID_CHRG1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox82, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox83 = new wxCheckBox( this, ID_CHRG2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox83, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox84 = new wxCheckBox( this, ID_CHRG3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox84, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox85 = new wxCheckBox( this, ID_CHRG4, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox85, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticline4 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	gSizer2->Add( m_staticline4, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxEXPAND|wxTOP|wxBOTTOM|wxLEFT, 5 );
	
	m_staticline41 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	gSizer2->Add( m_staticline41, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM, 5 );
	
	m_staticline42 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	gSizer2->Add( m_staticline42, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM, 5 );
	
	m_staticline43 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	gSizer2->Add( m_staticline43, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM, 5 );
	
	m_staticline44 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	gSizer2->Add( m_staticline44, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxRIGHT, 5 );
	
	m_staticText85 = new wxStaticText( this, wxID_ANY, wxT("Time"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText85->Wrap( -1 );
	m_staticText85->SetFont( wxFont( 16, 74, 90, 92, false, wxEmptyString ) );
	
	gSizer2->Add( m_staticText85, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_staticText86 = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText86->Wrap( -1 );
	gSizer2->Add( m_staticText86, 0, wxALL, 5 );
	
	m_staticText87 = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText87->Wrap( -1 );
	gSizer2->Add( m_staticText87, 0, wxALL, 5 );
	
	m_staticText88 = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText88->Wrap( -1 );
	gSizer2->Add( m_staticText88, 0, wxALL, 5 );
	
	m_staticText89 = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText89->Wrap( -1 );
	gSizer2->Add( m_staticText89, 0, wxALL, 5 );
	
	m_staticText20 = new wxStaticText( this, wxID_ANY, wxT("Frequency"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText20->Wrap( -1 );
	gSizer2->Add( m_staticText20, 0, wxALL, 5 );
	
	m_checkBox21 = new wxCheckBox( this, ID_FREQ1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox21, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox22 = new wxCheckBox( this, ID_FREQ2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox22, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox23 = new wxCheckBox( this, ID_FREQ3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox23, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox24 = new wxCheckBox( this, ID_FREQ4, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox24, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText21 = new wxStaticText( this, wxID_ANY, wxT("Period"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	gSizer2->Add( m_staticText21, 0, wxALL, 5 );
	
	m_checkBox25 = new wxCheckBox( this, ID_PERIOD1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox25, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox26 = new wxCheckBox( this, ID_PERIOD2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox26, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox27 = new wxCheckBox( this, ID_PERIOD3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox27, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox28 = new wxCheckBox( this, ID_PERIOD4, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox28, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText22 = new wxStaticText( this, wxID_ANY, wxT("Rise time"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText22->Wrap( -1 );
	gSizer2->Add( m_staticText22, 0, wxALL, 5 );
	
	m_checkBox29 = new wxCheckBox( this, ID_RISE1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox29, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox30 = new wxCheckBox( this, ID_RISE2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox30, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox31 = new wxCheckBox( this, ID_RISE3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox31, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox32 = new wxCheckBox( this, ID_RISE4, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox32, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText23 = new wxStaticText( this, wxID_ANY, wxT("Fall time"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	gSizer2->Add( m_staticText23, 0, wxALL, 5 );
	
	m_checkBox33 = new wxCheckBox( this, ID_FALL1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox33, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox34 = new wxCheckBox( this, ID_FALL2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox34, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox35 = new wxCheckBox( this, ID_FALL3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox35, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox36 = new wxCheckBox( this, ID_FALL4, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox36, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText221 = new wxStaticText( this, wxID_ANY, wxT("Positive width"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText221->Wrap( -1 );
	gSizer2->Add( m_staticText221, 0, wxALL, 5 );
	
	m_checkBox291 = new wxCheckBox( this, ID_POSWIDTH1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox291, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_checkBox2911 = new wxCheckBox( this, ID_POSWIDTH2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox2911, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_checkBox2912 = new wxCheckBox( this, ID_POSWIDTH3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox2912, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_checkBox2913 = new wxCheckBox( this, ID_POSWIDTH4, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox2913, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_staticText2211 = new wxStaticText( this, wxID_ANY, wxT("Negative width"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2211->Wrap( -1 );
	gSizer2->Add( m_staticText2211, 0, wxALL, 5 );
	
	m_checkBox2914 = new wxCheckBox( this, ID_NEGWIDTH1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox2914, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_checkBox2915 = new wxCheckBox( this, ID_NEGWIDTH2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox2915, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_checkBox2916 = new wxCheckBox( this, ID_NEGWIDTH3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox2916, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_checkBox2917 = new wxCheckBox( this, ID_NEGWIDTH4, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox2917, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_staticText231 = new wxStaticText( this, wxID_ANY, wxT("CH(x+1)-CH(x) delay"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText231->Wrap( -1 );
	gSizer2->Add( m_staticText231, 0, wxALL, 5 );
	
	m_checkBox37 = new wxCheckBox( this, ID_CHNDELAY1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox37, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox38 = new wxCheckBox( this, ID_CHNDELAY2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox38, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox39 = new wxCheckBox( this, ID_CHNDELAY3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox39, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox40 = new wxCheckBox( this, ID_CHNDELAY4, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox40, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText901 = new wxStaticText( this, wxID_ANY, wxT("Horizontal slice"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText901->Wrap( -1 );
	gSizer2->Add( m_staticText901, 0, wxALL, 5 );
	
	m_checkBox78 = new wxCheckBox( this, ID_HS1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox78, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox79 = new wxCheckBox( this, ID_HS2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox79, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox80 = new wxCheckBox( this, ID_HS3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox80, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_checkBox81 = new wxCheckBox( this, ID_HS4, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox81, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer14->Add( gSizer2, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_staticline1 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer14->Add( m_staticline1, 0, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer35;
	bSizer35 = new wxBoxSizer( wxHORIZONTAL );
	
	m_cbStat = new wxCheckBox( this, wxID_ANY, wxT("Display Statistics"), wxDefaultPosition, wxDefaultSize, 0 );
	m_cbStat->SetValue(true); 
	bSizer35->Add( m_cbStat, 1, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );
	
	m_cbHist = new wxCheckBox( this, wxID_ANY, wxT("Display Histograms"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer35->Add( m_cbHist, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer14->Add( bSizer35, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer25;
	bSizer25 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText27 = new wxStaticText( this, wxID_ANY, wxT("Accumulate"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText27->Wrap( -1 );
	bSizer25->Add( m_staticText27, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxLEFT, 5 );
	
	m_cbNAverage = new wxComboBox( this, wxID_ANY, wxT("1000"), wxDefaultPosition, wxSize( 100,-1 ), 0, NULL, wxTE_PROCESS_ENTER );
	m_cbNAverage->Append( wxT("10") );
	m_cbNAverage->Append( wxT("50") );
	m_cbNAverage->Append( wxT("100") );
	m_cbNAverage->Append( wxT("500") );
	m_cbNAverage->Append( wxT("1000") );
	m_cbNAverage->Append( wxT("5000") );
	m_cbNAverage->Append( wxT("10000") );
	m_cbNAverage->Append( wxT("50000") );
	m_cbNAverage->Append( wxT("1000000") );
	bSizer25->Add( m_cbNAverage, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText271 = new wxStaticText( this, wxID_ANY, wxT("measurements"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText271->Wrap( -1 );
	bSizer25->Add( m_staticText271, 1, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxRIGHT, 5 );
	
	
	bSizer14->Add( bSizer25, 0, wxEXPAND, 5 );
	
	m_button15 = new wxButton( this, wxID_ANY, wxT("Clear"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( m_button15, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_staticline2 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer14->Add( m_staticline2, 0, wxEXPAND | wxALL, 5 );
	
	m_cbIndicator = new wxCheckBox( this, wxID_ANY, wxT("Display Indicators"), wxDefaultPosition, wxDefaultSize, 0 );
	m_cbIndicator->SetValue(true); 
	bSizer14->Add( m_cbIndicator, 0, wxALL, 5 );
	
	m_staticline21 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer14->Add( m_staticline21, 0, wxEXPAND | wxALL, 5 );
	
	m_button11 = new wxButton( this, wxID_ANY, wxT("Cl&ose"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( m_button11, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL|wxALL, 10 );
	
	
	this->SetSizer( bSizer14 );
	this->Layout();
	bSizer14->Fit( this );
	
	// Connect Events
	m_checkBox9->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox10->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox11->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox12->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox13->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox14->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox15->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox16->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox17->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox18->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox19->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox20->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox74->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox75->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox76->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox77->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox82->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox83->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox84->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox85->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox21->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox22->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox23->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox24->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox25->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox26->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox27->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox28->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox29->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox30->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox31->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox32->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox33->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox34->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox35->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox36->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox291->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox2911->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox2912->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox2913->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox2914->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox2915->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox2916->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox2917->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox37->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox38->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox39->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox40->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox78->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox79->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox80->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox81->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_cbStat->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnStat ), NULL, this );
	m_cbHist->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnHist ), NULL, this );
	m_cbNAverage->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( MeasureDialog_fb::OnStatNAverage ), NULL, this );
	m_cbNAverage->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MeasureDialog_fb::OnStatNAverage ), NULL, this );
	m_button15->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnStatReset ), NULL, this );
	m_cbIndicator->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnIndicator ), NULL, this );
	m_button11->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnClose ), NULL, this );
}

MeasureDialog_fb::~MeasureDialog_fb()
{
	// Disconnect Events
	m_checkBox9->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox10->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox11->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox12->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox13->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox14->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox15->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox16->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox17->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox18->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox19->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox20->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox74->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox75->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox76->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox77->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox82->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox83->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox84->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox85->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox21->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox22->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox23->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox24->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox25->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox26->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox27->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox28->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox29->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox30->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox31->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox32->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox33->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox34->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox35->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox36->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox291->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox2911->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox2912->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox2913->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox2914->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox2915->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox2916->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox2917->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox37->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox38->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox39->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox40->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox78->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox79->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox80->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_checkBox81->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnButton ), NULL, this );
	m_cbStat->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnStat ), NULL, this );
	m_cbHist->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnHist ), NULL, this );
	m_cbNAverage->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( MeasureDialog_fb::OnStatNAverage ), NULL, this );
	m_cbNAverage->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MeasureDialog_fb::OnStatNAverage ), NULL, this );
	m_button15->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnStatReset ), NULL, this );
	m_cbIndicator->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnIndicator ), NULL, this );
	m_button11->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MeasureDialog_fb::OnClose ), NULL, this );
	
}

TriggerDialog_fb::TriggerDialog_fb( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer35;
	bSizer35 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("CH1"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticText12->Wrap( -1 );
	m_staticText12->SetFont( wxFont( 16, 74, 90, 90, false, wxEmptyString ) );
	m_staticText12->SetBackgroundColour( wxColour( 255, 255, 0 ) );
	
	bSizer35->Add( m_staticText12, 1, wxALIGN_CENTER|wxLEFT|wxRIGHT|wxTOP, 4 );
	
	m_staticText13 = new wxStaticText( this, wxID_ANY, wxT("CH2"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticText13->Wrap( -1 );
	m_staticText13->SetFont( wxFont( 16, 74, 90, 90, false, wxEmptyString ) );
	m_staticText13->SetBackgroundColour( wxColour( 170, 170, 255 ) );
	
	bSizer35->Add( m_staticText13, 1, wxALIGN_CENTER|wxLEFT|wxRIGHT|wxTOP, 4 );
	
	m_staticText14 = new wxStaticText( this, wxID_ANY, wxT("CH3"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticText14->Wrap( -1 );
	m_staticText14->SetFont( wxFont( 16, 74, 90, 90, false, wxEmptyString ) );
	m_staticText14->SetBackgroundColour( wxColour( 255, 170, 170 ) );
	
	bSizer35->Add( m_staticText14, 1, wxALIGN_CENTER|wxLEFT|wxRIGHT|wxTOP, 4 );
	
	m_staticText15 = new wxStaticText( this, wxID_ANY, wxT("CH4"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticText15->Wrap( -1 );
	m_staticText15->SetFont( wxFont( 16, 74, 90, 90, false, wxEmptyString ) );
	m_staticText15->SetBackgroundColour( wxColour( 170, 255, 170 ) );
	
	bSizer35->Add( m_staticText15, 1, wxALIGN_CENTER|wxLEFT|wxRIGHT|wxTOP, 4 );
	
	m_staticText16 = new wxStaticText( this, wxID_ANY, wxT("EXT"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticText16->Wrap( -1 );
	m_staticText16->SetFont( wxFont( 16, 74, 90, 90, false, wxEmptyString ) );
	m_staticText16->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_GRAYTEXT ) );
	
	bSizer35->Add( m_staticText16, 1, wxALIGN_CENTER|wxLEFT|wxRIGHT|wxTOP, 4 );
	
	
	bSizer14->Add( bSizer35, 1, wxBOTTOM|wxEXPAND, 5 );
	
	m_staticline11 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer14->Add( m_staticline11, 0, wxEXPAND, 5 );
	
	m_staticText771 = new wxStaticText( this, wxID_ANY, wxT("Trigger logic"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText771->Wrap( -1 );
	bSizer14->Add( m_staticText771, 0, wxALIGN_CENTER|wxALL, 5 );
	
	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer( wxHORIZONTAL );
	
	m_cbOR1 = new wxCheckBox( this, ID_OR1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer36->Add( m_cbOR1, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText17 = new wxStaticText( this, wxID_ANY, wxT("OR"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticText17->Wrap( -1 );
	bSizer36->Add( m_staticText17, 1, wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL|wxTOP|wxBOTTOM, 5 );
	
	m_cbOR2 = new wxCheckBox( this, ID_OR2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer36->Add( m_cbOR2, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText171 = new wxStaticText( this, wxID_ANY, wxT("OR"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticText171->Wrap( -1 );
	bSizer36->Add( m_staticText171, 1, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM, 5 );
	
	m_cbOR3 = new wxCheckBox( this, ID_OR3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer36->Add( m_cbOR3, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText172 = new wxStaticText( this, wxID_ANY, wxT("OR"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticText172->Wrap( -1 );
	bSizer36->Add( m_staticText172, 1, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM, 5 );
	
	m_cbOR4 = new wxCheckBox( this, ID_OR4, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer36->Add( m_cbOR4, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText173 = new wxStaticText( this, wxID_ANY, wxT("OR"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticText173->Wrap( -1 );
	bSizer36->Add( m_staticText173, 1, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM, 5 );
	
	m_cbOREXT = new wxCheckBox( this, ID_OREXT, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer36->Add( m_cbOREXT, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer14->Add( bSizer36, 1, wxEXPAND|wxRIGHT|wxLEFT, 16 );
	
	m_staticText84 = new wxStaticText( this, wxID_ANY, wxT("- OR -"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticText84->Wrap( -1 );
	bSizer14->Add( m_staticText84, 0, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer37;
	bSizer37 = new wxBoxSizer( wxHORIZONTAL );
	
	m_cbAND1 = new wxCheckBox( this, ID_AND1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer37->Add( m_cbAND1, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText18 = new wxStaticText( this, wxID_ANY, wxT("AND"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticText18->Wrap( -1 );
	bSizer37->Add( m_staticText18, 1, wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL|wxTOP|wxBOTTOM, 5 );
	
	m_cbAND2 = new wxCheckBox( this, ID_AND2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer37->Add( m_cbAND2, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText181 = new wxStaticText( this, wxID_ANY, wxT("AND"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticText181->Wrap( -1 );
	bSizer37->Add( m_staticText181, 1, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM, 5 );
	
	m_cbAND3 = new wxCheckBox( this, ID_AND3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer37->Add( m_cbAND3, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText182 = new wxStaticText( this, wxID_ANY, wxT("AND"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticText182->Wrap( -1 );
	bSizer37->Add( m_staticText182, 1, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM, 5 );
	
	m_cbAND4 = new wxCheckBox( this, ID_AND4, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer37->Add( m_cbAND4, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText183 = new wxStaticText( this, wxID_ANY, wxT("AND"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticText183->Wrap( -1 );
	bSizer37->Add( m_staticText183, 1, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM, 5 );
	
	m_cbANDEXT = new wxCheckBox( this, ID_ANDEXT, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer37->Add( m_cbANDEXT, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer14->Add( bSizer37, 1, wxEXPAND|wxRIGHT|wxLEFT, 16 );
	
	m_cbTrans = new wxCheckBox( this, ID_TRANS, wxT("Enable Transparent Trigger"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( m_cbTrans, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_staticline10 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer14->Add( m_staticline10, 0, wxEXPAND, 5 );
	
	m_staticText77 = new wxStaticText( this, wxID_ANY, wxT("Trigger level"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText77->Wrap( -1 );
	bSizer14->Add( m_staticText77, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );
	
	wxBoxSizer* bSizer33;
	bSizer33 = new wxBoxSizer( wxHORIZONTAL );
	
	m_tbLevel1 = new wxTextCtrl( this, ID_LEVEL1, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), wxTE_PROCESS_ENTER );
	bSizer33->Add( m_tbLevel1, 1, wxALL, 5 );
	
	m_tbLevel2 = new wxTextCtrl( this, ID_LEVEL2, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), wxTE_PROCESS_ENTER );
	bSizer33->Add( m_tbLevel2, 1, wxALL, 5 );
	
	m_tbLevel3 = new wxTextCtrl( this, ID_LEVEL3, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), wxTE_PROCESS_ENTER );
	bSizer33->Add( m_tbLevel3, 1, wxALL, 5 );
	
	m_tbLevel4 = new wxTextCtrl( this, ID_LEVEL4, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), wxTE_PROCESS_ENTER );
	bSizer33->Add( m_tbLevel4, 1, wxALL, 5 );
	
	m_staticText78 = new wxStaticText( this, wxID_ANY, wxT("Volt"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText78->Wrap( -1 );
	bSizer33->Add( m_staticText78, 1, wxALIGN_CENTER|wxALL, 5 );
	
	
	bSizer14->Add( bSizer33, 1, wxEXPAND, 5 );
	
	m_staticline25 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer14->Add( m_staticline25, 0, wxEXPAND, 5 );
	
	m_button11 = new wxButton( this, wxID_ANY, wxT("Cl&ose"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( m_button11, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL|wxALL, 10 );
	
	
	this->SetSizer( bSizer14 );
	this->Layout();
	bSizer14->Fit( this );
	
	// Connect Events
	m_cbOR1->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( TriggerDialog_fb::OnButton ), NULL, this );
	m_cbOR2->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( TriggerDialog_fb::OnButton ), NULL, this );
	m_cbOR3->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( TriggerDialog_fb::OnButton ), NULL, this );
	m_cbOR4->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( TriggerDialog_fb::OnButton ), NULL, this );
	m_cbOREXT->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( TriggerDialog_fb::OnButton ), NULL, this );
	m_cbAND1->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( TriggerDialog_fb::OnButton ), NULL, this );
	m_cbAND2->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( TriggerDialog_fb::OnButton ), NULL, this );
	m_cbAND3->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( TriggerDialog_fb::OnButton ), NULL, this );
	m_cbAND4->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( TriggerDialog_fb::OnButton ), NULL, this );
	m_cbANDEXT->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( TriggerDialog_fb::OnButton ), NULL, this );
	m_cbTrans->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( TriggerDialog_fb::OnButton ), NULL, this );
	m_tbLevel1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( TriggerDialog_fb::OnTriggerLevel ), NULL, this );
	m_tbLevel1->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( TriggerDialog_fb::OnTriggerLevel ), NULL, this );
	m_tbLevel2->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( TriggerDialog_fb::OnTriggerLevel ), NULL, this );
	m_tbLevel2->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( TriggerDialog_fb::OnTriggerLevel ), NULL, this );
	m_tbLevel3->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( TriggerDialog_fb::OnTriggerLevel ), NULL, this );
	m_tbLevel3->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( TriggerDialog_fb::OnTriggerLevel ), NULL, this );
	m_tbLevel4->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( TriggerDialog_fb::OnTriggerLevel ), NULL, this );
	m_tbLevel4->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( TriggerDialog_fb::OnTriggerLevel ), NULL, this );
	m_button11->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( TriggerDialog_fb::OnClose ), NULL, this );
}

TriggerDialog_fb::~TriggerDialog_fb()
{
	// Disconnect Events
	m_cbOR1->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( TriggerDialog_fb::OnButton ), NULL, this );
	m_cbOR2->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( TriggerDialog_fb::OnButton ), NULL, this );
	m_cbOR3->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( TriggerDialog_fb::OnButton ), NULL, this );
	m_cbOR4->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( TriggerDialog_fb::OnButton ), NULL, this );
	m_cbOREXT->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( TriggerDialog_fb::OnButton ), NULL, this );
	m_cbAND1->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( TriggerDialog_fb::OnButton ), NULL, this );
	m_cbAND2->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( TriggerDialog_fb::OnButton ), NULL, this );
	m_cbAND3->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( TriggerDialog_fb::OnButton ), NULL, this );
	m_cbAND4->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( TriggerDialog_fb::OnButton ), NULL, this );
	m_cbANDEXT->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( TriggerDialog_fb::OnButton ), NULL, this );
	m_cbTrans->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( TriggerDialog_fb::OnButton ), NULL, this );
	m_tbLevel1->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( TriggerDialog_fb::OnTriggerLevel ), NULL, this );
	m_tbLevel1->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( TriggerDialog_fb::OnTriggerLevel ), NULL, this );
	m_tbLevel2->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( TriggerDialog_fb::OnTriggerLevel ), NULL, this );
	m_tbLevel2->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( TriggerDialog_fb::OnTriggerLevel ), NULL, this );
	m_tbLevel3->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( TriggerDialog_fb::OnTriggerLevel ), NULL, this );
	m_tbLevel3->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( TriggerDialog_fb::OnTriggerLevel ), NULL, this );
	m_tbLevel4->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( TriggerDialog_fb::OnTriggerLevel ), NULL, this );
	m_tbLevel4->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( TriggerDialog_fb::OnTriggerLevel ), NULL, this );
	m_button11->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( TriggerDialog_fb::OnClose ), NULL, this );
	
}

AboutDialog_fb::AboutDialog_fb( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 74, 90, 90, false, wxEmptyString ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );
	
	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText18 = new wxStaticText( this, wxID_ANY, wxT("DRS Oscilloscope"), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_staticText18->Wrap( -1 );
	m_staticText18->SetFont( wxFont( 20, 74, 90, 90, false, wxEmptyString ) );
	
	bSizer17->Add( m_staticText18, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 10 );
	
	m_stVersion = new wxStaticText( this, wxID_ANY, wxT("Version 0.0.0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stVersion->Wrap( -1 );
	m_stVersion->SetFont( wxFont( 16, 74, 90, 90, false, wxEmptyString ) );
	
	bSizer17->Add( m_stVersion, 0, wxALIGN_CENTER_HORIZONTAL|wxRIGHT|wxLEFT, 5 );
	
	m_stBuild = new wxStaticText( this, wxID_ANY, wxT("Build 0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stBuild->Wrap( -1 );
	m_stBuild->SetFont( wxFont( 16, 74, 90, 90, false, wxEmptyString ) );
	
	bSizer17->Add( m_stBuild, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_staticText20 = new wxStaticText( this, wxID_ANY, wxT("Stefan Ritt"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText20->Wrap( -1 );
	m_staticText20->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 74, 90, 90, false, wxEmptyString ) );
	
	bSizer17->Add( m_staticText20, 0, wxALIGN_CENTER_HORIZONTAL|wxTOP|wxRIGHT|wxLEFT, 5 );
	
	m_staticText21 = new wxStaticText( this, wxID_ANY, wxT("Paul Scherrer Institute"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	m_staticText21->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 74, 90, 90, false, wxEmptyString ) );
	
	bSizer17->Add( m_staticText21, 0, wxALIGN_CENTER_HORIZONTAL|wxBOTTOM|wxRIGHT|wxLEFT, 5 );
	
	wxBoxSizer* bSizer38;
	bSizer38 = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizer38->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	bSizer38->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	bSizer38->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_bitmap1 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( drsosc_xpm ), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	bSizer38->Add( m_bitmap1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 10 );
	
	
	bSizer38->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	bSizer38->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	bSizer38->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	bSizer17->Add( bSizer38, 1, wxEXPAND, 5 );
	
	m_staticText23 = new wxStaticText( this, wxID_ANY, wxT("For updates please visit"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	m_staticText23->SetFont( wxFont( 18, 74, 90, 90, false, wxEmptyString ) );
	
	bSizer17->Add( m_staticText23, 0, wxALIGN_CENTER_HORIZONTAL|wxRIGHT|wxLEFT, 5 );
	
	m_hyperlink1 = new wxHyperlinkCtrl( this, wxID_ANY, wxT("http://www.psi.ch/drs"), wxT("http://www.psi.ch/drs"), wxDefaultPosition, wxDefaultSize, wxHL_DEFAULT_STYLE );
	m_hyperlink1->SetFont( wxFont( 18, 74, 90, 90, false, wxEmptyString ) );
	
	bSizer17->Add( m_hyperlink1, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );
	
	m_button12 = new wxButton( this, wxID_OK, wxT("Ok"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button12->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 74, 90, 90, false, wxEmptyString ) );
	
	bSizer17->Add( m_button12, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 15 );
	
	
	bSizer15->Add( bSizer17, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	this->SetSizer( bSizer15 );
	this->Layout();
	bSizer15->Fit( this );
}

AboutDialog_fb::~AboutDialog_fb()
{
}

InfoDialog_fb::InfoDialog_fb( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );
	
	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxVERTICAL );
	
	wxGridSizer* gSizer2;
	gSizer2 = new wxGridSizer( 9, 2, 0, 0 );
	
	m_staticText45 = new wxStaticText( this, wxID_ANY, wxT("Board type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText45->Wrap( -1 );
	gSizer2->Add( m_staticText45, 0, wxALL, 5 );
	
	m_stBoardType = new wxStaticText( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stBoardType->Wrap( -1 );
	gSizer2->Add( m_stBoardType, 0, wxALL, 5 );
	
	m_staticText47 = new wxStaticText( this, wxID_ANY, wxT("DRS type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText47->Wrap( -1 );
	gSizer2->Add( m_staticText47, 0, wxALL, 5 );
	
	m_stDRSType = new wxStaticText( this, wxID_ANY, wxT("DRS4"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stDRSType->Wrap( -1 );
	gSizer2->Add( m_stDRSType, 0, wxALL, 5 );
	
	m_staticText49 = new wxStaticText( this, wxID_ANY, wxT("Serial number:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText49->Wrap( -1 );
	gSizer2->Add( m_staticText49, 0, wxALL, 5 );
	
	m_stSerialNumber = new wxStaticText( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stSerialNumber->Wrap( -1 );
	gSizer2->Add( m_stSerialNumber, 0, wxALL, 5 );
	
	m_staticText51 = new wxStaticText( this, wxID_ANY, wxT("Firmware revision:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText51->Wrap( -1 );
	gSizer2->Add( m_staticText51, 0, wxALL, 5 );
	
	m_stFirmwareRevision = new wxStaticText( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stFirmwareRevision->Wrap( -1 );
	gSizer2->Add( m_stFirmwareRevision, 0, wxALL, 5 );
	
	m_staticText53 = new wxStaticText( this, wxID_ANY, wxT("Temperature:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText53->Wrap( -1 );
	gSizer2->Add( m_staticText53, 0, wxALL, 5 );
	
	m_stTemperature = new wxStaticText( this, wxID_ANY, wxT("0 C"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stTemperature->Wrap( -1 );
	gSizer2->Add( m_stTemperature, 0, wxALL, 5 );
	
	m_staticText55 = new wxStaticText( this, wxID_ANY, wxT("Input range:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText55->Wrap( -1 );
	gSizer2->Add( m_staticText55, 0, wxALL, 5 );
	
	m_stInputRange = new wxStaticText( this, wxID_ANY, wxT("-0.5V...0.5V"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stInputRange->Wrap( -1 );
	gSizer2->Add( m_stInputRange, 0, wxALL, 5 );
	
	m_staticText57 = new wxStaticText( this, wxID_ANY, wxT("Calibrated range:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText57->Wrap( -1 );
	gSizer2->Add( m_staticText57, 0, wxALL, 5 );
	
	m_stCalibratedRange = new wxStaticText( this, wxID_ANY, wxT("-0.5V...0.5V"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stCalibratedRange->Wrap( -1 );
	gSizer2->Add( m_stCalibratedRange, 0, wxALL, 5 );
	
	m_staticText59 = new wxStaticText( this, wxID_ANY, wxT("Calibrated frequency:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText59->Wrap( -1 );
	gSizer2->Add( m_staticText59, 0, wxALL, 5 );
	
	m_stCalibratedFrequency = new wxStaticText( this, wxID_ANY, wxT("5.000 GSPS"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stCalibratedFrequency->Wrap( -1 );
	gSizer2->Add( m_stCalibratedFrequency, 0, wxALL, 5 );
	
	m_staticText61 = new wxStaticText( this, wxID_ANY, wxT("Current frequency:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText61->Wrap( -1 );
	gSizer2->Add( m_staticText61, 0, wxALL, 5 );
	
	m_stFrequency = new wxStaticText( this, wxID_ANY, wxT("5.000 GSPS"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stFrequency->Wrap( -1 );
	gSizer2->Add( m_stFrequency, 0, wxALL, 5 );
	
	
	bSizer15->Add( gSizer2, 1, wxEXPAND, 5 );
	
	m_button12 = new wxButton( this, wxID_OK, wxT("Ok"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( m_button12, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 15 );
	
	
	this->SetSizer( bSizer15 );
	this->Layout();
	bSizer15->Fit( this );
}

InfoDialog_fb::~InfoDialog_fb()
{
}
