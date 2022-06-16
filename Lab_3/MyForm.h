#pragma once

namespace Lab3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ Sum;
	private: System::Windows::Forms::TextBox^ St;
	private: System::Windows::Forms::TextBox^ Sr;
	private: System::Windows::Forms::Button^ deposit;
	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



	protected:

	protected:


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Sum = (gcnew System::Windows::Forms::TextBox());
			this->St = (gcnew System::Windows::Forms::TextBox());
			this->Sr = (gcnew System::Windows::Forms::TextBox());
			this->deposit = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Sum
			// 
			this->Sum->Location = System::Drawing::Point(35, 29);
			this->Sum->Name = L"Sum";
			this->Sum->Size = System::Drawing::Size(152, 22);
			this->Sum->TabIndex = 0;
			this->Sum->Text = L"0";
			this->Sum->TextChanged += gcnew System::EventHandler(this, &MyForm::Sum_TextChanged);
			this->Sum->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Sum_KeyPress);
			// 
			// St
			// 
			this->St->Location = System::Drawing::Point(35, 129);
			this->St->Name = L"St";
			this->St->Size = System::Drawing::Size(152, 22);
			this->St->TabIndex = 1;
			this->St->Text = L"0";
			this->St->TextChanged += gcnew System::EventHandler(this, &MyForm::Sum_TextChanged);
			this->St->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Sum_KeyPress);
			// 
			// Sr
			// 
			this->Sr->Location = System::Drawing::Point(35, 80);
			this->Sr->Name = L"Sr";
			this->Sr->Size = System::Drawing::Size(152, 22);
			this->Sr->TabIndex = 2;
			this->Sr->Text = L"0";
			this->Sr->TextChanged += gcnew System::EventHandler(this, &MyForm::Sum_TextChanged);
			this->Sr->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Sum_KeyPress);
			// 
			// deposit
			// 
			this->deposit->Location = System::Drawing::Point(345, 24);
			this->deposit->Name = L"deposit";
			this->deposit->Size = System::Drawing::Size(121, 67);
			this->deposit->TabIndex = 3;
			this->deposit->Text = L"Calculate";
			this->deposit->UseVisualStyleBackColor = true;
			this->deposit->Click += gcnew System::EventHandler(this, &MyForm::deposit_Click);
			// 
			// exit
			// 
			this->exit->Location = System::Drawing::Point(345, 150);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(121, 60);
			this->exit->TabIndex = 4;
			this->exit->Text = L"EXIT";
			this->exit->UseVisualStyleBackColor = true;
			this->exit->Click += gcnew System::EventHandler(this, &MyForm::exit_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Сумма вклада";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(35, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Срок вклада (в днях)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(35, 109);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(214, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Процентная ставка (в годовых)";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(-2, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(864, 434);
			this->panel1->TabIndex = 8;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(501, 11);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(339, 400);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(860, 434);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->deposit);
			this->Controls->Add(this->Sr);
			this->Controls->Add(this->St);
			this->Controls->Add(this->Sum);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		private: System::Void Sum_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			if (Sum->Text->Length == 0 || Sr->Text->Length == 0 || St->Text->Length == 0)
				deposit->Enabled = false;
			else 
				deposit->Enabled = true;
		}
		private: System::Void Sum_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
				return;
			if (e->KeyChar == '.')
				e->KeyChar = ',';
			if (e->KeyChar == ',') {
				if (Sum->Text->IndexOf('.') != -1)
					e->Handled = true;
				return;
			}
			if (Char::IsControl(e->KeyChar)) {
				if (e->KeyChar == (char)Keys::Enter)
					deposit->Focus();
				return;
			}
			e->Handled = true;
		}
		private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}
		private: System::Void deposit_Click(System::Object^ sender, System::EventArgs^ e) {
			double s, sr, st;
			s = Convert::ToDouble(Sum->Text);
			sr = Convert::ToDouble(Sr->Text);
			st = Convert::ToDouble(St->Text);
			double D = s - (sr / 360) - (st / 100);
			MessageBox::Show("Доход по вкладу в банке равен " + D.ToString("n") + "руб.", "Калькультор дохода по вкладу", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		
		System::Drawing::Graphics^ MyGraphic = this->panel1->CreateGraphics();
		System::Drawing::Pen^ MyPen = gcnew System::Drawing::Pen(System::Drawing::Color::Red);
		
		int x = 0;
		int y = 0;
		while (y < 5000)
		{
			x = 0;
			while (x < 5000)
			{
				MyGraphic->DrawLine(MyPen, x, y, x + 20, y + 20);
				MyGraphic->DrawLine(MyPen, x + 20, y + 20, x + 40, y - 20);
				x +=40;
			}
			y += 20;
		}
	}
};
}