#include "hitrater.h"

Hitrater::Hitrater(QWidget *parent)
:QMainWindow(parent),
m_datafile("output.txt")
{
	ui.setupUi(this);
}

Hitrater::~Hitrater()
{
}

void Hitrater::getData()
{
	ui.br_list->clear();
	ui.hr_list->clear();
	ui.listWidget_total->clear();

	std::vector<F32> headrate = m_app.getHeadrate();
	std::vector<F32> bodyrate = m_app.getBodyrate();
	std::vector<F32> sum = m_app.getSumRates();

	for (int i = 0; i < headrate.size(); i++)
	{
		QListWidgetItem *pitem = new QListWidgetItem();
		pitem->setText(dw::numberToString(headrate.at(i) * 100, 5).c_str());
		ui.hr_list->addItem(pitem);

		pitem = new QListWidgetItem();
		pitem->setText(dw::numberToString(bodyrate.at(i) * 100, 5).c_str());
		ui.br_list->addItem(pitem);

		pitem = new QListWidgetItem();
		pitem->setText(dw::numberToString(sum.at(i) * 100, 5).c_str());
		ui.listWidget_total->addItem(pitem);
	}

	ui.label_dmgBurstBody->setText(dw::numberToString(m_app.getDmgPerBurstBody(), 5).c_str());
	ui.label_dmgBurstHead->setText(dw::numberToString(m_app.getDmgPerBurstHead(), 5).c_str());
	ui.label_dmgBurstTotal->setText(dw::numberToString(m_app.getDmgPerBurstTotal(), 5).c_str());
}

InputSettingsUI Hitrater::readInput()
{
	// read recoil values, left one needs to be negative
	DirectX::XMFLOAT2 recoil(ui.recL_doubleSpinBox->value() * -1.0f, ui.recR_doubleSpinBox->value());
	DirectX::XMFLOAT2 aim(ui.aimX_doubleSpinBox->value(), ui.aimY_doubleSpinBox->value());

	InputSettingsUI inputSettings(ui.spread_doubleSpinBox->value(),
		ui.maxSpread_doubleSpinBox->value(),
		ui.sinc_doubleSpinBox->value(),
		recoil,
		ui.range_doubleSpinBox->value(),
		aim,
		ui.bursts_spinBox->value(),
		ui.runs_spinBox->value()
		);

	return inputSettings;
}

void Hitrater::on_pushButtonMT_clicked()
{
	//setData();

	auto inputSettings = readInput();

	m_app.run(inputSettings, true);

	getData();
}

void Hitrater::on_pushButton_clicked()
{
	auto inputSettings = readInput();

	m_app.run(inputSettings, false);

	getData();
}

void Hitrater::on_pushButton_FileOut_clicked()
{
	m_datafile.fTextout("recoil: %.4f, %.4f\n", ui.recL_doubleSpinBox->value(), ui.recR_doubleSpinBox->value());
	m_datafile.fTextout("spread: %.4f\n", ui.spread_doubleSpinBox->value());
	m_datafile.fTextout("range: %.2f\n", ui.range_doubleSpinBox->value());
	m_datafile.fTextout("Body	Head	Total\n");

	for (int i = 0; i < ui.hr_list->count(); i++)
	{
		m_datafile.fTextout(
			"%3.2f	%3.2f	%3.2f\n",
			ui.br_list->item(i)->text().toFloat(),
			ui.hr_list->item(i)->text().toFloat(),
			ui.listWidget_total->item(i)->text().toFloat()
			);
	}

	m_datafile.fTextout(
		"%3.2f	%3.2f	%3.2f\n",
		ui.label_dmgBurstBody->text().toFloat(),
		ui.label_dmgBurstHead->text().toFloat(),
		ui.label_dmgBurstTotal->text().toFloat()
		);

	m_datafile.textout("\n");
}