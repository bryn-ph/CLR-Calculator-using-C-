#pragma once

namespace CalculatorTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnSpace;
	protected:

	private: System::Windows::Forms::TextBox^ txtDisplay;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Button^ btnClearEntry;
	protected:



	private: System::Windows::Forms::Button^ btnPlusOrMinus;

	private: System::Windows::Forms::Button^ btnDigit7;
	private: System::Windows::Forms::Button^ btnDigit8;
	private: System::Windows::Forms::Button^ btnDigit9;
	private: System::Windows::Forms::Button^ btnPlus;




	private: System::Windows::Forms::Button^ btnDigit4;
	private: System::Windows::Forms::Button^ btnDigit5;
	private: System::Windows::Forms::Button^ btnDigit6;
	private: System::Windows::Forms::Button^ btnMinus;





	private: System::Windows::Forms::Button^ btnDigit1;
	private: System::Windows::Forms::Button^ btnDigit2;
	private: System::Windows::Forms::Button^ btnDigit3;
	private: System::Windows::Forms::Button^ btnMultiply;




	private: System::Windows::Forms::Button^ btnDigit0;
	private: System::Windows::Forms::Button^ btnDot;
	private: System::Windows::Forms::Button^ btnEquals;
	private: System::Windows::Forms::Button^ btnDivide;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnSpace = (gcnew System::Windows::Forms::Button());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnClearEntry = (gcnew System::Windows::Forms::Button());
			this->btnPlusOrMinus = (gcnew System::Windows::Forms::Button());
			this->btnDigit7 = (gcnew System::Windows::Forms::Button());
			this->btnDigit8 = (gcnew System::Windows::Forms::Button());
			this->btnDigit9 = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btnDigit4 = (gcnew System::Windows::Forms::Button());
			this->btnDigit5 = (gcnew System::Windows::Forms::Button());
			this->btnDigit6 = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->btnDigit1 = (gcnew System::Windows::Forms::Button());
			this->btnDigit2 = (gcnew System::Windows::Forms::Button());
			this->btnDigit3 = (gcnew System::Windows::Forms::Button());
			this->btnMultiply = (gcnew System::Windows::Forms::Button());
			this->btnDigit0 = (gcnew System::Windows::Forms::Button());
			this->btnDot = (gcnew System::Windows::Forms::Button());
			this->btnEquals = (gcnew System::Windows::Forms::Button());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnSpace
			// 
			this->btnSpace->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnSpace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSpace->Location = System::Drawing::Point(53, 151);
			this->btnSpace->Name = L"btnSpace";
			this->btnSpace->Size = System::Drawing::Size(155, 164);
			this->btnSpace->TabIndex = 0;
			this->btnSpace->Text = L"DEL";
			this->btnSpace->UseVisualStyleBackColor = false;
			this->btnSpace->Click += gcnew System::EventHandler(this, &MyForm::btnSpace_Click);
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(36, 49);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(708, 63);
			this->txtDisplay->TabIndex = 1;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtDisplay->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(224, 151);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(155, 164);
			this->btnClear->TabIndex = 0;
			this->btnClear->Text = L"C";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
			// 
			// btnClearEntry
			// 
			this->btnClearEntry->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnClearEntry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClearEntry->Location = System::Drawing::Point(397, 151);
			this->btnClearEntry->Name = L"btnClearEntry";
			this->btnClearEntry->Size = System::Drawing::Size(155, 164);
			this->btnClearEntry->TabIndex = 0;
			this->btnClearEntry->Text = L"CE";
			this->btnClearEntry->UseVisualStyleBackColor = false;
			this->btnClearEntry->Click += gcnew System::EventHandler(this, &MyForm::btnClearEntry_Click);
			// 
			// btnPlusOrMinus
			// 
			this->btnPlusOrMinus->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnPlusOrMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlusOrMinus->Location = System::Drawing::Point(568, 151);
			this->btnPlusOrMinus->Name = L"btnPlusOrMinus";
			this->btnPlusOrMinus->Size = System::Drawing::Size(155, 164);
			this->btnPlusOrMinus->TabIndex = 0;
			this->btnPlusOrMinus->Text = L"±";
			this->btnPlusOrMinus->UseVisualStyleBackColor = false;
			this->btnPlusOrMinus->Click += gcnew System::EventHandler(this, &MyForm::btnPlusOrMinus_Click);
			// 
			// btnDigit7
			// 
			this->btnDigit7->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btnDigit7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDigit7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit7->Location = System::Drawing::Point(53, 321);
			this->btnDigit7->Name = L"btnDigit7";
			this->btnDigit7->Size = System::Drawing::Size(155, 164);
			this->btnDigit7->TabIndex = 0;
			this->btnDigit7->Text = L"7";
			this->btnDigit7->UseVisualStyleBackColor = false;
			this->btnDigit7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit8
			// 
			this->btnDigit8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDigit8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit8->Location = System::Drawing::Point(224, 321);
			this->btnDigit8->Name = L"btnDigit8";
			this->btnDigit8->Size = System::Drawing::Size(155, 164);
			this->btnDigit8->TabIndex = 0;
			this->btnDigit8->Text = L"8";
			this->btnDigit8->UseVisualStyleBackColor = false;
			this->btnDigit8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit9
			// 
			this->btnDigit9->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDigit9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit9->Location = System::Drawing::Point(397, 321);
			this->btnDigit9->Name = L"btnDigit9";
			this->btnDigit9->Size = System::Drawing::Size(155, 164);
			this->btnDigit9->TabIndex = 0;
			this->btnDigit9->Text = L"9";
			this->btnDigit9->UseVisualStyleBackColor = false;
			this->btnDigit9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnPlus
			// 
			this->btnPlus->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlus->Location = System::Drawing::Point(568, 321);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(155, 164);
			this->btnPlus->TabIndex = 0;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = false;
			this->btnPlus->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnDigit4
			// 
			this->btnDigit4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDigit4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit4->Location = System::Drawing::Point(53, 491);
			this->btnDigit4->Name = L"btnDigit4";
			this->btnDigit4->Size = System::Drawing::Size(155, 164);
			this->btnDigit4->TabIndex = 0;
			this->btnDigit4->Text = L"4";
			this->btnDigit4->UseVisualStyleBackColor = false;
			this->btnDigit4->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit5
			// 
			this->btnDigit5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDigit5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit5->Location = System::Drawing::Point(224, 491);
			this->btnDigit5->Name = L"btnDigit5";
			this->btnDigit5->Size = System::Drawing::Size(155, 164);
			this->btnDigit5->TabIndex = 0;
			this->btnDigit5->Text = L"5";
			this->btnDigit5->UseVisualStyleBackColor = false;
			this->btnDigit5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit6
			// 
			this->btnDigit6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDigit6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit6->Location = System::Drawing::Point(397, 491);
			this->btnDigit6->Name = L"btnDigit6";
			this->btnDigit6->Size = System::Drawing::Size(155, 164);
			this->btnDigit6->TabIndex = 0;
			this->btnDigit6->Text = L"6";
			this->btnDigit6->UseVisualStyleBackColor = false;
			this->btnDigit6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnMinus
			// 
			this->btnMinus->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMinus->Location = System::Drawing::Point(568, 491);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(155, 164);
			this->btnMinus->TabIndex = 0;
			this->btnMinus->Text = L"-";
			this->btnMinus->UseVisualStyleBackColor = false;
			this->btnMinus->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnDigit1
			// 
			this->btnDigit1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDigit1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit1->Location = System::Drawing::Point(53, 661);
			this->btnDigit1->Name = L"btnDigit1";
			this->btnDigit1->Size = System::Drawing::Size(155, 164);
			this->btnDigit1->TabIndex = 0;
			this->btnDigit1->Text = L" ";
			this->btnDigit1->UseVisualStyleBackColor = false;
			this->btnDigit1->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit2
			// 
			this->btnDigit2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDigit2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit2->Location = System::Drawing::Point(224, 661);
			this->btnDigit2->Name = L"btnDigit2";
			this->btnDigit2->Size = System::Drawing::Size(155, 164);
			this->btnDigit2->TabIndex = 0;
			this->btnDigit2->Text = L"2";
			this->btnDigit2->UseVisualStyleBackColor = false;
			this->btnDigit2->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit3
			// 
			this->btnDigit3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDigit3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit3->Location = System::Drawing::Point(397, 661);
			this->btnDigit3->Name = L"btnDigit3";
			this->btnDigit3->Size = System::Drawing::Size(155, 164);
			this->btnDigit3->TabIndex = 0;
			this->btnDigit3->Text = L"3";
			this->btnDigit3->UseVisualStyleBackColor = false;
			this->btnDigit3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnMultiply
			// 
			this->btnMultiply->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMultiply->Location = System::Drawing::Point(568, 661);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(155, 164);
			this->btnMultiply->TabIndex = 0;
			this->btnMultiply->Text = L"*";
			this->btnMultiply->UseVisualStyleBackColor = false;
			this->btnMultiply->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnDigit0
			// 
			this->btnDigit0->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDigit0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit0->Location = System::Drawing::Point(53, 831);
			this->btnDigit0->Name = L"btnDigit0";
			this->btnDigit0->Size = System::Drawing::Size(155, 164);
			this->btnDigit0->TabIndex = 0;
			this->btnDigit0->Text = L"0";
			this->btnDigit0->UseVisualStyleBackColor = false;
			this->btnDigit0->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDot
			// 
			this->btnDot->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDot->Location = System::Drawing::Point(224, 831);
			this->btnDot->Name = L"btnDot";
			this->btnDot->Size = System::Drawing::Size(155, 164);
			this->btnDot->TabIndex = 0;
			this->btnDot->Text = L".";
			this->btnDot->UseVisualStyleBackColor = false;
			this->btnDot->Click += gcnew System::EventHandler(this, &MyForm::btnDot_Click);
			// 
			// btnEquals
			// 
			this->btnEquals->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnEquals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEquals->Location = System::Drawing::Point(397, 831);
			this->btnEquals->Name = L"btnEquals";
			this->btnEquals->Size = System::Drawing::Size(155, 164);
			this->btnEquals->TabIndex = 0;
			this->btnEquals->Text = L"=";
			this->btnEquals->UseVisualStyleBackColor = false;
			this->btnEquals->Click += gcnew System::EventHandler(this, &MyForm::btnEquals_Click);
			// 
			// btnDivide
			// 
			this->btnDivide->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDivide->Location = System::Drawing::Point(568, 831);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(155, 164);
			this->btnDivide->TabIndex = 0;
			this->btnDivide->Text = L"/";
			this->btnDivide->UseVisualStyleBackColor = false;
			this->btnDivide->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(782, 1002);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->btnDivide);
			this->Controls->Add(this->btnMultiply);
			this->Controls->Add(this->btnMinus);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->btnPlusOrMinus);
			this->Controls->Add(this->btnEquals);
			this->Controls->Add(this->btnDigit3);
			this->Controls->Add(this->btnDigit6);
			this->Controls->Add(this->btnDigit9);
			this->Controls->Add(this->btnClearEntry);
			this->Controls->Add(this->btnDot);
			this->Controls->Add(this->btnDigit2);
			this->Controls->Add(this->btnDigit5);
			this->Controls->Add(this->btnDigit8);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnDigit0);
			this->Controls->Add(this->btnDigit1);
			this->Controls->Add(this->btnDigit4);
			this->Controls->Add(this->btnDigit7);
			this->Controls->Add(this->btnSpace);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstDigit, secondDigit, result;
		String^ operators;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast<Button^>(sender);

	if (txtDisplay->Text == "0")
	{
		txtDisplay->Text = Numbers->Text;
	}
	else
	{
		txtDisplay->Text = txtDisplay->Text + Numbers->Text;
	}
}
private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
	
	Button^ NumbersOp = safe_cast<Button^>(sender);
	firstDigit = Double::Parse(txtDisplay->Text);
	txtDisplay->Text += NumbersOp->Text;
	operators = NumbersOp->Text;

}
private: System::Void btnDot_Click(System::Object^ sender, System::EventArgs^ e) {

	if (!txtDisplay->Text->Contains ("."))
	{
		txtDisplay->Text = txtDisplay->Text + ".";
	}
}
private: System::Void btnEquals_Click(System::Object^ sender, System::EventArgs^ e) {

	secondDigit = Double::Parse(txtDisplay->Text->Substring(txtDisplay->Text->IndexOf(operators) + 1));

	if (operators == "+")
	{
		result = firstDigit + secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "-")
	{
		result = firstDigit - secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "*")
	{
		result = firstDigit * secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "/")
	{
		result = firstDigit / secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}

}
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "0";
}
private: System::Void btnClearEntry_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "0";
}
	private: System::Void btnPlusOrMinus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtDisplay->Text->Contains("-"))
		{
			txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
		}
		else
		{
			txtDisplay->Text = "-" + txtDisplay->Text;
		}
}
private: System::Void btnSpace_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Length > 0)
	{
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
	}
	if (txtDisplay->Text == "")
	{
		txtDisplay->Text = "0";
	}
}
};
}
