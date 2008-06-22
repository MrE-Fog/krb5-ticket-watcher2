#ifndef KINITDIALOG_H
#define KINITDIALOG_H

#include <qvariant.h>
#include <qpixmap.h>
#include <qdialog.h>

#include "ui_kinitdialog.h"

class KinitDialog : public QDialog, private Ui::KinitDialog
{
	Q_OBJECT

	public:
	KinitDialog(QWidget* parent = 0, const char* name = 0,
	            bool modal = FALSE, Qt::WindowFlags fl = 0 );
	~KinitDialog();

	void errorLabelSetText(const QString& text)
	{
		errorLabel->setText(text);
	}
	
	void userLineEditSetText(const QString& text)
	{
		userLineEdit->setText(text);
	}

	QString userLineEditText() const
	{
		return userLineEdit->text();
	}
	
	void realmComboBoxInsertStringList(const QStringList& stringList)
	{
		realmComboBox->insertStringList(stringList);
	}

	QString realmComboBoxCurrentText() const
	{
		return realmComboBox->currentText();
	}
	
	void passwordLineEditSetFocus()
	{
		passwordLineEdit->setFocus();
	}
	
	QString passwordLineEditText()
	{
		return passwordLineEdit->text();
	}
	
	void forwardCheckBoxSetChecked(bool check)
	{
		forwardCheckBox->setChecked(check);
	}

	bool forwardCheckBoxIsChecked() const
	{
		return forwardCheckBox->isChecked();
	}

	void proxyCheckBoxSetChecked(bool check)
	{
		proxyCheckBox->setChecked(check);
	}

	bool proxyCheckBoxIsChecked() const
	{
		return proxyCheckBox->isChecked();
	}

	void lifetimeSpinBoxSetValue(int v)
	{
		lifetimeSpinBox->setValue(v);
	}

	int lifetimeSpinBoxValue() const
	{
		return lifetimeSpinBox->value();
	}

	void lifetimeUnitComboBoxSetCurrentText(const QString& text)
	{
		lifetimeUnitComboBox->setCurrentText(text);
	}

	QString lifetimeUnitComboBoxCurrentText() const 
	{
		return lifetimeUnitComboBox->currentText();
	}

	void renewtimeSpinBoxSetValue(int v)
	{
		renewtimeSpinBox->setValue(v);
	}
	
	int renewtimeSpinBoxValue() const
	{
		return renewtimeSpinBox->value();
	}
	
	void renewUnitComboBoxSetCurrentText(const QString& text)
	{
		renewUnitComboBox->setCurrentText(text);
	}

	QString renewUnitComboBoxCurrentText() const 
	{
		return renewUnitComboBox->currentText();
	}

	void renewCheckBoxSetChecked(bool check)
	{
		renewCheckBox->setChecked(check);
	}

	bool renewCheckBoxIsChecked() const
	{
		return renewCheckBox->isChecked();
	}

	
    private:
	void init();

    private slots:
    void changeDetailsState( int state );
	void changeRenewState(int state);

};

#endif