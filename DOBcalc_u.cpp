//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "DOBcalc_u.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	//hide the labels
	Label2->Visible = false;
	Label4->Visible = false;
	Label6->Visible = false;
	lblWeekDay->Visible = false;
	lblDays->Visible = false;
	lblHours->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnCalculateClick(TObject *Sender)
{
/*
My Birthday:
- What day
- how many days do I live?     (today!)
- How many hours do I live?
- How many times did you have birthday on that week-day as you were born?
*/
	AnsiString dateS = edtDOBy->Text +"/"+edtDOBm->Text+"/"+edtDOBd->Text;
	// Validate that the "/"-char is present on the correct positions!
	if ((dateS[5] == '/') && (dateS[8] == '/'))
	{
		DOB = StrToDate(dateS);    // class data member!

		float numDays = double(Now()) - double(DOB);   // float doesn't work!

		lblWeekDay->Caption = FormatDateTime("dddd", DOB);
		lblDays->Caption = FormatFloat("0.0", numDays) + " days";
		lblHours->Caption = FloatToStrF(numDays * 24, ffNumber, 8, 0) + " hours";
	}
	else
	{
		MessageDlg("The DOB is in a wrong format!", mtError, TMsgDlgButtons()<<mbOK, 0);
		edtDOBy->SetFocus();
	}
    //show labels
	Label2->Visible = true;
	Label4->Visible = true;
	Label6->Visible = true;
	lblWeekDay->Visible = true;
	lblDays->Visible = true;
	lblHours->Visible = true;
}
//---------------------------------------------------------------------------

