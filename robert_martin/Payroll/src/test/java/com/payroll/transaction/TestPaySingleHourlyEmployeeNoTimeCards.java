package test.java.com.payroll.transaction;

import main.java.com.payroll.Date;
import main.java.com.payroll.pay.Paycheck;
import main.java.com.payroll.transaction.AddHourlyEmployee;
import main.java.com.payroll.transaction.PaydayTransaction;

public class TestPaySingleHourlyEmployeeNoTimeCards {
    public static void main(String[] args){
        int empId=2;
        AddHourlyEmployee t=new AddHourlyEmployee(empId,"Bill","Home",15.25);
        t.execute();
        Date payDate=new Date(2018,4,20);
        PaydayTransaction pt=new PaydayTransaction(payDate);
        pt.execute();
        Paycheck pc=pt.getPaycheck(empId);
        ValidatePaycheck(pt,empId,payDate,0.0);
    }
    static void ValidatePaycheck(PaydayTransaction pt,int empId,Date payDate,double pay){
        Paycheck pc=pt.getPaycheck(empId);
        assert pc!=null;
        assert pc.getPayPeriodEndDate().equals(payDate);
        assert pay==pc.getGrossPay();
        assert "Hold".equals(pc.getField("Disposition"));
        assert 0==pc.getDeduction();
        assert 0==pc.getNetPay();

    }
}
