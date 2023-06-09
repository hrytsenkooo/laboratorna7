#pragma once

namespace winforms {

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
            //TODO: Add constructor code
            //

            // Attach the button click event handler
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
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
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;
    protected:

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(283, 215);
            this->button1->Margin = System::Windows::Forms::Padding(4);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(100, 28);
            this->button1->TabIndex = 0;
            this->button1->Text = L"Compare";
            this->button1->UseVisualStyleBackColor = true;
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(173, 55);
            this->textBox1->Margin = System::Windows::Forms::Padding(4);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(132, 22);
            this->textBox1->TabIndex = 1;
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(173, 90);
            this->textBox2->Margin = System::Windows::Forms::Padding(4);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(132, 22);
            this->textBox2->TabIndex = 2;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1->ForeColor = System::Drawing::Color::Black;
            this->label1->Location = System::Drawing::Point(178, 8);
            this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(322, 29);
            this->label1->TabIndex = 3;
            this->label1->Text = L"Function: f(x) = lnx / ln(x-2)";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(320, 58);
            this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(0, 16);
            this->label2->TabIndex = 4;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(320, 96);
            this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(0, 16);
            this->label3->TabIndex = 5;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(290, 188);
            this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(0, 16);
            this->label4->TabIndex = 6;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(89, 58);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(60, 16);
            this->label5->TabIndex = 7;
            this->label5->Text = L"Enter x1: ";
            this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(89, 90);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(60, 16);
            this->label6->TabIndex = 8;
            this->label6->Text = L"Enter x2: ";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(90, 126);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(0, 16);
            this->label7->TabIndex = 9;
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(90, 158);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(0, 16);
            this->label8->TabIndex = 10;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->ClientSize = System::Drawing::Size(659, 269);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label8);
            this->Margin = System::Windows::Forms::Padding(4);
            this->Name = L"MyForm";
            this->Text = L"Function Calculator";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:
        System::Windows::Forms::Button^ button1;
        System::Windows::Forms::TextBox^ textBox1;
        System::Windows::Forms::TextBox^ textBox2;
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::Label^ label4;
        System::Windows::Forms::Label^ label7;
        System::Windows::Forms::Label^ label8;

        void button1_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}
