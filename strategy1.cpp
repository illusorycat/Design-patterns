/*
 *背景
 *某商场节假日有固定促销活动，为了加大促销力度，现提升国庆节促销活动规格；
*/



enum VacationEnum {
	VAC_Spring,
    VAC_QiXi,
	VAC_Wuyi,
	VAC_GuoQing,
    //VAC_ShengDan,
};

// 稳定的  变化的
class Promotion {
    VacationEnum vac;
public:
    double CalcPromotion(){
        if (vac == VAC_Spring){
            // 春节
        }
        else if (vac == VAC_QiXi){
            // 七夕
        }
        else if (vac == VAC_Wuyi){
            // 五一
        }
		else if (vac == VAC_GuoQing){
			// 国庆
		}
     }
    
};