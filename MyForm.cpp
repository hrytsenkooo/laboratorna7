#include "MyForm.h"
#include <iostream>
#include <cmath>
#include "class.h"

using namespace System::Windows::Forms;
using namespace System;


[STAThreadAttribute]

int main(array<String^>^ args) {
    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();
    winforms::MyForm form;
    Application::Run(% form);
}


void winforms::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
    try {
        double x1 = Convert::ToDouble(textBox1->Text);
        double x2 = Convert::ToDouble(textBox2->Text);

        Function f1(x1);
        Function f2(x2);

        double result1 = f1.calculate();
        double result2 = f2.calculate();

        label2->Text = result1.ToString();
        label3->Text = result2.ToString();

        label7->Text = "Entered equation for F(x1): ln(" + x1 + ") / ln(" + x1 + "-2)";
        label8->Text = "Entered equation for F(x2): ln(" + x2 + ") / ln(" + x2 + "-2)";

        // Set the font style to bold
        label7->Font = gcnew System::Drawing::Font(label7->Font->FontFamily, label7->Font->Size, FontStyle::Bold);
        label8->Font = gcnew System::Drawing::Font(label8->Font->FontFamily, label8->Font->Size, FontStyle::Bold);

        label2->Text = "Result for x1: " + result1.ToString();
        label3->Text = "Result for x2: " + result2.ToString();

        if (result1 > result2) {
            label4->Text = "F(x1) > F(x2)";
        }
        else if (result1 < result2) {
            label4->Text = "F(x1) < F(x2)";
        }
        else {
            label4->Text = "F(x1) = F(x2)";
        }

    }
    catch (System::FormatException^ ex) {
        MessageBox::Show("Invalid input. Please enter a valid number.");
    }
    catch (System::ArgumentException^ ex) {
        MessageBox::Show(ex->Message);
    }
    catch (std::invalid_argument const& ex) {
        MessageBox::Show(gcnew System::String(ex.what()));
    }
}
