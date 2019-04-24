#pragma once
#include "Popup.h"
#include "Frames.h"
#include <string>
#include <msclr\marshal_cppstd.h>


namespace Thruster_Test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	DataVals dataValues;
	ModeVals modeValues;
	
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
			dataValues.diffTime = 0.0001;
			void chartsAddData(DataVals data);
			void sendExceptCheck(void);
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (serialPort1->IsOpen)
				serialPort1->Close();

			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox5;
	protected:


	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::Button^  connectButton;
	private: System::Windows::Forms::Button^  shortTestButton;


	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  noiseChart;
	private: System::Windows::Forms::TextBox^  noiseBox;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  timeBox;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  temp2Box;

	private: System::Windows::Forms::TextBox^  temp1Box;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  temp2Chart;


	private: System::Windows::Forms::DataVisualization::Charting::Chart^  temp1Chart;

	private: System::Windows::Forms::Timer^  timer1;
	private: System::IO::Ports::SerialPort^  serialPort1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  pressure2Box;
	private: System::Windows::Forms::TextBox^  pressure1Box;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  pressure2Chart;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^  pressure1Chart;

	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::TextBox^  powerBox;

	private: System::Windows::Forms::TextBox^  currentBox;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  powerChart;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^  currentChart;
	private: System::Windows::Forms::ComboBox^  portsCombo;

	private: System::Windows::Forms::Button^  pingButton;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::Button^  calButton;


	private: System::Windows::Forms::Button^  longTestButton;
	private: System::Windows::Forms::Button^  startButton;
	private: System::Windows::Forms::Button^  dutyButton;
	private: System::Windows::Forms::NumericUpDown^  dutyNumeric;

	private: System::Windows::Forms::Label^  connectionStatusLabel;
	private: System::Windows::Forms::Button^  throttleTestButton;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::TextBox^  thrustBox;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  thrustChart;
	private: System::Windows::Forms::GroupBox^  groupBox9;
	private: System::Windows::Forms::TextBox^  rpmBox;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  rpmChart;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::TextBox^  vibroBox;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  vibroChart;
	private: System::Windows::Forms::Button^  stopButton;
	private: System::Windows::Forms::Label^  voltLabel;
	private: System::Windows::Forms::TextBox^  voltBox;
	private: System::Windows::Forms::Button^  calOffsetButton;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  offsetBox;
private: System::Windows::Forms::Label^  callibrationLabel;
private: System::Windows::Forms::Label^  connectionLabel;
private: System::Windows::Forms::Label^  callibrationStatus;
private: System::Windows::Forms::Button^  pauseButton;

	private: System::ComponentModel::IContainer^  components;

	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea11 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea12 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea13 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea14 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea15 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend15 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series15 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea16 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend16 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series16 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea17 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend17 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series17 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea18 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend18 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series18 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea19 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend19 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series19 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea20 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend20 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series20 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->callibrationLabel = (gcnew System::Windows::Forms::Label());
			this->connectionLabel = (gcnew System::Windows::Forms::Label());
			this->callibrationStatus = (gcnew System::Windows::Forms::Label());
			this->pauseButton = (gcnew System::Windows::Forms::Button());
			this->calOffsetButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->offsetBox = (gcnew System::Windows::Forms::TextBox());
			this->voltLabel = (gcnew System::Windows::Forms::Label());
			this->voltBox = (gcnew System::Windows::Forms::TextBox());
			this->stopButton = (gcnew System::Windows::Forms::Button());
			this->dutyButton = (gcnew System::Windows::Forms::Button());
			this->dutyNumeric = (gcnew System::Windows::Forms::NumericUpDown());
			this->connectionStatusLabel = (gcnew System::Windows::Forms::Label());
			this->throttleTestButton = (gcnew System::Windows::Forms::Button());
			this->calButton = (gcnew System::Windows::Forms::Button());
			this->longTestButton = (gcnew System::Windows::Forms::Button());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->portsCombo = (gcnew System::Windows::Forms::ComboBox());
			this->shortTestButton = (gcnew System::Windows::Forms::Button());
			this->pingButton = (gcnew System::Windows::Forms::Button());
			this->connectButton = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->noiseChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->noiseBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timeBox = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->temp2Box = (gcnew System::Windows::Forms::TextBox());
			this->temp1Box = (gcnew System::Windows::Forms::TextBox());
			this->temp2Chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->temp1Chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->pressure2Box = (gcnew System::Windows::Forms::TextBox());
			this->pressure1Box = (gcnew System::Windows::Forms::TextBox());
			this->pressure2Chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->pressure1Chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->powerBox = (gcnew System::Windows::Forms::TextBox());
			this->currentBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->powerChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->currentChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->thrustBox = (gcnew System::Windows::Forms::TextBox());
			this->thrustChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->rpmBox = (gcnew System::Windows::Forms::TextBox());
			this->rpmChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->vibroBox = (gcnew System::Windows::Forms::TextBox());
			this->vibroChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dutyNumeric))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->noiseChart))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->temp2Chart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->temp1Chart))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pressure2Chart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pressure1Chart))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->powerChart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->currentChart))->BeginInit();
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->thrustChart))->BeginInit();
			this->groupBox9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rpmChart))->BeginInit();
			this->groupBox7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vibroChart))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->pictureBox1);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBox5->Location = System::Drawing::Point(12, 27);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(463, 415);
			this->groupBox5->TabIndex = 19;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Podgl¹d z kamery";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(6, 40);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(443, 369);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->callibrationLabel);
			this->groupBox6->Controls->Add(this->connectionLabel);
			this->groupBox6->Controls->Add(this->callibrationStatus);
			this->groupBox6->Controls->Add(this->pauseButton);
			this->groupBox6->Controls->Add(this->calOffsetButton);
			this->groupBox6->Controls->Add(this->label2);
			this->groupBox6->Controls->Add(this->offsetBox);
			this->groupBox6->Controls->Add(this->voltLabel);
			this->groupBox6->Controls->Add(this->voltBox);
			this->groupBox6->Controls->Add(this->stopButton);
			this->groupBox6->Controls->Add(this->dutyButton);
			this->groupBox6->Controls->Add(this->dutyNumeric);
			this->groupBox6->Controls->Add(this->connectionStatusLabel);
			this->groupBox6->Controls->Add(this->throttleTestButton);
			this->groupBox6->Controls->Add(this->calButton);
			this->groupBox6->Controls->Add(this->longTestButton);
			this->groupBox6->Controls->Add(this->startButton);
			this->groupBox6->Controls->Add(this->portsCombo);
			this->groupBox6->Controls->Add(this->shortTestButton);
			this->groupBox6->Controls->Add(this->pingButton);
			this->groupBox6->Controls->Add(this->connectButton);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBox6->Location = System::Drawing::Point(12, 448);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(463, 284);
			this->groupBox6->TabIndex = 25;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Kontrolki";
			// 
			// callibrationLabel
			// 
			this->callibrationLabel->AutoSize = true;
			this->callibrationLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->callibrationLabel->Location = System::Drawing::Point(320, 229);
			this->callibrationLabel->Name = L"callibrationLabel";
			this->callibrationLabel->Size = System::Drawing::Size(104, 20);
			this->callibrationLabel->TabIndex = 34;
			this->callibrationLabel->Text = L"Skalibrowano";
			// 
			// connectionLabel
			// 
			this->connectionLabel->AutoSize = true;
			this->connectionLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->connectionLabel->Location = System::Drawing::Point(320, 168);
			this->connectionLabel->Name = L"connectionLabel";
			this->connectionLabel->Size = System::Drawing::Size(87, 20);
			this->connectionLabel->TabIndex = 33;
			this->connectionLabel->Text = L"Po³¹czenie";
			// 
			// callibrationStatus
			// 
			this->callibrationStatus->AutoSize = true;
			this->callibrationStatus->BackColor = System::Drawing::Color::Maroon;
			this->callibrationStatus->Location = System::Drawing::Point(320, 252);
			this->callibrationStatus->Name = L"callibrationStatus";
			this->callibrationStatus->Size = System::Drawing::Size(137, 20);
			this->callibrationStatus->TabIndex = 19;
			this->callibrationStatus->Text = L"                                ";
			// 
			// pauseButton
			// 
			this->pauseButton->Enabled = false;
			this->pauseButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->pauseButton->Location = System::Drawing::Point(161, 212);
			this->pauseButton->Name = L"pauseButton";
			this->pauseButton->Size = System::Drawing::Size(140, 30);
			this->pauseButton->TabIndex = 18;
			this->pauseButton->Text = L"Pause";
			this->pauseButton->UseVisualStyleBackColor = true;
			// 
			// calOffsetButton
			// 
			this->calOffsetButton->Enabled = false;
			this->calOffsetButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->calOffsetButton->Location = System::Drawing::Point(161, 25);
			this->calOffsetButton->Name = L"calOffsetButton";
			this->calOffsetButton->Size = System::Drawing::Size(140, 30);
			this->calOffsetButton->TabIndex = 17;
			this->calOffsetButton->Text = L"Kalibruj offset";
			this->calOffsetButton->UseVisualStyleBackColor = true;
			this->calOffsetButton->Click += gcnew System::EventHandler(this, &MyForm::calOffsetButton_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 229);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 20);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Offset kalibracji";
			// 
			// offsetBox
			// 
			this->offsetBox->Location = System::Drawing::Point(6, 252);
			this->offsetBox->Name = L"offsetBox";
			this->offsetBox->Size = System::Drawing::Size(100, 26);
			this->offsetBox->TabIndex = 15;
			this->offsetBox->Text = L"1000";
			// 
			// voltLabel
			// 
			this->voltLabel->AutoSize = true;
			this->voltLabel->Location = System::Drawing::Point(6, 168);
			this->voltLabel->Name = L"voltLabel";
			this->voltLabel->Size = System::Drawing::Size(93, 20);
			this->voltLabel->TabIndex = 14;
			this->voltLabel->Text = L"Napiêcie [V]";
			// 
			// voltBox
			// 
			this->voltBox->Location = System::Drawing::Point(6, 191);
			this->voltBox->Name = L"voltBox";
			this->voltBox->Size = System::Drawing::Size(100, 26);
			this->voltBox->TabIndex = 13;
			this->voltBox->Text = L"5";
			this->voltBox->TextChanged += gcnew System::EventHandler(this, &MyForm::voltBox_TextChanged);
			// 
			// stopButton
			// 
			this->stopButton->Enabled = false;
			this->stopButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->stopButton->Location = System::Drawing::Point(161, 248);
			this->stopButton->Name = L"stopButton";
			this->stopButton->Size = System::Drawing::Size(140, 30);
			this->stopButton->TabIndex = 12;
			this->stopButton->Text = L"Stop";
			this->stopButton->UseVisualStyleBackColor = true;
			this->stopButton->Click += gcnew System::EventHandler(this, &MyForm::stopButton_Click);
			// 
			// dutyButton
			// 
			this->dutyButton->Enabled = false;
			this->dutyButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->dutyButton->Location = System::Drawing::Point(161, 163);
			this->dutyButton->Name = L"dutyButton";
			this->dutyButton->Size = System::Drawing::Size(140, 30);
			this->dutyButton->TabIndex = 11;
			this->dutyButton->Text = L"Aktualizuj PWM";
			this->dutyButton->UseVisualStyleBackColor = true;
			this->dutyButton->Click += gcnew System::EventHandler(this, &MyForm::dutyButton_Click);
			// 
			// dutyNumeric
			// 
			this->dutyNumeric->Location = System::Drawing::Point(161, 131);
			this->dutyNumeric->Name = L"dutyNumeric";
			this->dutyNumeric->Size = System::Drawing::Size(140, 26);
			this->dutyNumeric->TabIndex = 10;
			// 
			// connectionStatusLabel
			// 
			this->connectionStatusLabel->AutoSize = true;
			this->connectionStatusLabel->BackColor = System::Drawing::Color::Maroon;
			this->connectionStatusLabel->Location = System::Drawing::Point(320, 194);
			this->connectionStatusLabel->Name = L"connectionStatusLabel";
			this->connectionStatusLabel->Size = System::Drawing::Size(137, 20);
			this->connectionStatusLabel->TabIndex = 9;
			this->connectionStatusLabel->Text = L"                                ";
			// 
			// throttleTestButton
			// 
			this->throttleTestButton->Enabled = false;
			this->throttleTestButton->Location = System::Drawing::Point(317, 25);
			this->throttleTestButton->Name = L"throttleTestButton";
			this->throttleTestButton->Size = System::Drawing::Size(140, 30);
			this->throttleTestButton->TabIndex = 8;
			this->throttleTestButton->Text = L"Test gazu";
			this->throttleTestButton->UseVisualStyleBackColor = true;
			this->throttleTestButton->Click += gcnew System::EventHandler(this, &MyForm::throttleTestButton_Click);
			// 
			// calButton
			// 
			this->calButton->Enabled = false;
			this->calButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->calButton->Location = System::Drawing::Point(161, 59);
			this->calButton->Name = L"calButton";
			this->calButton->Size = System::Drawing::Size(140, 30);
			this->calButton->TabIndex = 7;
			this->calButton->Text = L"Kalibruj";
			this->calButton->UseVisualStyleBackColor = true;
			this->calButton->Click += gcnew System::EventHandler(this, &MyForm::calButton_Click);
			// 
			// longTestButton
			// 
			this->longTestButton->Enabled = false;
			this->longTestButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->longTestButton->Location = System::Drawing::Point(317, 97);
			this->longTestButton->Name = L"longTestButton";
			this->longTestButton->Size = System::Drawing::Size(140, 30);
			this->longTestButton->TabIndex = 6;
			this->longTestButton->Text = L"D³ugi test";
			this->longTestButton->UseVisualStyleBackColor = true;
			this->longTestButton->Click += gcnew System::EventHandler(this, &MyForm::longTestButton_Click);
			// 
			// startButton
			// 
			this->startButton->Enabled = false;
			this->startButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->startButton->Location = System::Drawing::Point(161, 97);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(140, 30);
			this->startButton->TabIndex = 5;
			this->startButton->Text = L"Start";
			this->startButton->UseVisualStyleBackColor = true;
			this->startButton->Click += gcnew System::EventHandler(this, &MyForm::startButton_Click);
			// 
			// portsCombo
			// 
			this->portsCombo->FormattingEnabled = true;
			this->portsCombo->Location = System::Drawing::Point(6, 61);
			this->portsCombo->Name = L"portsCombo";
			this->portsCombo->Size = System::Drawing::Size(140, 28);
			this->portsCombo->TabIndex = 3;
			this->portsCombo->Text = L"Choose port";
			// 
			// shortTestButton
			// 
			this->shortTestButton->Enabled = false;
			this->shortTestButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->shortTestButton->Location = System::Drawing::Point(317, 61);
			this->shortTestButton->Name = L"shortTestButton";
			this->shortTestButton->Size = System::Drawing::Size(140, 30);
			this->shortTestButton->TabIndex = 0;
			this->shortTestButton->Text = L"Krótki test";
			this->shortTestButton->UseVisualStyleBackColor = true;
			this->shortTestButton->Click += gcnew System::EventHandler(this, &MyForm::shortTestButton_Click);
			// 
			// pingButton
			// 
			this->pingButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->pingButton->Location = System::Drawing::Point(6, 25);
			this->pingButton->Name = L"pingButton";
			this->pingButton->Size = System::Drawing::Size(140, 30);
			this->pingButton->TabIndex = 2;
			this->pingButton->Text = L"Poszukaj portów";
			this->pingButton->UseVisualStyleBackColor = true;
			this->pingButton->Click += gcnew System::EventHandler(this, &MyForm::pingButton_Click);
			// 
			// connectButton
			// 
			this->connectButton->Enabled = false;
			this->connectButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->connectButton->Location = System::Drawing::Point(6, 97);
			this->connectButton->Name = L"connectButton";
			this->connectButton->Size = System::Drawing::Size(140, 30);
			this->connectButton->TabIndex = 1;
			this->connectButton->Text = L"Po³¹cz";
			this->connectButton->UseVisualStyleBackColor = true;
			this->connectButton->Click += gcnew System::EventHandler(this, &MyForm::connectButton_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->noiseChart);
			this->groupBox4->Controls->Add(this->noiseBox);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBox4->Location = System::Drawing::Point(12, 738);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(463, 292);
			this->groupBox4->TabIndex = 26;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Poziom ha³asu od czasu";
			// 
			// noiseChart
			// 
			chartArea11->Name = L"ChartArea1";
			this->noiseChart->ChartAreas->Add(chartArea11);
			legend11->Enabled = false;
			legend11->Name = L"Legend1";
			this->noiseChart->Legends->Add(legend11);
			this->noiseChart->Location = System::Drawing::Point(6, 57);
			this->noiseChart->Name = L"noiseChart";
			series11->ChartArea = L"ChartArea1";
			series11->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastLine;
			series11->Legend = L"Legend1";
			series11->Name = L"noise";
			this->noiseChart->Series->Add(series11);
			this->noiseChart->Size = System::Drawing::Size(451, 229);
			this->noiseChart->TabIndex = 27;
			this->noiseChart->Text = L"chart1";
			// 
			// noiseBox
			// 
			this->noiseBox->Location = System::Drawing::Point(6, 25);
			this->noiseBox->Name = L"noiseBox";
			this->noiseBox->ReadOnly = true;
			this->noiseBox->Size = System::Drawing::Size(100, 26);
			this->noiseBox->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(481, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 20);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Czas pomiaru";
			// 
			// timeBox
			// 
			this->timeBox->Location = System::Drawing::Point(481, 50);
			this->timeBox->Name = L"timeBox";
			this->timeBox->ReadOnly = true;
			this->timeBox->Size = System::Drawing::Size(116, 20);
			this->timeBox->TabIndex = 31;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->temp2Box);
			this->groupBox1->Controls->Add(this->temp1Box);
			this->groupBox1->Controls->Add(this->temp2Chart);
			this->groupBox1->Controls->Add(this->temp1Chart);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBox1->Location = System::Drawing::Point(481, 76);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(687, 270);
			this->groupBox1->TabIndex = 30;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Temperatura ";
			// 
			// temp2Box
			// 
			this->temp2Box->Location = System::Drawing::Point(356, 25);
			this->temp2Box->Name = L"temp2Box";
			this->temp2Box->ReadOnly = true;
			this->temp2Box->Size = System::Drawing::Size(100, 26);
			this->temp2Box->TabIndex = 4;
			// 
			// temp1Box
			// 
			this->temp1Box->Location = System::Drawing::Point(6, 25);
			this->temp1Box->Name = L"temp1Box";
			this->temp1Box->ReadOnly = true;
			this->temp1Box->Size = System::Drawing::Size(100, 26);
			this->temp1Box->TabIndex = 3;
			// 
			// temp2Chart
			// 
			chartArea12->Name = L"ChartArea1";
			this->temp2Chart->ChartAreas->Add(chartArea12);
			legend12->Enabled = false;
			legend12->Name = L"Legend1";
			this->temp2Chart->Legends->Add(legend12);
			this->temp2Chart->Location = System::Drawing::Point(356, 57);
			this->temp2Chart->Name = L"temp2Chart";
			series12->ChartArea = L"ChartArea1";
			series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastLine;
			series12->Legend = L"Legend1";
			series12->Name = L"temp2";
			this->temp2Chart->Series->Add(series12);
			this->temp2Chart->Size = System::Drawing::Size(325, 180);
			this->temp2Chart->TabIndex = 2;
			this->temp2Chart->Text = L"chart2";
			// 
			// temp1Chart
			// 
			chartArea13->Name = L"ChartArea1";
			this->temp1Chart->ChartAreas->Add(chartArea13);
			legend13->Enabled = false;
			legend13->Name = L"Legend1";
			this->temp1Chart->Legends->Add(legend13);
			this->temp1Chart->Location = System::Drawing::Point(6, 57);
			this->temp1Chart->Name = L"temp1Chart";
			series13->ChartArea = L"ChartArea1";
			series13->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastLine;
			series13->Legend = L"Legend1";
			series13->Name = L"temp1";
			this->temp1Chart->Series->Add(series13);
			this->temp1Chart->Size = System::Drawing::Size(325, 180);
			this->temp1Chart->TabIndex = 0;
			this->temp1Chart->Text = L"chart3";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// serialPort1
			// 
			this->serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &MyForm::serialPort1_DataReceived);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->pressure2Box);
			this->groupBox2->Controls->Add(this->pressure1Box);
			this->groupBox2->Controls->Add(this->pressure2Chart);
			this->groupBox2->Controls->Add(this->pressure1Chart);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBox2->Location = System::Drawing::Point(481, 352);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(687, 270);
			this->groupBox2->TabIndex = 33;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ciœnienie";
			// 
			// pressure2Box
			// 
			this->pressure2Box->Location = System::Drawing::Point(356, 25);
			this->pressure2Box->Name = L"pressure2Box";
			this->pressure2Box->ReadOnly = true;
			this->pressure2Box->Size = System::Drawing::Size(100, 26);
			this->pressure2Box->TabIndex = 6;
			// 
			// pressure1Box
			// 
			this->pressure1Box->Location = System::Drawing::Point(6, 25);
			this->pressure1Box->Name = L"pressure1Box";
			this->pressure1Box->ReadOnly = true;
			this->pressure1Box->Size = System::Drawing::Size(100, 26);
			this->pressure1Box->TabIndex = 5;
			// 
			// pressure2Chart
			// 
			chartArea14->Name = L"ChartArea1";
			this->pressure2Chart->ChartAreas->Add(chartArea14);
			legend14->Enabled = false;
			legend14->Name = L"Legend1";
			this->pressure2Chart->Legends->Add(legend14);
			this->pressure2Chart->Location = System::Drawing::Point(356, 84);
			this->pressure2Chart->Name = L"pressure2Chart";
			series14->ChartArea = L"ChartArea1";
			series14->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastLine;
			series14->Legend = L"Legend1";
			series14->Name = L"pressure2";
			this->pressure2Chart->Series->Add(series14);
			this->pressure2Chart->Size = System::Drawing::Size(325, 180);
			this->pressure2Chart->TabIndex = 4;
			this->pressure2Chart->Text = L"chart4";
			// 
			// pressure1Chart
			// 
			chartArea15->Name = L"ChartArea1";
			this->pressure1Chart->ChartAreas->Add(chartArea15);
			legend15->Enabled = false;
			legend15->Name = L"Legend1";
			this->pressure1Chart->Legends->Add(legend15);
			this->pressure1Chart->Location = System::Drawing::Point(6, 84);
			this->pressure1Chart->Name = L"pressure1Chart";
			series15->ChartArea = L"ChartArea1";
			series15->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastLine;
			series15->Legend = L"Legend1";
			series15->Name = L"pressure1";
			series15->YValuesPerPoint = 2;
			this->pressure1Chart->Series->Add(series15);
			this->pressure1Chart->Size = System::Drawing::Size(325, 180);
			this->pressure1Chart->TabIndex = 3;
			this->pressure1Chart->Text = L"chart3";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->powerBox);
			this->groupBox3->Controls->Add(this->currentBox);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->powerChart);
			this->groupBox3->Controls->Add(this->currentChart);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBox3->Location = System::Drawing::Point(481, 628);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(687, 270);
			this->groupBox3->TabIndex = 34;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Natê¿enie i moc";
			// 
			// powerBox
			// 
			this->powerBox->Location = System::Drawing::Point(356, 45);
			this->powerBox->Name = L"powerBox";
			this->powerBox->ReadOnly = true;
			this->powerBox->Size = System::Drawing::Size(100, 26);
			this->powerBox->TabIndex = 10;
			// 
			// currentBox
			// 
			this->currentBox->Location = System::Drawing::Point(6, 45);
			this->currentBox->Name = L"currentBox";
			this->currentBox->ReadOnly = true;
			this->currentBox->Size = System::Drawing::Size(100, 26);
			this->currentBox->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(352, 22);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(107, 20);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Moc od czasu";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(6, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(140, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Natê¿nie od czasu";
			// 
			// powerChart
			// 
			chartArea16->Name = L"ChartArea1";
			this->powerChart->ChartAreas->Add(chartArea16);
			legend16->Enabled = false;
			legend16->Name = L"Legend1";
			this->powerChart->Legends->Add(legend16);
			this->powerChart->Location = System::Drawing::Point(356, 84);
			this->powerChart->Name = L"powerChart";
			series16->ChartArea = L"ChartArea1";
			series16->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastLine;
			series16->Legend = L"Legend1";
			series16->Name = L"power";
			this->powerChart->Series->Add(series16);
			this->powerChart->Size = System::Drawing::Size(325, 180);
			this->powerChart->TabIndex = 6;
			this->powerChart->Text = L"chart6";
			// 
			// currentChart
			// 
			chartArea17->Name = L"ChartArea1";
			this->currentChart->ChartAreas->Add(chartArea17);
			legend17->Enabled = false;
			legend17->Name = L"Legend1";
			this->currentChart->Legends->Add(legend17);
			this->currentChart->Location = System::Drawing::Point(6, 84);
			this->currentChart->Name = L"currentChart";
			series17->ChartArea = L"ChartArea1";
			series17->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastLine;
			series17->Legend = L"Legend1";
			series17->Name = L"current";
			this->currentChart->Series->Add(series17);
			this->currentChart->Size = System::Drawing::Size(325, 180);
			this->currentChart->TabIndex = 5;
			this->currentChart->Text = L"chart5";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1904, 24);
			this->menuStrip1->TabIndex = 35;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->thrustBox);
			this->groupBox8->Controls->Add(this->thrustChart);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBox8->Location = System::Drawing::Point(1175, 27);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(717, 326);
			this->groupBox8->TabIndex = 36;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Si³a ci¹gu od czasu";
			// 
			// thrustBox
			// 
			this->thrustBox->Location = System::Drawing::Point(6, 26);
			this->thrustBox->Name = L"thrustBox";
			this->thrustBox->ReadOnly = true;
			this->thrustBox->Size = System::Drawing::Size(100, 26);
			this->thrustBox->TabIndex = 12;
			// 
			// thrustChart
			// 
			chartArea18->Name = L"ChartArea1";
			this->thrustChart->ChartAreas->Add(chartArea18);
			legend18->Enabled = false;
			legend18->Name = L"Legend1";
			this->thrustChart->Legends->Add(legend18);
			this->thrustChart->Location = System::Drawing::Point(6, 58);
			this->thrustChart->Name = L"thrustChart";
			series18->ChartArea = L"ChartArea1";
			series18->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastLine;
			series18->Legend = L"Legend1";
			series18->Name = L"thrust";
			this->thrustChart->Series->Add(series18);
			this->thrustChart->Size = System::Drawing::Size(700, 260);
			this->thrustChart->TabIndex = 11;
			this->thrustChart->Text = L"chart10";
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->rpmBox);
			this->groupBox9->Controls->Add(this->rpmChart);
			this->groupBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBox9->Location = System::Drawing::Point(1174, 359);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(717, 323);
			this->groupBox9->TabIndex = 37;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Prêdkoœæ obrotowa od czasu ";
			// 
			// rpmBox
			// 
			this->rpmBox->Location = System::Drawing::Point(6, 25);
			this->rpmBox->Name = L"rpmBox";
			this->rpmBox->ReadOnly = true;
			this->rpmBox->Size = System::Drawing::Size(100, 26);
			this->rpmBox->TabIndex = 13;
			// 
			// rpmChart
			// 
			chartArea19->Name = L"ChartArea1";
			this->rpmChart->ChartAreas->Add(chartArea19);
			legend19->Enabled = false;
			legend19->Name = L"Legend1";
			this->rpmChart->Legends->Add(legend19);
			this->rpmChart->Location = System::Drawing::Point(6, 57);
			this->rpmChart->Name = L"rpmChart";
			series19->ChartArea = L"ChartArea1";
			series19->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastLine;
			series19->Legend = L"Legend1";
			series19->Name = L"rpm";
			this->rpmChart->Series->Add(series19);
			this->rpmChart->Size = System::Drawing::Size(700, 260);
			this->rpmChart->TabIndex = 12;
			this->rpmChart->Text = L"chart11";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->vibroBox);
			this->groupBox7->Controls->Add(this->vibroChart);
			this->groupBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBox7->Location = System::Drawing::Point(1175, 688);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(717, 351);
			this->groupBox7->TabIndex = 38;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Wibracje w czasie";
			// 
			// vibroBox
			// 
			this->vibroBox->Location = System::Drawing::Point(6, 25);
			this->vibroBox->Name = L"vibroBox";
			this->vibroBox->ReadOnly = true;
			this->vibroBox->Size = System::Drawing::Size(100, 26);
			this->vibroBox->TabIndex = 14;
			// 
			// vibroChart
			// 
			chartArea20->Name = L"ChartArea1";
			this->vibroChart->ChartAreas->Add(chartArea20);
			legend20->Enabled = false;
			legend20->Name = L"Legend1";
			this->vibroChart->Legends->Add(legend20);
			this->vibroChart->Location = System::Drawing::Point(6, 57);
			this->vibroChart->Name = L"vibroChart";
			series20->ChartArea = L"ChartArea1";
			series20->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastLine;
			series20->Legend = L"Legend1";
			series20->Name = L"vibro";
			this->vibroChart->Series->Add(series20);
			this->vibroChart->Size = System::Drawing::Size(700, 282);
			this->vibroChart->TabIndex = 13;
			this->vibroChart->Text = L"chart12";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1042);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox9);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->timeBox);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Control Station";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dutyNumeric))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->noiseChart))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->temp2Chart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->temp1Chart))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pressure2Chart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pressure1Chart))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->powerChart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->currentChart))->EndInit();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->thrustChart))->EndInit();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rpmChart))->EndInit();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vibroChart))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}


private: System::Void pingButton_Click(System::Object^  sender, System::EventArgs^  e) {

	connectButton->Enabled = true;
	portsCombo->Items->Clear();
	for each (String^ s in serialPort1->GetPortNames())
	{
		portsCombo->Items->Add(s);
	}
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	if (Globals::messageFlag == 1)
	{

		//label1->Text = System::Convert::ToString(dataValues.temp1);
		chartsAddData(dataValues);

		Globals::messageFlag = 0;
	}

}
private: System::Void serialPort1_DataReceived(System::Object^  sender, System::IO::Ports::SerialDataReceivedEventArgs^  e) {
	
	LongFrame incomingFrame;
	FrameToData(serialPort1->ReadLine(), dataValues, incomingFrame);
	Globals::messageFlag = 1;

}
private: System::Void connectButton_Click(System::Object^  sender, System::EventArgs^  e) {

	if (Globals::Connection == 0)
	{
		if (portsCombo->Text != "Choose port")
		{
			serialPort1->PortName = portsCombo->Text;
			try
			{
				serialPort1->Open();
				timer1->Enabled = true;
				Globals::Connection = 1;
				connectButton->Text = L"Roz³¹cz";
				connectionStatusLabel->BackColor = System::Drawing::Color::DarkGreen;
				calOffsetButton->Enabled = true;
			}
			catch (UnauthorizedAccessException^)
			{
				DisplayConnectionOpened();
			}
			catch (System::IO::IOException^)
			{
				DisplayBadPortChoice();
			}

		}
		else
		{
			DisplayBadPortChoice();
		}
	}
	else
	{
		timer1->Enabled = false;
		Globals::Connection = 0;
		connectButton->Text = L"Po³¹cz";
		connectionStatusLabel->BackColor = System::Drawing::Color::Maroon;
		calButton->Enabled = false;
		shortTestButton->Enabled = false;
		longTestButton->Enabled = false;
		throttleTestButton->Enabled = false;
		dutyButton->Enabled = false;
		stopButton->Enabled = false;
		startButton->Enabled = false;
		calOffsetButton->Enabled = false;


		try
		{
			serialPort1->Close();

		}
		catch (System::IO::IOException^)
		{

		}
	}

}
private: System::Void calOffsetButton_Click(System::Object^  sender, System::EventArgs^  e) {

	modeValues.mode = 5;
	modeValues.duty = 1;
	sendExceptCheck();

	calButton->Enabled = true;
	shortTestButton->Enabled = false;
	longTestButton->Enabled = false;
	throttleTestButton->Enabled = false;
	dutyButton->Enabled = false;
	stopButton->Enabled = false;
	startButton->Enabled = false;
}

private: System::Void calButton_Click(System::Object^  sender, System::EventArgs^  e) {
	
	modeValues.mode = 5;
	modeValues.duty = 2;
	modeValues.valOne=System::Convert::ToInt16(offsetBox->Text);
	
	sendExceptCheck();

	calOffsetButton->Enabled = true;
	startButton->Enabled = true;
	shortTestButton->Enabled = true;
	longTestButton->Enabled = true;
	throttleTestButton->Enabled = true;
	dutyButton->Enabled = false;

	connectionStatusLabel->BackColor = System::Drawing::Color::DarkGreen;

	
}

private: System::Void startButton_Click(System::Object^  sender, System::EventArgs^  e) {
	
	modeValues.mode = 1;
	sendExceptCheck();

	calOffsetButton->Enabled = false;
	calButton->Enabled = false;
	shortTestButton->Enabled = false;
	longTestButton->Enabled = false;
	throttleTestButton->Enabled = false;
	dutyButton->Enabled = true;
	stopButton->Enabled = true;
	startButton->Enabled = false;

	
}

private: System::Void throttleTestButton_Click(System::Object^  sender, System::EventArgs^  e) {

	calOffsetButton->Enabled = false;
	startButton->Enabled = false;
	shortTestButton->Enabled = false;
	longTestButton->Enabled = false;
	dutyButton->Enabled = false;
	calButton->Enabled = false;
	stopButton->Enabled = true;
	throttleTestButton->Enabled = false;

}
private: System::Void shortTestButton_Click(System::Object^  sender, System::EventArgs^  e) {

	calOffsetButton->Enabled = false;
	startButton->Enabled = false;
	calButton->Enabled = false;
	longTestButton->Enabled = false;
	dutyButton->Enabled = false;
	stopButton->Enabled = true;
	shortTestButton->Enabled = false;
	throttleTestButton->Enabled = false;

}
private: System::Void longTestButton_Click(System::Object^  sender, System::EventArgs^  e) {

	calOffsetButton->Enabled = false;
	startButton->Enabled = false;
	shortTestButton->Enabled = false;
	calButton->Enabled = false;
	dutyButton->Enabled = false;
	throttleTestButton->Enabled = false;
	stopButton->Enabled = true;
	longTestButton->Enabled = false;
}
private: System::Void dutyButton_Click(System::Object^  sender, System::EventArgs^  e) {

	modeValues.mode = 6;
	modeValues.duty = System::Convert::ToInt16(dutyNumeric->Value);
	sendExceptCheck();



}
private: System::Void stopButton_Click(System::Object^  sender, System::EventArgs^  e) {

	modeValues.mode = 0;
	sendExceptCheck();

	calOffsetButton->Enabled = true;
	startButton->Enabled = true;
	shortTestButton->Enabled = true;
	longTestButton->Enabled = true;
	throttleTestButton->Enabled = true;
	dutyButton->Enabled = false;
	calButton->Enabled = true;

	

}

private: System::Void voltBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	dataValues.volt = System::Convert::ToInt32(voltBox->Text);

}

		 void chartsAddData(DataVals data)
		 {
			 //Boxy

			 temp1Box->Text = System::Convert::ToString(dataValues.temp1);
			 temp2Box->Text = System::Convert::ToString(dataValues.temp2);
			 vibroBox->Text = System::Convert::ToString(dataValues.vibro[9]);
			 currentBox->Text = System::Convert::ToString(dataValues.shunt);
			 thrustBox->Text = System::Convert::ToString(dataValues.tenso);
			 rpmBox->Text = System::Convert::ToString(dataValues.rpm);
			 pressure1Box->Text = System::Convert::ToString(dataValues.press1);
			 pressure2Box->Text = System::Convert::ToString(dataValues.press1);
			 timeBox->Text = System::Convert::ToString(dataValues.timeInSecs);
			 //Charty

			 temp1Chart->Series["temp1"]->Points->AddXY(dataValues.timeInSecs, dataValues.temp1);
			 temp2Chart->Series["temp2"]->Points->AddXY(dataValues.timeInSecs, dataValues.temp2);
			 for (int i = 0; i < 10; i++)
			 {
				 float x = 0.0;
				 //x = dataValues.timeInSecs - dataValues.diffTime*i;
				 vibroChart->Series["vibro"]->Points->AddXY(x, dataValues.vibro[i]);
			 }//vibroChart->Series["vibro"]->Points->AddXY(dataValues.timeInSecs, dataValues.vibro[9]);
			 
			 thrustChart->Series["thrust"]->Points->AddXY(dataValues.timeInSecs, dataValues.tenso);
			 currentChart->Series["current"]->Points->AddXY(dataValues.timeInSecs, dataValues.shunt);
			 //temp1Chart->Series["temp1"]->Points->AddXY(dataValues.timeInSecs, dataValues.);
			 pressure1Chart->Series["pressure1"]->Points->AddXY(dataValues.timeInSecs, dataValues.vibro[8]);
			 pressure2Chart->Series["pressure2"]->Points->AddXY(dataValues.timeInSecs, dataValues.vibro[7]);
			 powerChart->Series["power"]->Points->AddXY(dataValues.timeInSecs, dataValues.vibro[6]);
			 noiseChart->Series["noise"]->Points->AddXY(dataValues.timeInSecs, dataValues.vibro[5]);
			 rpmChart->Series["rpm"]->Points->AddXY(dataValues.timeInSecs, dataValues.vibro[4]);

		 }
		 void sendExceptCheck(void)
		 {
			 ShortFrame outcomingFrame;

			 if (Globals::Connection == 1)
			 {
				 try
				 {
					 serialPort1->WriteLine(SendFrame(modeValues, outcomingFrame));
					 label1->Text = SendFrame(modeValues, outcomingFrame);
				 }
				 catch (UnauthorizedAccessException^)
				 {
					 Globals::Connection = 0;
					 connectButton->Text = L"Po³¹cz";
					 connectionStatusLabel->BackColor = System::Drawing::Color::Maroon;
					 DisplayConnectionLost();
					 try
					 {
						 serialPort1->Close();

					 }
					 catch (System::IO::IOException^)
					 {

					 }
					 calButton->Enabled = false;
					 shortTestButton->Enabled = false;
					 longTestButton->Enabled = false;
					 throttleTestButton->Enabled = false;
					 dutyButton->Enabled = false;
					 stopButton->Enabled = false;
					 startButton->Enabled = false;
					 calOffsetButton->Enabled = false;
				 }
				 catch (InvalidOperationException^)
				 {
					 Globals::Connection = 0;
					 connectButton->Text = L"Po³¹cz";
					 connectionStatusLabel->BackColor = System::Drawing::Color::Maroon;
					 DisplayConnectionLost();
					 try
					 {
						 serialPort1->Close();

					 }
					 catch (System::IO::IOException^)
					 {

					 }
					 calButton->Enabled = false;
					 shortTestButton->Enabled = false;
					 longTestButton->Enabled = false;
					 throttleTestButton->Enabled = false;
					 dutyButton->Enabled = false;
					 stopButton->Enabled = false;
					 startButton->Enabled = false;
					 calOffsetButton->Enabled = false;
				 }
				 catch (System::IO::IOException^)
				 {
					 Globals::Connection = 0;
					 connectButton->Text = L"Po³¹cz";
					 connectionStatusLabel->BackColor = System::Drawing::Color::Maroon;
					 DisplayConnectionLost();
					 try
					 {
						 serialPort1->Close();

					 }
					 catch (System::IO::IOException^)
					 {

					 }
					 calButton->Enabled = false;
					 shortTestButton->Enabled = false;
					 longTestButton->Enabled = false;
					 throttleTestButton->Enabled = false;
					 dutyButton->Enabled = false;
					 stopButton->Enabled = false;
					 startButton->Enabled = false;
					 calOffsetButton->Enabled = false;
				 }
			 }
		 }
};
}
