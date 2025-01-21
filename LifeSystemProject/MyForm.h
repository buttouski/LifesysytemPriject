#pragma once

namespace LifeSystemProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:
		MyForm(void)
		{
			InitializeComponent();
			
			timer->Enabled = true;
			DateTime now = DateTime::Now;
			
			//chart1 brain activity settings
			chart1->ChartAreas[0]->AxisY->Maximum = 100;
			chart1->ChartAreas[0]->AxisY->Minimum = -5;

			chart1->ChartAreas[0]->AxisX->LabelStyle->Format = "H:mm:ss";
			chart1->Series[0]->XValueType = ChartValueType::DateTime;

			chart1->ChartAreas[0]->AxisX->Minimum = now.ToOADate();
			chart1->ChartAreas[0]->AxisX->Maximum = now.AddMinutes(1).ToOADate();

			chart1->ChartAreas[0]->AxisX->IntervalType = DateTimeIntervalType::Seconds;
			chart1->ChartAreas[0]->AxisX->Interval = 8;

			//chart1 chss 
			chart1->Series[1]->XValueType = ChartValueType::DateTime;

			//chart1 Pulse 
			chart1->Series[2]->XValueType = ChartValueType::DateTime;

			//chart1 Breathe 
			chart1->Series[3]->XValueType = ChartValueType::DateTime;
		}
	
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::CheckBox^ checkBoxBreath;
	private: System::Windows::Forms::CheckBox^ checkBoxPulse;
	private: System::Windows::Forms::CheckBox^ checkBoxCHSS;
	private: System::Windows::Forms::CheckBox^ checkBoxbrain;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ kvtLabelCost;

	private: System::Windows::Forms::Label^ kvtLabel;
	private: System::Windows::Forms::Label^ oxygenLabelCost;





	private: System::Windows::Forms::Label^ oxygenLabel;
	private: System::Windows::Forms::Label^ O2LevelLabel;
	private: System::Windows::Forms::Label^ CO2LevelLabel;
	private: System::Windows::Forms::Label^ DiaLabel;


	private: System::Windows::Forms::Label^ SysLabel;



	private: System::Windows::Forms::Label^ label8;



	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Timer^ timer;
	private: System::ComponentModel::IContainer^ components;


	protected:



	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->checkBoxBreath = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxPulse = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxCHSS = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxbrain = (gcnew System::Windows::Forms::CheckBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->kvtLabelCost = (gcnew System::Windows::Forms::Label());
			this->kvtLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->oxygenLabelCost = (gcnew System::Windows::Forms::Label());
			this->oxygenLabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->O2LevelLabel = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->CO2LevelLabel = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->DiaLabel = (gcnew System::Windows::Forms::Label());
			this->SysLabel = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// timer
			// 
			this->timer->Interval = 1000;
			this->timer->Tick += gcnew System::EventHandler(this, &MyForm::timer_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(294, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"���������� ������������ ��������������";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// splitContainer1
			// 
			this->splitContainer1->BackColor = System::Drawing::Color::PowderBlue;
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(3, 18);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->checkBoxBreath);
			this->splitContainer1->Panel1->Controls->Add(this->checkBoxPulse);
			this->splitContainer1->Panel1->Controls->Add(this->checkBoxCHSS);
			this->splitContainer1->Panel1->Controls->Add(this->checkBoxbrain);
			this->splitContainer1->Panel1->Controls->Add(this->chart1);
			this->splitContainer1->Size = System::Drawing::Size(1164, 392);
			this->splitContainer1->SplitterDistance = 1134;
			this->splitContainer1->TabIndex = 0;
			// 
			// checkBoxBreath
			// 
			this->checkBoxBreath->AutoSize = true;
			this->checkBoxBreath->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->checkBoxBreath->Checked = true;
			this->checkBoxBreath->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxBreath->Location = System::Drawing::Point(942, 310);
			this->checkBoxBreath->Name = L"checkBoxBreath";
			this->checkBoxBreath->Size = System::Drawing::Size(85, 20);
			this->checkBoxBreath->TabIndex = 4;
			this->checkBoxBreath->Text = L"�������";
			this->checkBoxBreath->UseVisualStyleBackColor = false;
			this->checkBoxBreath->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxBreath_CheckedChanged);
			// 
			// checkBoxPulse
			// 
			this->checkBoxPulse->AutoSize = true;
			this->checkBoxPulse->BackColor = System::Drawing::Color::NavajoWhite;
			this->checkBoxPulse->Checked = true;
			this->checkBoxPulse->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxPulse->Location = System::Drawing::Point(942, 283);
			this->checkBoxPulse->Name = L"checkBoxPulse";
			this->checkBoxPulse->Size = System::Drawing::Size(69, 20);
			this->checkBoxPulse->TabIndex = 3;
			this->checkBoxPulse->Text = L"�����";
			this->checkBoxPulse->UseVisualStyleBackColor = false;
			this->checkBoxPulse->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxPulse_CheckedChanged);
			// 
			// checkBoxCHSS
			// 
			this->checkBoxCHSS->AutoSize = true;
			this->checkBoxCHSS->BackColor = System::Drawing::Color::LightPink;
			this->checkBoxCHSS->Checked = true;
			this->checkBoxCHSS->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxCHSS->Location = System::Drawing::Point(942, 256);
			this->checkBoxCHSS->Name = L"checkBoxCHSS";
			this->checkBoxCHSS->Size = System::Drawing::Size(56, 20);
			this->checkBoxCHSS->TabIndex = 2;
			this->checkBoxCHSS->Text = L"���";
			this->checkBoxCHSS->UseVisualStyleBackColor = false;
			this->checkBoxCHSS->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxCHSS_CheckedChanged);
			// 
			// checkBoxbrain
			// 
			this->checkBoxbrain->AutoSize = true;
			this->checkBoxbrain->BackColor = System::Drawing::Color::LightCyan;
			this->checkBoxbrain->Checked = true;
			this->checkBoxbrain->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxbrain->Location = System::Drawing::Point(942, 229);
			this->checkBoxbrain->Name = L"checkBoxbrain";
			this->checkBoxbrain->Size = System::Drawing::Size(147, 20);
			this->checkBoxbrain->TabIndex = 1;
			this->checkBoxbrain->Text = L"���������� �����";
			this->checkBoxbrain->UseVisualStyleBackColor = false;
			this->checkBoxbrain->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxbrain_CheckedChanged);
			// 
			// chart1
			// 
			this->chart1->BorderlineColor = System::Drawing::Color::Gray;
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(15, 13);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series5->Legend = L"Legend1";
			series5->MarkerBorderWidth = 3;
			series5->Name = L"���������� �����";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series6->Color = System::Drawing::Color::Red;
			series6->Legend = L"Legend1";
			series6->MarkerBorderWidth = 3;
			series6->Name = L"������� ���������\n����������";
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series7->Color = System::Drawing::Color::Gold;
			series7->Legend = L"Legend1";
			series7->MarkerBorderWidth = 3;
			series7->MarkerStep = 20;
			series7->Name = L"�����";
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series8->Color = System::Drawing::Color::LimeGreen;
			series8->LabelBorderColor = System::Drawing::Color::Transparent;
			series8->LabelForeColor = System::Drawing::Color::MediumSeaGreen;
			series8->Legend = L"Legend1";
			series8->MarkerBorderWidth = 3;
			series8->Name = L"�������";
			series8->YValuesPerPoint = 2;
			this->chart1->Series->Add(series5);
			this->chart1->Series->Add(series6);
			this->chart1->Series->Add(series7);
			this->chart1->Series->Add(series8);
			this->chart1->Size = System::Drawing::Size(1146, 364);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->splitContainer1);
			this->groupBox1->Location = System::Drawing::Point(18, 15);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1170, 413);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"����������";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->kvtLabelCost);
			this->panel1->Controls->Add(this->kvtLabel);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(21, 456);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(322, 131);
			this->panel1->TabIndex = 2;
			// 
			// kvtLabelCost
			// 
			this->kvtLabelCost->AutoSize = true;
			this->kvtLabelCost->Location = System::Drawing::Point(65, 92);
			this->kvtLabelCost->Name = L"kvtLabelCost";
			this->kvtLabelCost->Size = System::Drawing::Size(14, 16);
			this->kvtLabelCost->TabIndex = 5;
			this->kvtLabelCost->Text = L"0";
			// 
			// kvtLabel
			// 
			this->kvtLabel->AutoSize = true;
			this->kvtLabel->Location = System::Drawing::Point(65, 58);
			this->kvtLabel->Name = L"kvtLabel";
			this->kvtLabel->Size = System::Drawing::Size(14, 16);
			this->kvtLabel->TabIndex = 4;
			this->kvtLabel->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"���.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"���*�:";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->oxygenLabelCost);
			this->panel2->Controls->Add(this->oxygenLabel);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Location = System::Drawing::Point(350, 458);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(337, 131);
			this->panel2->TabIndex = 4;
			// 
			// oxygenLabelCost
			// 
			this->oxygenLabelCost->AutoSize = true;
			this->oxygenLabelCost->Location = System::Drawing::Point(56, 92);
			this->oxygenLabelCost->Name = L"oxygenLabelCost";
			this->oxygenLabelCost->Size = System::Drawing::Size(14, 16);
			this->oxygenLabelCost->TabIndex = 5;
			this->oxygenLabelCost->Text = L"0";
			// 
			// oxygenLabel
			// 
			this->oxygenLabel->AutoSize = true;
			this->oxygenLabel->Location = System::Drawing::Point(78, 57);
			this->oxygenLabel->Name = L"oxygenLabel";
			this->oxygenLabel->Size = System::Drawing::Size(14, 16);
			this->oxygenLabel->TabIndex = 4;
			this->oxygenLabel->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"���.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 57);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 16);
			this->label5->TabIndex = 2;
			this->label5->Text = L"��/���:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 10);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(262, 16);
			this->label6->TabIndex = 1;
			this->label6->Text = L"���������� ������������� ���������";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->O2LevelLabel);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Location = System::Drawing::Point(705, 456);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(212, 60);
			this->panel3->TabIndex = 5;
			// 
			// O2LevelLabel
			// 
			this->O2LevelLabel->AutoSize = true;
			this->O2LevelLabel->Location = System::Drawing::Point(34, 33);
			this->O2LevelLabel->Name = L"O2LevelLabel";
			this->O2LevelLabel->Size = System::Drawing::Size(14, 16);
			this->O2LevelLabel->TabIndex = 4;
			this->O2LevelLabel->Text = L"0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 32);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(22, 16);
			this->label8->TabIndex = 3;
			this->label8->Text = L"%:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 10);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(188, 16);
			this->label9->TabIndex = 1;
			this->label9->Text = L"������� ��������� � �����";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->CO2LevelLabel);
			this->panel4->Controls->Add(this->label7);
			this->panel4->Controls->Add(this->label10);
			this->panel4->Location = System::Drawing::Point(705, 522);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(212, 65);
			this->panel4->TabIndex = 6;
			// 
			// CO2LevelLabel
			// 
			this->CO2LevelLabel->AutoSize = true;
			this->CO2LevelLabel->Location = System::Drawing::Point(36, 43);
			this->CO2LevelLabel->Name = L"CO2LevelLabel";
			this->CO2LevelLabel->Size = System::Drawing::Size(14, 16);
			this->CO2LevelLabel->TabIndex = 3;
			this->CO2LevelLabel->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 42);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(22, 16);
			this->label7->TabIndex = 2;
			this->label7->Text = L"%:";
			// 
			// label10
			// 
			this->label10->Location = System::Drawing::Point(12, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(162, 36);
			this->label10->TabIndex = 1;
			this->label10->Text = L"������� ����������� ����  � �����";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->DiaLabel);
			this->panel5->Controls->Add(this->SysLabel);
			this->panel5->Controls->Add(this->label11);
			this->panel5->Controls->Add(this->label12);
			this->panel5->Controls->Add(this->label13);
			this->panel5->Location = System::Drawing::Point(930, 456);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(222, 131);
			this->panel5->TabIndex = 5;
			// 
			// DiaLabel
			// 
			this->DiaLabel->AutoSize = true;
			this->DiaLabel->Location = System::Drawing::Point(159, 92);
			this->DiaLabel->Name = L"DiaLabel";
			this->DiaLabel->Size = System::Drawing::Size(14, 16);
			this->DiaLabel->TabIndex = 5;
			this->DiaLabel->Text = L"0";
			// 
			// SysLabel
			// 
			this->SysLabel->AutoSize = true;
			this->SysLabel->Location = System::Drawing::Point(158, 57);
			this->SysLabel->Name = L"SysLabel";
			this->SysLabel->Size = System::Drawing::Size(14, 16);
			this->SysLabel->TabIndex = 4;
			this->SysLabel->Text = L"0";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(15, 92);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(140, 16);
			this->label11->TabIndex = 3;
			this->label11->Text = L"�������������� ��:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(15, 57);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(132, 16);
			this->label12->TabIndex = 2;
			this->label12->Text = L"������������� ��:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(12, 10);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(169, 16);
			this->label13->TabIndex = 1;
			this->label13->Text = L"������������ ��������";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1200, 615);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->Text = L"������� ���������������";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		
		private: double _countSeconds = 0; // ������� ��� �����������
		private: double _countSecondsIndicators = 0; // ������� ��� �����������

		private: double _countKvt; // ���
		private: double _countKvtCost = 0; // ��� � ������

		private: double _countOxygen = 0; // o2
		private: double _countOxygenCost = 0; // o2 � ������

		private: DateTime timeNow; // ���� ��� �������� �������� �������

		private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e) {
			timeNow = DateTime::Now; // ��������� ������� ����� �� ������ ��� �������
			Random^ random = gcnew Random(timeNow.Millisecond);
			Random^ randomSecond = gcnew Random();
			double randomBrain = random->Next(0, 80);
			double randomCHSS = SimulateCHSS(random);
			double randomPulse = SimulatePulse(random);
			double randomBreath = SimulateBreath(random);

			// ��������� ��������� �������� ����� ����������� ������
			if (this->checkBoxbrain->Checked) {
				this->chart1->Series[0]->Points->AddXY(timeNow, randomBrain);
			}
			if (this->checkBoxCHSS->Checked) {
				this->chart1->Series[1]->Points->AddXY(timeNow, randomCHSS);
			}
			if (this->checkBoxPulse->Checked) {
				this->chart1->Series[2]->Points->AddXY(timeNow, randomPulse);
			}
			if (this->checkBoxBreath->Checked) {
				this->chart1->Series[3]->Points->AddXY(timeNow, randomBreath);
			}


			_countSeconds++;
			_countSecondsIndicators++;

			if (_countSeconds == 60) {
				_countSeconds = 0;

				chart1->ChartAreas[0]->AxisX->Minimum = timeNow.ToOADate();
				chart1->ChartAreas[0]->AxisX->Maximum = timeNow.AddMinutes(1).ToOADate();

				chart1->ChartAreas[0]->AxisX->IntervalType = DateTimeIntervalType::Seconds;
				chart1->ChartAreas[0]->AxisX->Interval = 5;
			}

			if (_countSecondsIndicators == 1) {
				_countSecondsIndicators = 0;
				_countKvt += 0.0025;
				_countKvtCost += 0.25;

				_countOxygen += 12.5;
				_countOxygenCost += 0.295;

				this->kvtLabel->Text = System::Convert::ToString(_countKvt);
				this->kvtLabelCost->Text = System::Convert::ToString(_countKvtCost);

				this->oxygenLabel->Text = System::Convert::ToString(System::Math::Round(_countOxygen, 1));
				this->oxygenLabelCost->Text = System::Convert::ToString(System::Math::Round(_countOxygenCost, 1));

				this->O2LevelLabel->Text = System::Convert::ToString(System::Math::Round(SimulateO2Level(random), 1));
				this->CO2LevelLabel->Text = System::Convert::ToString(System::Math::Round(SimulateCO2Level(random), 1));

				this->SysLabel->Text = System::Convert::ToString(System::Math::Round(SimulateSys(random), 1));
				this->DiaLabel->Text = System::Convert::ToString(System::Math::Round(SimulateDia(random), 1));

			}
		}
		private:
			static double SimulatePulse(Random^ random)
			{
				double basePulse = random->Next(60, 80);
				double noise = random->NextDouble() * 10 - 5;
				return basePulse + noise;
			}

			static double SimulateCHSS(Random^ random)
			{
				double baseCHSS = random->Next(80, 90);
				double noise = random->NextDouble() * 15 - 5; 
				return baseCHSS + noise;
			}
			static double SimulateBreath(Random^ random)
			{
				double baseBreath = random->Next(25, 40);
				double noise = random->NextDouble() * 10 - 5;
				return baseBreath + noise;
			}



			static double SimulateO2Level(Random^ random)
			{
				double randomO2Level = random->Next(70, 80);
				double randomCO2Level = random->Next(3, 5);
				double noise = random->NextDouble() * 2 - 1;
				return randomO2Level + noise;
			}
			static double SimulateCO2Level(Random^ random)
			{
				double randomCO2Level = random->Next(3, 5);
				double noise = random->NextDouble() * 2 - 1;
				return randomCO2Level + noise;
			}
			static double SimulateSys(Random^ random)
			{
				double randomSys = random->Next(80, 130);
				double noise = random->NextDouble() * 2 - 1;
				return randomSys + noise;
			}
			static double SimulateDia(Random^ random)
			{
				double randomDia = random->Next(60, 90);
				double noise = random->NextDouble() * 2 - 1;
				return randomDia + noise;
			}
		


		// ������� ������, ���� ������� �� �������
		private: System::Void checkBoxbrain_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (!this->checkBoxbrain->Checked) {
				this->chart1->Series[0]->Points->Clear();
			}
		}
		private: System::Void checkBoxCHSS_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (!this->checkBoxCHSS->Checked) {
				this->chart1->Series[1]->Points->Clear();
			}
		}
		private: System::Void checkBoxPulse_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (!this->checkBoxPulse->Checked) {
				this->chart1->Series[2]->Points->Clear();
			}
		}
		private: System::Void checkBoxBreath_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (!this->checkBoxBreath->Checked) {
				this->chart1->Series[3]->Points->Clear(); 
			}
		}

};
}
