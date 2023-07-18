//---------------------------------------------------------------------------

#ifndef DOBcalc_uH
#define DOBcalc_uH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TEdit *edtDOBy;
	TButton *btnCalculate;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *lblWeekDay;
	TLabel *Label4;
	TLabel *lblDays;
	TLabel *Label6;
	TLabel *lblHours;
	TEdit *edtDOBm;
	TEdit *edtDOBd;
	TLabel *Label5;
	void __fastcall btnCalculateClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
  TDate DOB;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
